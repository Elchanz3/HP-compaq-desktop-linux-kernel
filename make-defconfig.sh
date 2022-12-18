#!/bin/bash

cp -v /boot/config-$(uname -r) oldconfig

cp -v /boot/config-$(uname -r) compaq_defconfig
