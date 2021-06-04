#!/bin/bash
ifconfig | grep ether | awk '{print $2}'