#!/usr/bin/python3
"""Sends a POST request to the passed URL with the email as a parameter."""
import sys
import requests

if __name__ == "__main__":
    url = sys.argv[1]
    email = {'email': sys.argv[2]}
    response = requests.post(url, data=email)
    print(response.text)
