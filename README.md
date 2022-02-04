## What?
A simple package that returns a list of users who've liked a tweet, given the 
tweet id.

## Why?
I saw that [Shafik](https://twitter.com/shafikyaghmour/status/1487237566269067264) seems 
to manually record who likes his tweets. So, I just _had_ to write an over-engineered
program to help him out (in C++ of course!).

## How?
Prerequisites: 
    Conan package manager
Ideally, conan will install all the packages, like Boost, for you.
1. Clone this repo
2. Run `conan install . --build missing -o {tweet_url} -o {twitter_api_key}`
3. Run `conan build .`
