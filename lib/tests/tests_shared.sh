#!/bin/sh

LD_LIBRARY_PATH="." ./program

exit_status=$?

if [ ${exit_status} -ne 0 ]
then
    echo KO : program exited with exit status: ${exit_status}
else
    echo OK
fi

