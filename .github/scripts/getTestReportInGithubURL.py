#!/usr/bin/python3
import requests
import os


def insertAuth(url: str):
    authString = '{actor}:{token}@'.format(
        actor=os.environ['GITHUB_ACTOR'],
        token=os.environ['GITHUB_TOKEN']
    )
    split_url = url.split('//')
    auth_url = split_url[0]+'//'+authString+split_url[1]
    return auth_url


check_run_test_name = 'CANoe4SW_SE Tests'
accept_header = {'Accept': 'application/vnd.github.v3+json'}
list_suites_url = insertAuth('https://api.github1.vg.vector.int/repos/{repo}/commits/{sha}/check-suites'.format(
        repo=os.environ['GITHUB_REPOSITORY'],
        sha=os.environ['GITHUB_SHA']
        )
    )
list_check_suites_resp = requests.get(list_suites_url, headers=accept_header)

if list_check_suites_resp.status_code == 200:

    for x in list_check_suites_resp.json()['check_suites']:
        print(x['id'])
        print(x['url'])
        print(x['check_runs_url'])
        check_run_url = insertAuth(x['check_runs_url'])
        list_check_runs_resp = requests.get(
            check_run_url, headers=accept_header)
        # get check run where name is CANoe4SW
        for check_run in list_check_runs_resp.json()['check_runs']:
            if check_run['name'] == check_run_test_name:
                print('Found check run for Test-Report')
                print('::set-output name={name}::{url}'.format(
                    name='TEST_REPORT_URL', url=check_run['html_url']))
else:
    print('List Check suites call failed with status code: {}'.format(
        list_check_suites_resp.status_code))
    print('Test github actor env ')
    print(os.environ['GITHUB_ACTOR'])
    print(list_suites_url)
