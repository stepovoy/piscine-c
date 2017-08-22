#!/bin/sh

NETS=$(ifconfig | grep -w inet | cut -d ' ' -f 2)

if [ NETS != 0 ]
then
	echo $NETS | tr ' ' '\n'
else
	echo "Je suis perdu!"
fi