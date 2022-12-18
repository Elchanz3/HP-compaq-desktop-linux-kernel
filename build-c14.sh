#!/bin/bash

export ARCH=x86
mkdir out

BUILD_CROSS_COMPILE=/home/chanz22/toolchains-kernel/clangs/clang-r475365b/bin/aarch64-linux-gnu-
CLANG_TRIPLE=aarch64-unknown-none-eabi
KERNEL_MAKE_ENV="DTC_EXT=$(pwd)/tools/dtc CONFIG_BUILD_ARM64_DT_OVERLAY=y"

CLANG_VERSION=16
LLVM_BIN=/home/chanz22/toolchains-kernel/clangs/clang-r475365b/bin/

DATE_START=$(date +"%s")

make -j8 -C $(pwd) O=$(pwd)/out $KERNEL_MAKE_ENV ARCH=x86 CROSS_COMPILE=$BUILD_CROSS_COMPILE \
	CLANG_DIR=$LLVM_BIN LLVM=1 LLVM_IAS=1 CLANG_TRIPLE=$CLANG_TRIPLE compaq_defconfig

make -j8 -C $(pwd) O=$(pwd)/out $KERNEL_MAKE_ENV ARCH=x86 CROSS_COMPILE=$BUILD_CROSS_COMPILE LLVM=1 LLVM_IAS=1 \
	CLANG_DIR=$LLVM_BIN CLANG_TRIPLE=$CLANG_TRIPLE oldconfig

make -j8 -C $(pwd) O=$(pwd)/out $KERNEL_MAKE_ENV ARCH=x86 CROSS_COMPILE=$BUILD_CROSS_COMPILE LLVM=1 LLVM_IAS=1 \
	CLANG_DIR=$LLVM_BIN CLANG_TRIPLE=$CLANG_TRIPLE

DATE_END=$(date +"%s")
DIFF=$(($DATE_END - $DATE_START))

echo "Time wasted: $(($DIFF / 60)) minute(s) and $(($DIFF % 60)) seconds."

make modules_install

make install
