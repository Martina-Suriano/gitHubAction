[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/A0diYlQ1)
# Homework 1

Write a simple C++ program that takes in input a sequence of positive integers, whose last number is `0`, and outputs their sum. Then, you should create a GitHub workflow composed of two jobs, `build` and `run` that perform the following:

1. `build` job builds the program, and uploads a build artifact;
2. `run` job downloads the build artifact and executes the program on an input of your choice, provided by a workflow step (shell script).

If you don't know C++ don't worry: do the same exercise with a language you know, substitute the `build` job with somethings else, using your source code as an artifact.

Furthermore, you must create a branch protection rule on the `master` branch, that requires the `build` job to succeed before being allowed to merge pull requests. As a last thing, add something to your C++ program by means of a pull request, checking that your branch protection rule works.

`Actions` that might be useful:
- `Checkout`
- `{Upload, Download} Build Artifact`
