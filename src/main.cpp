#include <iostream>
#include <string>

#include <boost/beast.hpp>
#include <boost/asio.hpp>


int main(int argc, char** argv) {
    if (argc != 3) {
        std::cerr << "Fatal error: `main` wasn't passed two arguments" << std::endl;
        return EXIT_FAILURE;
    }
    
    const std::string tweet_url{argv[1]};
    const std::string api_key{argv[2]};
    
    if (tweet_url.find("status") != std::string::npos) {
        const std::string truncated_url{tweet_url.substr(tweet_url.find("status"))};
        const std::string tweet_id{truncated_url.substr(truncated_url.find('/') + 1, 

    } else {
        std::cerr << "No \"status\" field found within url" << std::endl;
        return EXIT_FAILURE;
    }
    const std::string tweet_id{tweet_url.find("")

    j

    return 0;
};
