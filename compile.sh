export CCOMPILER=${HOME}/androidtest/cm9/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/arm-eabi-
make ARCH=arm CROSS_COMPILE=$CCOMPILER menuconfig
make ARCH=arm CROSS_COMPILE=$CCOMPILER -j`grep 'processor' /proc/cpuinfo | wc -l`
