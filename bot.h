#pragma once
#include <list>
#include <string>
#include "question.h"

class bot {
public:
    bot();
    bool isQuestion(const std::string& input) const;
    bool check(const std::string& input) const;
    void reply(const std::string& input) const;
    void storeNewQuestion(const std::string& input);
    ~bot();

private:
    std::list<question> questionList;
};
