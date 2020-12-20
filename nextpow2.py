#!/usr/bin/python

import sys

x = int(sys.argv[1])

SUM = 1
while x > 1:
	SUM+=1
	x/=2

print(SUM)
#print(2**SUM)
