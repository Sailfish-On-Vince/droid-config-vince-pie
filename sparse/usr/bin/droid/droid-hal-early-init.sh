#!/bin/sh
# Configure WCNSS before Android peripheral-manager/Bluetooth clients can
# acquire the subsystem. Its open callback sets up the board power data.

if [ -c /dev/mdss_rotator ]; then
    chown system:graphics /dev/mdss_rotator
fi

if [ -c /dev/wcnss_wlan ]; then
    echo '<6>WCNSS_BOOT_ORDER: configuring before Android HAL startup' > /dev/kmsg
    if /bin/busybox-static timeout -k 1 10 /bin/sh -c ': <> /dev/wcnss_wlan'; then
        echo '<6>WCNSS_BOOT_ORDER: configuration complete' > /dev/kmsg
    else
        echo '<3>WCNSS_BOOT_ORDER: configuration failed or timed out' > /dev/kmsg
    fi
else
    echo '<3>WCNSS_BOOT_ORDER: /dev/wcnss_wlan character device missing' > /dev/kmsg
fi

exit 0
