/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2005-2007 Richard Hughes <richard@hughsie.com>
 *
 * Licensed under the GNU General Public License Version 2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __GPMCOMMON_H
#define __GPMCOMMON_H

#include <glib.h>

G_BEGIN_DECLS

/* do this until we depend on DeviceKit-power 009 */
#ifndef DKP_CHECK_VERSION
#define DKP_CHECK_VERSION(o)	(0)
#endif

#define	GPM_DBUS_SERVICE		"org.gnome.PowerManager"
#define	GPM_DBUS_INTERFACE		"org.gnome.PowerManager"
#define	GPM_DBUS_INTERFACE_BACKLIGHT	"org.gnome.PowerManager.Backlight"
#define	GPM_DBUS_PATH			"/org/gnome/PowerManager"
#define	GPM_DBUS_PATH_BACKLIGHT		"/org/gnome/PowerManager/Backlight"

/* common descriptions of this program */
#define GPM_NAME 			_("Power Manager")
#define GPM_DESCRIPTION 		_("Power Manager for the GNOME desktop")

/* help location */
#define GPM_HOMEPAGE_URL	 	"http://www.gnome.org/projects/gnome-power-manager/"
#define GPM_BUGZILLA_URL		"http://bugzilla.gnome.org/buglist.cgi?product=gnome-power-manager"
#define GPM_FAQ_URL			"http://live.gnome.org/GnomePowerManager/Faq"

/* change general/installed_schema whenever adding or moving keys */
#define GPM_CONF_SCHEMA_ID	3

#define GPM_CONF_DIR 				"/apps/gnome-power-manager"

/* actions */
#define GPM_CONF_ACTIONS_CRITICAL_UPS		GPM_CONF_DIR "/actions/critical_ups"
#define GPM_CONF_ACTIONS_CRITICAL_BATT		GPM_CONF_DIR "/actions/critical_battery"
#define GPM_CONF_ACTIONS_LOW_UPS		GPM_CONF_DIR "/actions/low_ups"
#define GPM_CONF_ACTIONS_SLEEP_TYPE_AC		GPM_CONF_DIR "/actions/sleep_type_ac"
#define GPM_CONF_ACTIONS_SLEEP_TYPE_BATT	GPM_CONF_DIR "/actions/sleep_type_battery"
#define GPM_CONF_ACTIONS_SLEEP_WHEN_CLOSED	GPM_CONF_DIR "/actions/event_when_closed_battery"

/* backlight stuff */
#define GPM_CONF_BACKLIGHT_ENABLE		GPM_CONF_DIR "/backlight/enable"
#define GPM_CONF_BACKLIGHT_BATTERY_REDUCE	GPM_CONF_DIR "/backlight/battery_reduce"
#define GPM_CONF_BACKLIGHT_DPMS_METHOD_AC	GPM_CONF_DIR "/backlight/dpms_method_ac"
#define GPM_CONF_BACKLIGHT_DPMS_METHOD_BATT	GPM_CONF_DIR "/backlight/dpms_method_battery"
#define GPM_CONF_BACKLIGHT_IDLE_BRIGHTNESS	GPM_CONF_DIR "/backlight/idle_brightness"
#define GPM_CONF_BACKLIGHT_IDLE_DIM_AC		GPM_CONF_DIR "/backlight/idle_dim_ac"
#define GPM_CONF_BACKLIGHT_IDLE_DIM_BATT	GPM_CONF_DIR "/backlight/idle_dim_battery"
#define GPM_CONF_BACKLIGHT_IDLE_DIM_TIME	GPM_CONF_DIR "/backlight/idle_dim_time"
#define GPM_CONF_BACKLIGHT_BRIGHTNESS_AC	GPM_CONF_DIR "/backlight/brightness_ac"
#define GPM_CONF_BACKLIGHT_BRIGHTNESS_DIM_BATT	GPM_CONF_DIR "/backlight/brightness_dim_battery"

/* buttons */
#define GPM_CONF_BUTTON_LID_AC			GPM_CONF_DIR "/buttons/lid_ac"
#define GPM_CONF_BUTTON_LID_BATT		GPM_CONF_DIR "/buttons/lid_battery"
#define GPM_CONF_BUTTON_SUSPEND			GPM_CONF_DIR "/buttons/suspend"
#define GPM_CONF_BUTTON_HIBERNATE		GPM_CONF_DIR "/buttons/hibernate"
#define GPM_CONF_BUTTON_POWER			GPM_CONF_DIR "/buttons/power"

