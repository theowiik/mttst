- [Setup](#setup)
  - [Requirements](#requirements)
  - [Install](#install)
- [Run Unit Tests](#run-unit-tests)
- [Run Mutation Testing](#run-mutation-testing)
- [Run App](#run-app)
- [Reports](#reports)
  - [Propriatary CLI](#propriatary-cli)
  - [HTML](#html)
  - [junitxml](#junitxml)

## Setup

### Requirements

- Python 3.8+
- 🚨 Does not work on Windows! 🚨

### Install

`pip install -r requirements.txt`

## Run Unit Tests

`python -m unittest discover -s tests`

## Run Mutation Testing

https://pypi.org/project/mutmut/

`mutmut run`

## Run App

`python main.py`

## Reports

### Propriatary CLI

`mutmut show`

![](readme/cli_1.png)

![](readme/cli_2.png)

### HTML

`mutmut html`

See files in `example-report` ([link](example-report/html/index.html))

![](readme/html.png)

![](readme/html_file.png)

### junitxml

https://github.com/testmoapp/junitxml

`mutmut junitxml`

See files in `example-report` ([link](example-report/junit.xml))
