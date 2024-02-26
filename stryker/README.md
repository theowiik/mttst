- [Setup](#setup)
  - [Requirements](#requirements)
  - [Install](#install)
- [Run Unit Tests](#run-unit-tests)
- [Run Mutation Testing](#run-mutation-testing)
- [Run App](#run-app)

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

`dotnet run --project .\src\MathzApp\MathzApp.csproj`
