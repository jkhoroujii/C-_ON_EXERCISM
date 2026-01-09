#!/usr/bin/env bash

stored_number="$1"
number="$2"

square_of_sum=$(( (number * (number+1) / 2) ** 2 ))
sum_of_squares=$(( (number * (number+1) * (2 * number + 1)/6) ))

difference=$(( square_of_sum - sum_of_squares ))

echo "${!stored_number}"