# linux-hid-magicmouse
Add support to change click pressure and haptic feedback for magic trackpad 2

This fork is ported to **Linux v7.0** (tested on CachyOS 7.0.5-2).

## DKMS

Install with:

    sudo ./scripts/install.sh

Remove with:

    sudo ./scripts/remove.sh


## Configuration

By default, it works the same as the stock driver. To enable haptic click feedback, load the module with `host_click=on`:

    sudo modprobe -r hid_magicmouse
    sudo modprobe hid-magicmouse host_click=on button_down_param=0x503f0606 button_up_param=0x35110404

### Parameters

- `host_click` - Enable host click mode (haptic feedback). Default: `off`
- `button_down_param` - Pressure threshold + vibration pattern for press. Default: `0x40170606` (medium, same as macOS)
- `button_up_param` - Pressure threshold + vibration pattern for release. Default: `0x26140000` (medium, same as macOS)

The first byte of each param is the pressure threshold. The remaining three bytes control vibration pattern. Set the last two bytes to `0x00` for silent mode.

### Persist via modprobe.d

To make haptic feedback persistent across reboots:

    echo 'options hid-magicmouse host_click=on' | sudo tee /etc/modprobe.d/hid-magicmouse.conf

### Pressure Presets

| Feel     | button_down_param | button_up_param |
|----------|-------------------|-----------------|
| Light    | 0x301f0606        | 0x20100404      |
| Medium   | 0x40170606        | 0x26140000      |
| Firm     | 0x503f0606        | 0x35110404      |
| Silent   | 0x40170000        | 0x26140000      |

## Thanks

* https://github.com/nexustar/linux-hid-magicmouse (original haptic patch)
* https://github.com/japalvia/linux-hid-magicmouse (v6.12 port)
* https://github.com/mwyborski/Linux-Magic-Trackpad-2-Driver
* https://github.com/ponyfleisch/hid-magictrackpad2