/* general */
#define GPM_CONF_SCHEMA_VERSION			GPM_CONF_DIR "/general/installed_schema"
#define GPM_CONF_CAN_SUSPEND			GPM_CONF_DIR "/general/can_suspend"
#define GPM_CONF_CAN_HIBERNATE			GPM_CONF_DIR "/general/can_hibernate"
#define GPM_CONF_USE_TIME_POLICY		GPM_CONF_DIR "/general/use_time_for_policy"
#define GPM_CONF_USE_PROFILE_TIME		GPM_CONF_DIR "/general/use_profile_time"
#define GPM_CONF_NETWORKMANAGER_SLEEP		GPM_CONF_DIR "/general/network_sleep"
#define GPM_CONF_IDLE_CHECK_CPU			GPM_CONF_DIR "/general/check_type_cpu"
#define GPM_CONF_LAPTOP_USES_EXT_MON		GPM_CONF_DIR "/general/using_external_monitor"

/* lock */
#define GPM_CONF_LOCK_USE_SCREENSAVER		GPM_CONF_DIR "/lock/use_screensaver_settings"
#define GPM_CONF_LOCK_ON_BLANK_SCREEN		GPM_CONF_DIR "/lock/blank_screen"
#define GPM_CONF_LOCK_ON_SUSPEND		GPM_CONF_DIR "/lock/suspend"
#define GPM_CONF_LOCK_ON_HIBERNATE		GPM_CONF_DIR "/lock/hibernate"
#define GPM_CONF_LOCK_GNOME_KEYRING_SUSPEND	GPM_CONF_DIR "/lock/gnome_keyring_suspend"
#define GPM_CONF_LOCK_GNOME_KEYRING_HIBERNATE	GPM_CONF_DIR "/lock/gnome_keyring_hibernate"

/* disks */
#define GPM_CONF_DISKS_SPINDOWN_ENABLE_AC	GPM_CONF_DIR "/disks/spindown_enable_ac"
#define GPM_CONF_DISKS_SPINDOWN_ENABLE_BATT	GPM_CONF_DIR "/disks/spindown_enable_battery"
#define GPM_CONF_DISKS_SPINDOWN_TIMEOUT_AC	GPM_CONF_DIR "/disks/spindown_timeout_ac"
#define GPM_CONF_DISKS_SPINDOWN_TIMEOUT_BATT	GPM_CONF_DIR "/disks/spindown_timeout_battery"

/* notify */
#define GPM_CONF_NOTIFY_PERHAPS_RECALL		GPM_CONF_DIR "/notify/perhaps_recall"
#define GPM_CONF_NOTIFY_LOW_CAPACITY		GPM_CONF_DIR "/notify/low_capacity"
#define GPM_CONF_NOTIFY_DISCHARGING		GPM_CONF_DIR "/notify/discharging"
#define GPM_CONF_NOTIFY_FULLY_CHARGED		GPM_CONF_DIR "/notify/fully_charged"
#define GPM_CONF_NOTIFY_SLEEP_FAILED		GPM_CONF_DIR "/notify/sleep_failed"
#define GPM_CONF_NOTIFY_SLEEP_FAILED_URI	GPM_CONF_DIR "/notify/sleep_failed_uri"
#define GPM_CONF_NOTIFY_LOW_POWER		GPM_CONF_DIR "/notify/low_power"

/* statistics */
#define GPM_CONF_STATS_SHOW_AXIS_LABELS		GPM_CONF_DIR "/statistics/show_axis_labels"
#define GPM_CONF_STATS_SHOW_EVENTS		GPM_CONF_DIR "/statistics/show_events"
#define GPM_CONF_STATS_SMOOTH_DATA		GPM_CONF_DIR "/statistics/smooth_data"
#define GPM_CONF_STATS_GRAPH_TYPE		GPM_CONF_DIR "/statistics/graph_type"
#define GPM_CONF_STATS_MAX_TIME			GPM_CONF_DIR "/statistics/data_max_time"

/* thresholds */
#define GPM_CONF_THRESH_PERCENTAGE_LOW		GPM_CONF_DIR "/thresholds/percentage_low"
#define GPM_CONF_THRESH_PERCENTAGE_CRITICAL	GPM_CONF_DIR "/thresholds/percentage_critical"
#define GPM_CONF_THRESH_PERCENTAGE_ACTION	GPM_CONF_DIR "/thresholds/percentage_action"
#define GPM_CONF_THRESH_TIME_LOW		GPM_CONF_DIR "/thresholds/time_low"
#define GPM_CONF_THRESH_TIME_CRITICAL		GPM_CONF_DIR "/thresholds/time_critical"
#define GPM_CONF_THRESH_TIME_ACTION		GPM_CONF_DIR "/thresholds/time_action"

