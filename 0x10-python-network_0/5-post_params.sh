#!/bin/bash
# a script that takes in a url and send a post request to it
curl -s -X POST -d "email=test@gmail.com&subject=I will always be here for PLD" "$1"
