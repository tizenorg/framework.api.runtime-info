/*
 * Copyright (c) 2011 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the License);
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tet_api.h>
#include <runtime_info.h>

static void startup(void);
static void cleanup(void);

void (*tet_startup)(void) = startup;
void (*tet_cleanup)(void) = cleanup;

static void utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_negative1(void);
static void utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_negative2(void);
static void utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_negative3(void);
static void utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_positive1(void);
static void utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_positive2(void);
static void utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_positive3(void);
static void utc_runtime_info_AUDIO_JACK_CONNECTED_negative1(void);
static void utc_runtime_info_AUDIO_JACK_CONNECTED_negative2(void);
static void utc_runtime_info_AUDIO_JACK_CONNECTED_negative3(void);
static void utc_runtime_info_AUDIO_JACK_CONNECTED_positive1(void);
static void utc_runtime_info_AUDIO_JACK_CONNECTED_positive2(void);
static void utc_runtime_info_AUDIO_JACK_CONNECTED_positive3(void);
static void utc_runtime_info_BATTERY_IS_CHARGING_negative1(void);
static void utc_runtime_info_BATTERY_IS_CHARGING_negative2(void);
static void utc_runtime_info_BATTERY_IS_CHARGING_negative3(void);
static void utc_runtime_info_BATTERY_IS_CHARGING_positive1(void);
static void utc_runtime_info_BATTERY_IS_CHARGING_positive2(void);
static void utc_runtime_info_BATTERY_IS_CHARGING_positive3(void);
static void utc_runtime_info_BLUETOOTH_ENABLED_negative1(void);
static void utc_runtime_info_BLUETOOTH_ENABLED_negative2(void);
static void utc_runtime_info_BLUETOOTH_ENABLED_negative3(void);
static void utc_runtime_info_BLUETOOTH_ENABLED_positive1(void);
static void utc_runtime_info_BLUETOOTH_ENABLED_positive2(void);
static void utc_runtime_info_BLUETOOTH_ENABLED_positive3(void);
static void utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_negative1(void);
static void utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_negative2(void);
static void utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_negative3(void);
static void utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_positive1(void);
static void utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_positive2(void);
static void utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_positive3(void);
static void utc_runtime_info_DATA_ROAMING_ENABLED_negative1(void);
static void utc_runtime_info_DATA_ROAMING_ENABLED_negative2(void);
static void utc_runtime_info_DATA_ROAMING_ENABLED_negative3(void);
static void utc_runtime_info_DATA_ROAMING_ENABLED_positive1(void);
static void utc_runtime_info_DATA_ROAMING_ENABLED_positive2(void);
static void utc_runtime_info_DATA_ROAMING_ENABLED_positive3(void);
static void utc_runtime_info_FIRST_DAY_OF_WEEK_negative1(void);
static void utc_runtime_info_FIRST_DAY_OF_WEEK_negative2(void);
static void utc_runtime_info_FIRST_DAY_OF_WEEK_negative3(void);
static void utc_runtime_info_FIRST_DAY_OF_WEEK_positive1(void);
static void utc_runtime_info_FIRST_DAY_OF_WEEK_positive2(void);
static void utc_runtime_info_FIRST_DAY_OF_WEEK_positive3(void);
static void utc_runtime_info_FLIGHT_MODE_ENABLED_negative1(void);
static void utc_runtime_info_FLIGHT_MODE_ENABLED_negative2(void);
static void utc_runtime_info_FLIGHT_MODE_ENABLED_negative3(void);
static void utc_runtime_info_FLIGHT_MODE_ENABLED_positive1(void);
static void utc_runtime_info_FLIGHT_MODE_ENABLED_positive2(void);
static void utc_runtime_info_FLIGHT_MODE_ENABLED_positive3(void);
static void utc_runtime_info_GPS_STATUS_negative1(void);
static void utc_runtime_info_GPS_STATUS_negative2(void);
static void utc_runtime_info_GPS_STATUS_negative3(void);
static void utc_runtime_info_GPS_STATUS_positive1(void);
static void utc_runtime_info_GPS_STATUS_positive2(void);
static void utc_runtime_info_GPS_STATUS_positive3(void);
static void utc_runtime_info_LANGUAGE_negative1(void);
static void utc_runtime_info_LANGUAGE_negative2(void);
static void utc_runtime_info_LANGUAGE_negative3(void);
static void utc_runtime_info_LANGUAGE_positive1(void);
static void utc_runtime_info_LANGUAGE_positive2(void);
static void utc_runtime_info_LANGUAGE_positive3(void);
static void utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_negative1(void);
static void utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_negative2(void);
static void utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_negative3(void);
static void utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_positive1(void);
static void utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_positive2(void);
static void utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_positive3(void);
static void utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_negative1(void);
static void utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_negative2(void);
static void utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_negative3(void);
static void utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_positive1(void);
static void utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_positive2(void);
static void utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_positive3(void);
static void utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_negative1(void);
static void utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_negative2(void);
static void utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_negative3(void);
static void utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_positive1(void);
static void utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_positive2(void);
static void utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_positive3(void);
static void utc_runtime_info_LOCATION_SERVICE_ENABLED_negative1(void);
static void utc_runtime_info_LOCATION_SERVICE_ENABLED_negative2(void);
static void utc_runtime_info_LOCATION_SERVICE_ENABLED_negative3(void);
static void utc_runtime_info_LOCATION_SERVICE_ENABLED_positive1(void);
static void utc_runtime_info_LOCATION_SERVICE_ENABLED_positive2(void);
static void utc_runtime_info_LOCATION_SERVICE_ENABLED_positive3(void);
static void utc_runtime_info_PACKET_DATA_ENABLED_negative1(void);
static void utc_runtime_info_PACKET_DATA_ENABLED_negative2(void);
static void utc_runtime_info_PACKET_DATA_ENABLED_negative3(void);
static void utc_runtime_info_PACKET_DATA_ENABLED_positive1(void);
static void utc_runtime_info_PACKET_DATA_ENABLED_positive2(void);
static void utc_runtime_info_PACKET_DATA_ENABLED_positive3(void);
static void utc_runtime_info_REGION_negative1(void);
static void utc_runtime_info_REGION_negative2(void);
static void utc_runtime_info_REGION_negative3(void);
static void utc_runtime_info_REGION_positive1(void);
static void utc_runtime_info_REGION_positive2(void);
static void utc_runtime_info_REGION_positive3(void);
static void utc_runtime_info_AUTO_ROTATION_ENABLED_negative1(void);
static void utc_runtime_info_AUTO_ROTATION_ENABLED_negative2(void);
static void utc_runtime_info_AUTO_ROTATION_ENABLED_negative3(void);
static void utc_runtime_info_AUTO_ROTATION_ENABLED_positive1(void);
static void utc_runtime_info_AUTO_ROTATION_ENABLED_positive2(void);
static void utc_runtime_info_AUTO_ROTATION_ENABLED_positive3(void);
static void utc_runtime_info_SILENT_MODE_ENABLED_negative1(void);
static void utc_runtime_info_SILENT_MODE_ENABLED_negative2(void);
static void utc_runtime_info_SILENT_MODE_ENABLED_negative3(void);
static void utc_runtime_info_SILENT_MODE_ENABLED_positive1(void);
static void utc_runtime_info_SILENT_MODE_ENABLED_positive2(void);
static void utc_runtime_info_SILENT_MODE_ENABLED_positive3(void);
static void utc_runtime_info_USB_TETHERING_ENABLED_negative1(void);
static void utc_runtime_info_USB_TETHERING_ENABLED_negative2(void);
static void utc_runtime_info_USB_TETHERING_ENABLED_negative3(void);
static void utc_runtime_info_USB_TETHERING_ENABLED_positive1(void);
static void utc_runtime_info_USB_TETHERING_ENABLED_positive2(void);
static void utc_runtime_info_USB_TETHERING_ENABLED_positive3(void);
static void utc_runtime_info_VIBRATION_ENABLED_negative1(void);
static void utc_runtime_info_VIBRATION_ENABLED_negative2(void);
static void utc_runtime_info_VIBRATION_ENABLED_negative3(void);
static void utc_runtime_info_VIBRATION_ENABLED_positive1(void);
static void utc_runtime_info_VIBRATION_ENABLED_positive2(void);
static void utc_runtime_info_VIBRATION_ENABLED_positive3(void);
static void utc_runtime_info_WIFI_HOTSPOT_ENABLED_negative1(void);
static void utc_runtime_info_WIFI_HOTSPOT_ENABLED_negative2(void);
static void utc_runtime_info_WIFI_HOTSPOT_ENABLED_negative3(void);
static void utc_runtime_info_WIFI_HOTSPOT_ENABLED_positive1(void);
static void utc_runtime_info_WIFI_HOTSPOT_ENABLED_positive2(void);
static void utc_runtime_info_WIFI_HOTSPOT_ENABLED_positive3(void);
static void utc_runtime_info_WIFI_STATUS_negative1(void);
static void utc_runtime_info_WIFI_STATUS_negative2(void);
static void utc_runtime_info_WIFI_STATUS_negative3(void);
static void utc_runtime_info_WIFI_STATUS_positive1(void);
static void utc_runtime_info_WIFI_STATUS_positive2(void);
static void utc_runtime_info_WIFI_STATUS_positive3(void);
static void utc_runtime_info_TV_OUT_CONNECTED_negative1(void);
static void utc_runtime_info_TV_OUT_CONNECTED_negative2(void);
static void utc_runtime_info_TV_OUT_CONNECTED_negative3(void);
static void utc_runtime_info_TV_OUT_CONNECTED_positive1(void);
static void utc_runtime_info_TV_OUT_CONNECTED_positive2(void);
static void utc_runtime_info_TV_OUT_CONNECTED_positive3(void);
static void utc_runtime_info_AUDIO_JACK_STATUS_negative1(void);
static void utc_runtime_info_AUDIO_JACK_STATUS_negative2(void);
static void utc_runtime_info_AUDIO_JACK_STATUS_negative3(void);
static void utc_runtime_info_AUDIO_JACK_STATUS_positive1(void);
static void utc_runtime_info_AUDIO_JACK_STATUS_positive2(void);
static void utc_runtime_info_AUDIO_JACK_STATUS_positive3(void);
static void utc_runtime_info_SLIDING_KEYBOARD_OPENED_negative1(void);
static void utc_runtime_info_SLIDING_KEYBOARD_OPENED_negative2(void);
static void utc_runtime_info_SLIDING_KEYBOARD_OPENED_negative3(void);
static void utc_runtime_info_SLIDING_KEYBOARD_OPENED_positive1(void);
static void utc_runtime_info_SLIDING_KEYBOARD_OPENED_positive2(void);
static void utc_runtime_info_SLIDING_KEYBOARD_OPENED_positive3(void);
static void utc_runtime_info_USB_CONNECTED_negative1(void);
static void utc_runtime_info_USB_CONNECTED_negative2(void);
static void utc_runtime_info_USB_CONNECTED_negative3(void);
static void utc_runtime_info_USB_CONNECTED_positive1(void);
static void utc_runtime_info_USB_CONNECTED_positive2(void);
static void utc_runtime_info_USB_CONNECTED_positive3(void);
static void utc_runtime_info_CHARGER_CONNECTED_negative1(void);
static void utc_runtime_info_CHARGER_CONNECTED_negative2(void);
static void utc_runtime_info_CHARGER_CONNECTED_negative3(void);
static void utc_runtime_info_CHARGER_CONNECTED_positive1(void);
static void utc_runtime_info_CHARGER_CONNECTED_positive2(void);
static void utc_runtime_info_CHARGER_CONNECTED_positive3(void);
static void utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_negative1(void);
static void utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_negative2(void);
static void utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_negative3(void);
static void utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_positive1(void);
static void utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_positive2(void);
static void utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_positive3(void);
static void utc_runtime_info_set_changed_cb(void);
static void utc_runtime_info_unset_changed_cb(void);

struct tet_testlist tet_testlist[] = {
	{utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_negative1, 1},
	{utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_negative2, 1},
	{utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_negative3, 1},
	{utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_positive1, 1},
	{utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_positive2, 1},
	{utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_positive3, 1},
	{utc_runtime_info_AUDIO_JACK_CONNECTED_negative1, 1},
	{utc_runtime_info_AUDIO_JACK_CONNECTED_negative2, 1},
	{utc_runtime_info_AUDIO_JACK_CONNECTED_negative3, 1},
	{utc_runtime_info_AUDIO_JACK_CONNECTED_positive1, 1},
	{utc_runtime_info_AUDIO_JACK_CONNECTED_positive2, 1},
	{utc_runtime_info_AUDIO_JACK_CONNECTED_positive3, 1},
	{utc_runtime_info_BATTERY_IS_CHARGING_negative1, 1},
	{utc_runtime_info_BATTERY_IS_CHARGING_negative2, 1},
	{utc_runtime_info_BATTERY_IS_CHARGING_negative3, 1},
	{utc_runtime_info_BATTERY_IS_CHARGING_positive1, 1},
	{utc_runtime_info_BATTERY_IS_CHARGING_positive2, 1},
	{utc_runtime_info_BATTERY_IS_CHARGING_positive3, 1},
	{utc_runtime_info_BLUETOOTH_ENABLED_negative1, 1},
	{utc_runtime_info_BLUETOOTH_ENABLED_negative2, 1},
	{utc_runtime_info_BLUETOOTH_ENABLED_negative3, 1},
	{utc_runtime_info_BLUETOOTH_ENABLED_positive1, 1},
	{utc_runtime_info_BLUETOOTH_ENABLED_positive2, 1},
	{utc_runtime_info_BLUETOOTH_ENABLED_positive3, 1},
	{utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_negative1, 1},
	{utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_negative2, 1},
	{utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_negative3, 1},
	{utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_positive1, 1},
	{utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_positive2, 1},
	{utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_positive3, 1},
	{utc_runtime_info_DATA_ROAMING_ENABLED_negative1, 1},
	{utc_runtime_info_DATA_ROAMING_ENABLED_negative2, 1},
	{utc_runtime_info_DATA_ROAMING_ENABLED_negative3, 1},
	{utc_runtime_info_DATA_ROAMING_ENABLED_positive1, 1},
	{utc_runtime_info_DATA_ROAMING_ENABLED_positive2, 1},
	{utc_runtime_info_DATA_ROAMING_ENABLED_positive3, 1},
	{utc_runtime_info_FIRST_DAY_OF_WEEK_negative1, 1},
	{utc_runtime_info_FIRST_DAY_OF_WEEK_negative2, 1},
	{utc_runtime_info_FIRST_DAY_OF_WEEK_negative3, 1},
	{utc_runtime_info_FIRST_DAY_OF_WEEK_positive1, 1},
	{utc_runtime_info_FIRST_DAY_OF_WEEK_positive2, 1},
	{utc_runtime_info_FIRST_DAY_OF_WEEK_positive3, 1},
	{utc_runtime_info_FLIGHT_MODE_ENABLED_negative1, 1},
	{utc_runtime_info_FLIGHT_MODE_ENABLED_negative2, 1},
	{utc_runtime_info_FLIGHT_MODE_ENABLED_negative3, 1},
	{utc_runtime_info_FLIGHT_MODE_ENABLED_positive1, 1},
	{utc_runtime_info_FLIGHT_MODE_ENABLED_positive2, 1},
	{utc_runtime_info_FLIGHT_MODE_ENABLED_positive3, 1},
	{utc_runtime_info_GPS_STATUS_negative1, 1},
	{utc_runtime_info_GPS_STATUS_negative2, 1},
	{utc_runtime_info_GPS_STATUS_negative3, 1},
	{utc_runtime_info_GPS_STATUS_positive1, 1},
	{utc_runtime_info_GPS_STATUS_positive2, 1},
	{utc_runtime_info_GPS_STATUS_positive3, 1},
	{utc_runtime_info_LANGUAGE_negative1, 1},
	{utc_runtime_info_LANGUAGE_negative2, 1},
	{utc_runtime_info_LANGUAGE_negative3, 1},
	{utc_runtime_info_LANGUAGE_positive1, 1},
	{utc_runtime_info_LANGUAGE_positive2, 1},
	{utc_runtime_info_LANGUAGE_positive3, 1},
	{utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_negative1, 1},
	{utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_negative2, 1},
	{utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_negative3, 1},
	{utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_positive1, 1},
	{utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_positive2, 1},
	{utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_positive3, 1},
	{utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_negative1, 1},
	{utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_negative2, 1},
	{utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_negative3, 1},
	{utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_positive1, 1},
	{utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_positive2, 1},
	{utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_positive3, 1},
	{utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_negative1, 1},
	{utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_negative2, 1},
	{utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_negative3, 1},
	{utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_positive1, 1},
	{utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_positive2, 1},
	{utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_positive3, 1},
	{utc_runtime_info_LOCATION_SERVICE_ENABLED_negative1, 1},
	{utc_runtime_info_LOCATION_SERVICE_ENABLED_negative2, 1},
	{utc_runtime_info_LOCATION_SERVICE_ENABLED_negative3, 1},
	{utc_runtime_info_LOCATION_SERVICE_ENABLED_positive1, 1},
	{utc_runtime_info_LOCATION_SERVICE_ENABLED_positive2, 1},
	{utc_runtime_info_LOCATION_SERVICE_ENABLED_positive3, 1},
	{utc_runtime_info_PACKET_DATA_ENABLED_negative1, 1},
	{utc_runtime_info_PACKET_DATA_ENABLED_negative2, 1},
	{utc_runtime_info_PACKET_DATA_ENABLED_negative3, 1},
	{utc_runtime_info_PACKET_DATA_ENABLED_positive1, 1},
	{utc_runtime_info_PACKET_DATA_ENABLED_positive2, 1},
	{utc_runtime_info_PACKET_DATA_ENABLED_positive3, 1},
	{utc_runtime_info_REGION_negative1, 1},
	{utc_runtime_info_REGION_negative2, 1},
	{utc_runtime_info_REGION_negative3, 1},
	{utc_runtime_info_REGION_positive1, 1},
	{utc_runtime_info_REGION_positive2, 1},
	{utc_runtime_info_REGION_positive3, 1},
	{utc_runtime_info_AUTO_ROTATION_ENABLED_negative1, 1},
	{utc_runtime_info_AUTO_ROTATION_ENABLED_negative2, 1},
	{utc_runtime_info_AUTO_ROTATION_ENABLED_negative3, 1},
	{utc_runtime_info_AUTO_ROTATION_ENABLED_positive1, 1},
	{utc_runtime_info_AUTO_ROTATION_ENABLED_positive2, 1},
	{utc_runtime_info_AUTO_ROTATION_ENABLED_positive3, 1},
	{utc_runtime_info_SILENT_MODE_ENABLED_negative1, 1},
	{utc_runtime_info_SILENT_MODE_ENABLED_negative2, 1},
	{utc_runtime_info_SILENT_MODE_ENABLED_negative3, 1},
	{utc_runtime_info_SILENT_MODE_ENABLED_positive1, 1},
	{utc_runtime_info_SILENT_MODE_ENABLED_positive2, 1},
	{utc_runtime_info_SILENT_MODE_ENABLED_positive3, 1},
	{utc_runtime_info_USB_TETHERING_ENABLED_negative1, 1},
	{utc_runtime_info_USB_TETHERING_ENABLED_negative2, 1},
	{utc_runtime_info_USB_TETHERING_ENABLED_negative3, 1},
	{utc_runtime_info_USB_TETHERING_ENABLED_positive1, 1},
	{utc_runtime_info_USB_TETHERING_ENABLED_positive2, 1},
	{utc_runtime_info_USB_TETHERING_ENABLED_positive3, 1},
	{utc_runtime_info_VIBRATION_ENABLED_negative1, 1},
	{utc_runtime_info_VIBRATION_ENABLED_negative2, 1},
	{utc_runtime_info_VIBRATION_ENABLED_negative3, 1},
	{utc_runtime_info_VIBRATION_ENABLED_positive1, 1},
	{utc_runtime_info_VIBRATION_ENABLED_positive2, 1},
	{utc_runtime_info_VIBRATION_ENABLED_positive3, 1},
	{utc_runtime_info_WIFI_HOTSPOT_ENABLED_negative1, 1},
	{utc_runtime_info_WIFI_HOTSPOT_ENABLED_negative2, 1},
	{utc_runtime_info_WIFI_HOTSPOT_ENABLED_negative3, 1},
	{utc_runtime_info_WIFI_HOTSPOT_ENABLED_positive1, 1},
	{utc_runtime_info_WIFI_HOTSPOT_ENABLED_positive2, 1},
	{utc_runtime_info_WIFI_HOTSPOT_ENABLED_positive3, 1},
	{utc_runtime_info_WIFI_STATUS_negative1, 1},
	{utc_runtime_info_WIFI_STATUS_negative2, 1},
	{utc_runtime_info_WIFI_STATUS_negative3, 1},
	{utc_runtime_info_WIFI_STATUS_positive1, 1},
	{utc_runtime_info_WIFI_STATUS_positive2, 1},
	{utc_runtime_info_WIFI_STATUS_positive3, 1},
	{utc_runtime_info_TV_OUT_CONNECTED_negative1, 1},
	{utc_runtime_info_TV_OUT_CONNECTED_negative2, 1},
	{utc_runtime_info_TV_OUT_CONNECTED_negative3, 1},
	{utc_runtime_info_TV_OUT_CONNECTED_positive1, 1},
	{utc_runtime_info_TV_OUT_CONNECTED_positive2, 1},
	{utc_runtime_info_TV_OUT_CONNECTED_positive3, 1},
	{utc_runtime_info_AUDIO_JACK_STATUS_negative1, 1},
	{utc_runtime_info_AUDIO_JACK_STATUS_negative2, 1},
	{utc_runtime_info_AUDIO_JACK_STATUS_negative3, 1},
	{utc_runtime_info_AUDIO_JACK_STATUS_positive1, 1},
	{utc_runtime_info_AUDIO_JACK_STATUS_positive2, 1},
	{utc_runtime_info_AUDIO_JACK_STATUS_positive3, 1},
	{utc_runtime_info_SLIDING_KEYBOARD_OPENED_negative1, 1},
	{utc_runtime_info_SLIDING_KEYBOARD_OPENED_negative2, 1},
	{utc_runtime_info_SLIDING_KEYBOARD_OPENED_negative3, 1},
	{utc_runtime_info_SLIDING_KEYBOARD_OPENED_positive1, 1},
	{utc_runtime_info_SLIDING_KEYBOARD_OPENED_positive2, 1},
	{utc_runtime_info_SLIDING_KEYBOARD_OPENED_positive3, 1},
	{utc_runtime_info_USB_CONNECTED_negative1, 1},
	{utc_runtime_info_USB_CONNECTED_negative2, 1},
	{utc_runtime_info_USB_CONNECTED_negative3, 1},
	{utc_runtime_info_USB_CONNECTED_positive1, 1},
	{utc_runtime_info_USB_CONNECTED_positive2, 1},
	{utc_runtime_info_USB_CONNECTED_positive3, 1},
	{utc_runtime_info_CHARGER_CONNECTED_negative1, 1},
	{utc_runtime_info_CHARGER_CONNECTED_negative2, 1},
	{utc_runtime_info_CHARGER_CONNECTED_negative3, 1},
	{utc_runtime_info_CHARGER_CONNECTED_positive1, 1},
	{utc_runtime_info_CHARGER_CONNECTED_positive2, 1},
	{utc_runtime_info_CHARGER_CONNECTED_positive3, 1},
	{utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_negative1, 1},
	{utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_negative2, 1},
	{utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_negative3, 1},
	{utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_positive1, 1},
	{utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_positive2, 1},
	{utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_positive3, 1},
	{utc_runtime_info_set_changed_cb, 1},
	{utc_runtime_info_unset_changed_cb, 1},
	{NULL, 0},
};

static void startup(void)
{

}

static void cleanup(void)
{
	/* end of TC */
}

