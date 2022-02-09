## What?
A simple package that returns a list of users who've liked a tweet, given the 
tweet id.

## Why?
I saw that [Shafik](https://twitter.com/shafikyaghmour) seems 
to manually record who likes his tweets. So, I just _had_ to write an over-engineered
program to help him out (in C++ of course!).

## How?
Prerequisites: 
    Conan package manager
Ideally, conan will install all the packages, like Boost, for you.
1. Clone this repo
2. Run `conan install . --build missing -o {tweet_url} -o {twitter_api_key}`
3. Run `conan build .`


## Resources
* [Sample tweet](https://twitter.com/shafikyaghmour/status/1489788608059904000)
* Twitter
    * [GET likes](https://developer.twitter.com/en/docs/twitter-api/tweets/likes/api-reference/get-tweets-id-liking_users#Default)
    * [OAuth 2.0](https://developer.twitter.com/en/docs/authentication/oauth-2-0/bearer-tokens)
    * [Sample program getting liking users](https://github.com/twitterdev/Twitter-API-v2-sample-code/blob/main/Likes-Lookup/liking_users.py)
* Boost
    * [Sample program with http OAuth](https://github.com/boostorg/beast/blob/develop/example/http/client/async-ssl/http_client_async_ssl.cpp)
