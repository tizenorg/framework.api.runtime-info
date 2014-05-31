Name:       capi-system-runtime-info
Summary:    A Runtime Information library in Core API
Version:    0.0.3
Release:    0
Group:      System/Libraries
License:    Apache License, Version 2.0
Source0:    %{name}-%{version}.tar.gz
Source1001: 	%{name}.manifest
BuildRequires:  cmake
BuildRequires:  pkgconfig(dlog)
BuildRequires:  pkgconfig(vconf)
BuildRequires:  pkgconfig(capi-base-common)
Requires(post): /sbin/ldconfig  
Requires(postun): /sbin/ldconfig

%description


%package devel
Summary:  A Runtime Information library in Core API (Development)
Group:    Development/System
Requires: %{name} = %{version}-%{release}
Requires:  pkgconfig(capi-base-common)

%description devel



%prep
%setup -q
cp %{SOURCE1001} .

%build
MAJORVER=`echo %{version} | awk 'BEGIN {FS="."}{print $1}'`
%cmake . -DFULLVER=%{version} -DMAJORVER=${MAJORVER}


make %{?jobs:-j%jobs}

%install
rm -rf %{buildroot}

%make_install

mkdir -p %{buildroot}/usr/share/license
cp -f LICENSE.APLv2 %{buildroot}/usr/share/license/%{name}

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig


%files
%manifest %{name}.manifest
/usr/share/license/%{name}
%{_libdir}/lib*.so.*

%files devel
%manifest %{name}.manifest
%{_includedir}/system/*.h
%{_libdir}/pkgconfig/*.pc
%{_libdir}/lib*.so


