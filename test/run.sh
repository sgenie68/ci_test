#!/bin/bash

MATCH="25 1000"
RES=$(./tester)

if [[ "$RES" =~ $MATCH ]]; then
	echo "Test passed"
	exit 0
else
	echo "Test failed"
	exit 1
fi

