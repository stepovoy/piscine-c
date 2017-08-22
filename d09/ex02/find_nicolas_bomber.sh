#!/bin/sh
cat $1 | grep "nicolas" -w -i | grep "bomber" -w -i | cut -f3 | egrep "1|2|3|4|5|6|7|8|9|0"