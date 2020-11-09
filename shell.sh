#!/bin/bash

# single quotes -> prevent expansion of variables i.e literal strings
# double quotes -> for interpreting variables

WORD='script'
echo '$WORD'
echo "$WORD"
echo "This is a shell $WORD"
echo "This is a shell ${WORD}"
echo "This is a shell $WORDing"
echo "This is a shell ${WORD}ing"
WORD='cool'
echo "This is ${WORD}"

# to store output to a variable
# USER_NAME=`id` # older syntax

USER_NAME=$(id)
echo ${USER_NAME}

if [[ "${UID}" -eq 1000 ]]; then
    echo "cool"
else
    echo "not cool"
fi

# exit status 0 -> sucessful
# exit status non 0 -> termination

