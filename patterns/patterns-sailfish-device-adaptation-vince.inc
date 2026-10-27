%package -n patterns-sailfish-device-adaptation-vince
Summary: Jolla HW Adaptation vince
Requires: droid-hal-vince
Requires: droid-hal-vince-img-boot
Requires: droid-hal-vince-kernel-modules
Requires: droid-hal-vince-tools

Requires: droid-config-vince-sailfish
Requires: droid-config-vince-pulseaudio-settings
Requires: droid-config-vince-policy-settings
Requires: droid-config-vince-preinit-plugin
Requires: droid-config-vince-flashing
Requires: droid-config-vince-bluez5

Requires: droid-hal-version-vince


# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Bluetooth
Requires: bluebinder

# Telephony
Requires: ofono-ril-binder-plugin

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid-jb2q
Requires: pulseaudio-modules-droid-hidl
Requires: audiosystem-passthrough-dummy-af

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For devices with droidmedia and gst-droid built, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded
# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
#Requires: jolla-devicelock-daemon-encsfa

# For GPS
Requires: geoclue-provider-hybris

# For FM radio on some QCOM devices
Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
Requires: jolla-mediaplayer-radio

# For torch
Requires: jolla-settings-system-flashlight

# For suspend to work with enabled Wi-Fi on newer Qualcomm devices
Requires: sailfish-connman-plugin-suspend

# For data
Requires: dummy_netd

# For FP
Requires: sailfish-fpd-community
Requires: sailfish-devicelock-fpd
Requires: droid-biometry-fp

%description -n patterns-sailfish-device-adaptation-vince
Pattern with packages for vince HW Adaptation

%files -n patterns-sailfish-device-adaptation-vince
