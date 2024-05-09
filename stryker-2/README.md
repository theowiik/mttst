- [Setup](#setup)
  - [Requirements](#requirements)
  - [Install](#install)
- [Run Unit Tests](#run-unit-tests)
- [Run Mutation Testing](#run-mutation-testing)
- [Run App](#run-app)
- [Reporters](#reporters)
  - [HTML](#html)

## Setup

### Requirements

- .NET 8

### Install

.NET: https://learn.microsoft.com/en-ca/dotnet/core/install/linux-scripted-manual#scripted-install (latest) \
Stryker CLI: https://stryker-mutator.io/docs/stryker-net/getting-started/

Add dotnet cli to path: `export PATH="$PATH:$HOME/.dotnet"` \
`dotnet tool restore`

## Run Unit Tests

`dotnet test`

## Run Mutation Testing

`dotnet stryker`

## Run App

`dotnet run --project .\src\MathLib\MathLib.csproj`

## Reporters

Stryker Mutator has support for multiple reporters, see https://stryker-mutator.io/docs/stryker-net/reporters/

- HTML
- Progress Reporter (is not actually a reporter, shows progress)
- Dashboard reporter (uploads HTML to Stryker Dashboard https://dashboard.stryker-mutator.io/)
- Cleartext reporter
- Cleartext tree repoerter
- Dots reporter
- Json reporter
- Markdown summary reporter
- Mutation Testing Summary

### HTML

See files in `example-report` ([link](example-report/mutation-report.html))
