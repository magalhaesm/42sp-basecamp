#!/bin/sh
ifconfig | grep Ethernet | awk {'print $2 "  " $3 " " $4 "  " $5'}