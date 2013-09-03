#!/bin/sh
ANDROID_NDK=$ANDROID_NDK_ROOT
ANDROID_KERNEL=$ANDROID_KERNEL

cp $ANDROID_KERNEL/include/linux/genetlink.h $ANDROID_NDK_ROOT/platforms/android-8/arch-arm/usr/include/linux/
cp ./android_system_files/external/tcpdump/icmp6.h $ANDROID_NDK_ROOT/platforms/android-8/arch-arm/usr/include/netinet/
cp ./android_system_files/external/tcpdump/ip6.h $ANDROID_NDK_ROOT/platforms/android-8/arch-arm/usr/include/netinet/
cp $ANDROID_KERNEL/include/linux/gen_stats.h $ANDROID_NDK_ROOT/platforms/android-8/arch-arm/usr/include/linux/
cp $ANDROID_KERNEL/include/linux/ethtool.h $ANDROID_NDK_ROOT/platforms/android-8/arch-arm/usr/include/linux/
cp $ANDROID_KERNEL/include/linux/if_tunnel.h $ANDROID_NDK_ROOT/platforms/android-8/arch-arm/usr/include/linux/
cp $ANDROID_KERNEL/include/linux/mii.h $ANDROID_NDK_ROOT/platforms/android-8/arch-arm/usr/include/linux/

