#pragma once
#include <string>

class question {
public:
    question() = default;
    question(std::string question, std::string answer);
    std::string getQuery() const;
    std::string getAnswer() const;
    ~question() = default;

private:
    std::string query;
    std::string answer;
};
