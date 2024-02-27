#!/bin/bash
ifconfig | grep -o -E '([[:xdigit:]]{2}:){5}[[:xdigit:]]{2}' | awk '{print $1}'