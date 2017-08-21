#!/bin/bash

#This script is launched automatically in Erle-Brain 2
#on every boot and loads the autopilot

RPIPROC=$(cat /proc/cpuinfo |grep "Hardware" | awk '{print $3}')
if [ "$RPIPROC" == "BCM2708" ]; then
        #echo "Raspberry Pi 1/0"
        APM_BIN_DIR="/home/erle/PXFmini"
        wifi="10.0.0.2:6000"
        ros=`sudo systemctl is-enabled ros.service`
        if [ "$ros" == "enabled" ]; then
                `sudo systemctl stop ros.service`
                `sudo systemctl disable ros.service`
                `sudo systemctl stop robot_blockly.service`
                `sudo systemctl disable robot_blockly.service`
                `sudo systemctl daemon-reload`
        fi
else
        APM_BIN_DIR="/home/erle"
        wifi="10.0.0.2:6001"
#        wifi="127.0.0.1:6001"
        #echo "Raspberry Pi 2"
	VERSION=`cat /etc/issue | grep 3`
	if [ -z $VERSION ]; then
		GPS="/dev/ttyAMA0"
	else
		GPS="/dev/ttyS0"
	fi
fi

FLAGS="-l /home/erle/APM/logs -t /home/erle/APM/terrain/"

date
while :; do
        $APM_BIN_DIR/ArduCopterHexa.elf -A udp:$wifi -B $GPS -C /dev/ttyUSB0 $FLAGS
done >> /home/erle/APM/info/copter.log 2>&1
