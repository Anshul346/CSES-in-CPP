# Weird Algorithm

**CSES Link:** [Weird Algorithm](https://cses.fi/problemset/task/1068)

**Topic:** Introductory Problems

**Difficulty:** Easy



## Problem Summary
Given the input `n`,if `n` is odd, multiply it by 3 and then add 1 to it. If `n` is even divide it by 2. Repeat the process till you get 1.

## Approach
Just follow the question's steps and print the value of `n`(updated) after each iteration. Atlast, print the `\n` character.


## Complexity
- **Time:** O(k) , where k = the number of values before reaching 1.
- **Space:** O(1)

