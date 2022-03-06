#!/bin/bash

for f in *.c
do
	cp "${f}" "${f}.bak"
done
