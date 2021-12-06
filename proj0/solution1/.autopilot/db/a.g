#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/syan/work/hlsmht/proj0/solution1/.autopilot/db/a.g.bc ${1+"$@"}
