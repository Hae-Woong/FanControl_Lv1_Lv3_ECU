#!/usr/bin/python3
from base64 import b64encode
import os
import requests

actor = os.getenv('actor')
token = os.getenv('token')

basic = b64encode(token.encode()).decode("ascii")
headers = { 'Authorization' : 'Basic %s' %  basic }
api = "https://github1.vg.vector.int/api/v3/users/{0}".format(actor)

address = requests.get(api, headers=headers).json()["email"]
print("::set-output name=email::{address}".format(address=address))