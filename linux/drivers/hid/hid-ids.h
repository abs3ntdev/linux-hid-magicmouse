/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Minimal hid-ids.h for out-of-tree hid-magicmouse DKMS build.
 * Only Apple device IDs needed by hid-magicmouse.c are included.
 */

#ifndef HID_IDS_H_FILE
#define HID_IDS_H_FILE

#define USB_VENDOR_ID_APPLE		0x05ac
#define BT_VENDOR_ID_APPLE		0x004c
#define USB_DEVICE_ID_APPLE_MAGICMOUSE	0x030d
#define USB_DEVICE_ID_APPLE_MAGICMOUSE2	0x0269
#define USB_DEVICE_ID_APPLE_MAGICMOUSE2_USBC	0x0323
#define USB_DEVICE_ID_APPLE_MAGICTRACKPAD	0x030e
#define USB_DEVICE_ID_APPLE_MAGICTRACKPAD2	0x0265
#define USB_DEVICE_ID_APPLE_MAGICTRACKPAD2_USBC	0x0324

#endif
