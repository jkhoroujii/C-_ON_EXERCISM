#!/usr/bin/env bash

main () {
    input=$1
    result=""
    for (( i=${#input} ; i>=0 ; i-- )) do
        result+="${input:i:1}"
    done
    echo "$result"
}
main "$@"