#include "question.h"

question::question(std::string q, std::string a) : query(std::move(q)), answer(std::move(a)) {}

std::string question::getQuery() const {
    return query;
}

std::string question::getAnswer() const {
    return answer;
}
