#!/bin/bash

# type -> to check if a command is shell builtin

type echo

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
    # exit 1
else
    echo "not cool"
    exit 1
fi

# exit status 0 -> sucessful
# exit status non 0 -> termination
# if value is omitted, the exit status is that of the last command status

# to check the last exit status
# ${?} stores last exit status

if [[ "${?}" -ne 0 ]]; then
    echo "command failed"
else
    echo "command succeded"
fi

# for reading input, it can be from a keyboard or from pipe

type read
type -a read

read -p "Enter username: " USER_NAME
read -p "Enter password: " -s PASSWORD

echo ${USER_NAME}
echo ${PASSWORD}

# event designator -> execute previous command that starts with the string

!e

# random data

echo ${RANDOM}

date +%s%N | sha512sum | head -c8

SYMBOLS='!@#$%^&*()_+'

ehco ${SYMBOLS} | fold -w1 | shuff | head -c1