void runtime_info_changed(runtime_info_key_e key, void *user_data)
{

}

/* negative1 : invalid data-type */
/* negative2 : invalid input-param */
/* negative3 : invalid changed callback */
/* positive1 : get the value */
/* positive2 : set changed callback */
/* positive3 : unset changed callback */

void utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_24HOUR_CLOCK_FORMAT_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_24HOUR_CLOCK_FORMAT_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_24HOUR_CLOCK_FORMAT_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_24HOUR_CLOCK_FORMAT_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_24HOUR_CLOCK_FORMAT_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_24HOUR_CLOCK_FORMAT_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_24HOUR_CLOCK_FORMAT_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUDIO_JACK_CONNECTED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUDIO_JACK_CONNECTED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUDIO_JACK_CONNECTED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUDIO_JACK_CONNECTED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUDIO_JACK_CONNECTED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUDIO_JACK_CONNECTED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUDIO_JACK_CONNECTED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUDIO_JACK_CONNECTED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUDIO_JACK_CONNECTED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUDIO_JACK_CONNECTED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUDIO_JACK_CONNECTED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUDIO_JACK_CONNECTED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BATTERY_IS_CHARGING_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BATTERY_IS_CHARGING;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BATTERY_IS_CHARGING_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BATTERY_IS_CHARGING;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BATTERY_IS_CHARGING_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BATTERY_IS_CHARGING;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BATTERY_IS_CHARGING_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BATTERY_IS_CHARGING;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BATTERY_IS_CHARGING_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BATTERY_IS_CHARGING;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BATTERY_IS_CHARGING_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BATTERY_IS_CHARGING;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BLUETOOTH_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BLUETOOTH_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BLUETOOTH_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BLUETOOTH_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BLUETOOTH_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BLUETOOTH_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BLUETOOTH_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BLUETOOTH_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BLUETOOTH_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BLUETOOTH_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BLUETOOTH_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BLUETOOTH_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BLUETOOTH_TETHERING_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BLUETOOTH_TETHERING_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BLUETOOTH_TETHERING_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BLUETOOTH_TETHERING_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BLUETOOTH_TETHERING_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_BLUETOOTH_TETHERING_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_BLUETOOTH_TETHERING_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_DATA_ROAMING_ENABLED_negative1(void){
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_DATA_ROAMING_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_DATA_ROAMING_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_DATA_ROAMING_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_DATA_ROAMING_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_DATA_ROAMING_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_DATA_ROAMING_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_DATA_ROAMING_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_DATA_ROAMING_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_DATA_ROAMING_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_DATA_ROAMING_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_DATA_ROAMING_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_FIRST_DAY_OF_WEEK_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_FIRST_DAY_OF_WEEK;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_FIRST_DAY_OF_WEEK_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_FIRST_DAY_OF_WEEK;

	retcode = runtime_info_get_value_int(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_FIRST_DAY_OF_WEEK_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_FIRST_DAY_OF_WEEK;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_FIRST_DAY_OF_WEEK_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_FIRST_DAY_OF_WEEK;
	int value;

	retcode = runtime_info_get_value_int(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_FIRST_DAY_OF_WEEK_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_FIRST_DAY_OF_WEEK;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_FIRST_DAY_OF_WEEK_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_FIRST_DAY_OF_WEEK;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_FLIGHT_MODE_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_FLIGHT_MODE_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_FLIGHT_MODE_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_FLIGHT_MODE_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_FLIGHT_MODE_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_FLIGHT_MODE_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_FLIGHT_MODE_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_FLIGHT_MODE_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_FLIGHT_MODE_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_FLIGHT_MODE_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_FLIGHT_MODE_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_FLIGHT_MODE_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_GPS_STATUS_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_GPS_STATUS;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_GPS_STATUS_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_GPS_STATUS;

	retcode = runtime_info_get_value_int(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_GPS_STATUS_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_GPS_STATUS;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_GPS_STATUS_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_GPS_STATUS;
	int value;

	retcode = runtime_info_get_value_int(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_GPS_STATUS_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_GPS_STATUS;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_GPS_STATUS_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_GPS_STATUS;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LANGUAGE_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LANGUAGE;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LANGUAGE_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LANGUAGE;

	retcode = runtime_info_get_value_string(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LANGUAGE_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LANGUAGE;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LANGUAGE_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LANGUAGE;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LANGUAGE_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LANGUAGE;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LANGUAGE_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LANGUAGE;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_ADVANCED_GPS_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_ADVANCED_GPS_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_ADVANCED_GPS_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_ADVANCED_GPS_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_ADVANCED_GPS_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_ADVANCED_GPS_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_ADVANCED_GPS_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}


void utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_NETWORK_POSITION_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_NETWORK_POSITION_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_NETWORK_POSITION_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_NETWORK_POSITION_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_NETWORK_POSITION_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_NETWORK_POSITION_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_NETWORK_POSITION_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}


void utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_SENSOR_AIDING_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}


void utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_SENSOR_AIDING_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_SENSOR_AIDING_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_SENSOR_AIDING_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_SENSOR_AIDING_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_SENSOR_AIDING_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_SENSOR_AIDING_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_SERVICE_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_SERVICE_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_SERVICE_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_SERVICE_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_SERVICE_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_SERVICE_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_SERVICE_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_SERVICE_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_SERVICE_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_SERVICE_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_LOCATION_SERVICE_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_LOCATION_SERVICE_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_PACKET_DATA_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_PACKET_DATA_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}


void utc_runtime_info_PACKET_DATA_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_PACKET_DATA_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_PACKET_DATA_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_PACKET_DATA_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_PACKET_DATA_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_PACKET_DATA_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_PACKET_DATA_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_PACKET_DATA_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_PACKET_DATA_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_PACKET_DATA_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_REGION_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_REGION;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_REGION_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_REGION;

	retcode = runtime_info_get_value_string(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_REGION_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_REGION;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_REGION_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_REGION;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_REGION_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_REGION;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_REGION_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_REGION;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUTO_ROTATION_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUTO_ROTATION_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUTO_ROTATION_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUTO_ROTATION_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUTO_ROTATION_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUTO_ROTATION_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUTO_ROTATION_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUTO_ROTATION_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUTO_ROTATION_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUTO_ROTATION_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUTO_ROTATION_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUTO_ROTATION_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_SILENT_MODE_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_SILENT_MODE_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_SILENT_MODE_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_SILENT_MODE_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_SILENT_MODE_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_SILENT_MODE_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_SILENT_MODE_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_SILENT_MODE_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_SILENT_MODE_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_SILENT_MODE_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_SILENT_MODE_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_SILENT_MODE_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_USB_TETHERING_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_USB_TETHERING_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_USB_TETHERING_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_USB_TETHERING_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_USB_TETHERING_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_USB_TETHERING_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_USB_TETHERING_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_USB_TETHERING_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_USB_TETHERING_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_USB_TETHERING_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_USB_TETHERING_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_USB_TETHERING_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_VIBRATION_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_VIBRATION_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_VIBRATION_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_VIBRATION_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_VIBRATION_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_VIBRATION_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_WIFI_HOTSPOT_ENABLED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_WIFI_HOTSPOT_ENABLED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_WIFI_HOTSPOT_ENABLED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_WIFI_HOTSPOT_ENABLED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_WIFI_HOTSPOT_ENABLED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_WIFI_HOTSPOT_ENABLED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_WIFI_HOTSPOT_ENABLED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_WIFI_HOTSPOT_ENABLED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_WIFI_HOTSPOT_ENABLED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_WIFI_HOTSPOT_ENABLED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_WIFI_HOTSPOT_ENABLED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_WIFI_HOTSPOT_ENABLED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_WIFI_STATUS_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_WIFI_STATUS;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_WIFI_STATUS_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_WIFI_STATUS;

	retcode = runtime_info_get_value_int(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_WIFI_STATUS_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_WIFI_STATUS;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_WIFI_STATUS_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_WIFI_STATUS;
	int value;

	retcode = runtime_info_get_value_int(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_WIFI_STATUS_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_WIFI_STATUS;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_WIFI_STATUS_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_WIFI_STATUS;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_TV_OUT_CONNECTED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_TV_OUT_CONNECTED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_TV_OUT_CONNECTED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_TV_OUT_CONNECTED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_TV_OUT_CONNECTED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_TV_OUT_CONNECTED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_TV_OUT_CONNECTED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_TV_OUT_CONNECTED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_TV_OUT_CONNECTED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_TV_OUT_CONNECTED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_TV_OUT_CONNECTED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_TV_OUT_CONNECTED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUDIO_JACK_STATUS_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUDIO_JACK_STATUS;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUDIO_JACK_STATUS_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUDIO_JACK_STATUS;

	retcode = runtime_info_get_value_int(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUDIO_JACK_STATUS_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUDIO_JACK_STATUS;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUDIO_JACK_STATUS_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUDIO_JACK_STATUS;
	int value;

	retcode = runtime_info_get_value_int(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUDIO_JACK_STATUS_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUDIO_JACK_STATUS;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_AUDIO_JACK_STATUS_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_AUDIO_JACK_STATUS;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_SLIDING_KEYBOARD_OPENED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_SLIDING_KEYBOARD_OPENED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_SLIDING_KEYBOARD_OPENED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_SLIDING_KEYBOARD_OPENED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_SLIDING_KEYBOARD_OPENED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_SLIDING_KEYBOARD_OPENED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_SLIDING_KEYBOARD_OPENED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_SLIDING_KEYBOARD_OPENED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_SLIDING_KEYBOARD_OPENED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_SLIDING_KEYBOARD_OPENED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_SLIDING_KEYBOARD_OPENED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_SLIDING_KEYBOARD_OPENED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_USB_CONNECTED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_USB_CONNECTED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_USB_CONNECTED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_USB_CONNECTED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_USB_CONNECTED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_USB_CONNECTED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_USB_CONNECTED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_USB_CONNECTED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_USB_CONNECTED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_USB_CONNECTED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_USB_CONNECTED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_USB_CONNECTED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_CHARGER_CONNECTED_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_CHARGER_CONNECTED;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_CHARGER_CONNECTED_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_CHARGER_CONNECTED;

	retcode = runtime_info_get_value_bool(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_CHARGER_CONNECTED_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_CHARGER_CONNECTED;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_CHARGER_CONNECTED_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_CHARGER_CONNECTED;
	bool value;

	retcode = runtime_info_get_value_bool(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_CHARGER_CONNECTED_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_CHARGER_CONNECTED;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_CHARGER_CONNECTED_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_CHARGER_CONNECTED;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_negative1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_LEVEL_HAPTIC_FEEDBACK;
	char *value;

	retcode = runtime_info_get_value_string(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_negative2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_LEVEL_HAPTIC_FEEDBACK;

	retcode = runtime_info_get_value_int(key, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_negative3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_LEVEL_HAPTIC_FEEDBACK;

	retcode = runtime_info_set_changed_cb(key, NULL, NULL);

	if (retcode == RUNTIME_INFO_ERROR_INVALID_PARAMETER)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_positive1(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_LEVEL_HAPTIC_FEEDBACK;
	int value;

	retcode = runtime_info_get_value_int(key, &value);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_positive2(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_LEVEL_HAPTIC_FEEDBACK;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

void utc_runtime_info_VIBRATION_LEVEL_HAPTIC_FEEDBACK_positive3(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_LEVEL_HAPTIC_FEEDBACK;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

static void utc_runtime_info_set_changed_cb(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_LEVEL_HAPTIC_FEEDBACK;

	retcode = runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}

static void utc_runtime_info_unset_changed_cb(void)
{
	char *TC_NAME = __FUNCTION__;
	int retcode;
	runtime_info_key_e key = RUNTIME_INFO_KEY_VIBRATION_LEVEL_HAPTIC_FEEDBACK;

	runtime_info_set_changed_cb(key, runtime_info_changed, NULL);

	retcode = runtime_info_unset_changed_cb(key);

	if (retcode == RUNTIME_INFO_ERROR_NONE)
		dts_pass(TC_NAME, "passed");
	else
		dts_fail(TC_NAME, "failed");
}