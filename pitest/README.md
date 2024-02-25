- [Setup](#setup)
  - [Requirements](#requirements)
  - [Install](#install)
- [Run unit tests](#run-unit-tests)
- [Run mutation tests](#run-mutation-tests)

## Setup

### Requirements

- Java 21
- Maven

### Install

`curl -s "https://get.sdkman.io" | bash` \
`sdk install java` \
`sdk install maven`

## Run unit tests

`mvn test`

## Run mutation tests

`mvn test-compile org.pitest:pitest-maven:mutationCoverage`

> "This will output an html report to `target/pit-reports/YYYYMMDDHHMI`."

(https://pitest.org/quickstart/maven/)

## Run App

`mvn run`
