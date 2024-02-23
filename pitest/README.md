- [Setup](#setup)
  - [Installation with sdkman](#installation-with-sdkman)
- [Run unit tests](#run-unit-tests)
- [Run mutation tests](#run-mutation-tests)

## Setup

Requirements:

- Java 21
- Maven

### Installation with sdkman

`curl -s "https://get.sdkman.io" | bash`

`sdk install java`

`sdk install maven`

## Run unit tests

`mvn test`

## Run mutation tests

(https://pitest.org/quickstart/maven/)

`mvn test-compile org.pitest:pitest-maven:mutationCoverage`

"This will output an html report to `target/pit-reports/YYYYMMDDHHMI`."