/* timeout */
#define GPM_CONF_TIMEOUT_SLEEP_COMPUTER_AC	GPM_CONF_DIR "/timeout/sleep_computer_ac"
#define GPM_CONF_TIMEOUT_SLEEP_COMPUTER_BATT	GPM_CONF_DIR "/timeout/sleep_computer_battery"
#define GPM_CONF_TIMEOUT_SLEEP_COMPUTER_UPS	GPM_CONF_DIR "/timeout/sleep_computer_ups"
#define GPM_CONF_TIMEOUT_SLEEP_DISPLAY_AC	GPM_CONF_DIR "/timeout/sleep_display_ac"
#define GPM_CONF_TIMEOUT_SLEEP_DISPLAY_BATT	GPM_CONF_DIR "/timeout/sleep_display_battery"
#define GPM_CONF_TIMEOUT_SLEEP_DISPLAY_UPS	GPM_CONF_DIR "/timeout/sleep_display_ups"

/* ui */
#define GPM_CONF_UI_ICON_POLICY			GPM_CONF_DIR "/ui/icon_policy"
#define GPM_CONF_UI_SHOW_ACTIONS_IN_MENU	GPM_CONF_DIR "/ui/show_actions_in_menu"
#define GPM_CONF_UI_ENABLE_SOUND		GPM_CONF_DIR "/ui/enable_sound"
#define GPM_CONF_UI_SHOW_CONTEXT_MENU		GPM_CONF_DIR "/ui/show_context_menu"

/* new info binary */
#define GPM_CONF_INFO_HISTORY_TIME		"/apps/gnome-power-manager/info/history_time"
#define GPM_CONF_INFO_HISTORY_TYPE		"/apps/gnome-power-manager/info/history_type"
#define GPM_CONF_INFO_HISTORY_GRAPH_SMOOTH	"/apps/gnome-power-manager/info/history_graph_smooth"
#define GPM_CONF_INFO_HISTORY_GRAPH_POINTS	"/apps/gnome-power-manager/info/history_graph_points"
#define GPM_CONF_INFO_STATS_TYPE		"/apps/gnome-power-manager/info/stats_type"
#define GPM_CONF_INFO_STATS_GRAPH_SMOOTH	"/apps/gnome-power-manager/info/stats_graph_smooth"
#define GPM_CONF_INFO_STATS_GRAPH_POINTS	"/apps/gnome-power-manager/info/stats_graph_points"
#define GPM_CONF_INFO_PAGE_NUMBER		"/apps/gnome-power-manager/info/page_number"
#define GPM_CONF_INFO_LAST_DEVICE		"/apps/gnome-power-manager/info/last_device"

/* gnome-screensaver */
#define GS_CONF_DIR				"/apps/gnome-screensaver"
#define GS_PREF_LOCK_ENABLED			GS_CONF_DIR "/lock_enabled"

/* gnome-session */
#define GPM_CONF_IDLE_DELAY			"/desktop/gnome/session/idle_delay"

typedef enum {
	GPM_ICON_POLICY_ALWAYS,
	GPM_ICON_POLICY_PRESENT,
	GPM_ICON_POLICY_CHARGE,
	GPM_ICON_POLICY_LOW,
	GPM_ICON_POLICY_CRITICAL,
	GPM_ICON_POLICY_NEVER
} GpmIconPolicy;

typedef enum {
	GPM_ACTION_POLICY_BLANK,
	GPM_ACTION_POLICY_SUSPEND,
	GPM_ACTION_POLICY_SHUTDOWN,
	GPM_ACTION_POLICY_HIBERNATE,
	GPM_ACTION_POLICY_INTERACTIVE,
	GPM_ACTION_POLICY_NOTHING
} GpmActionPolicy;

gchar		*gpm_get_timestring				(guint		 time);
GpmIconPolicy	 gpm_icon_policy_from_string			(const gchar	*policy);
const gchar	*gpm_icon_policy_to_string			(GpmIconPolicy	 policy);
GpmActionPolicy	 gpm_action_policy_from_string			(const gchar	*policy);
const gchar	*gpm_action_policy_to_string			(GpmActionPolicy  policy);
void 		 gpm_help_display				(const gchar	*link_id);
#ifdef EGG_TEST
void		 gpm_common_test				(gpointer	 data);
#endif

G_END_DECLS

#endif	/* __GPMCOMMON_H */
