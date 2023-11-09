#include "bot.h"
#include <fstream>
#include <iostream>
#include <algorithm>

bot::bot() {
    std::ifstream inputFile("QA.txt");
    std::string tmpQ, tmpA;

    while (getline(inputFile, tmpQ, ';') && getline(inputFile, tmpA)) {
        questionList.emplace_back(tmpQ, tmpA);
    }
}

bool bot::isQuestion(const std::string& input) const {
    return !input.empty();
}

bool bot::check(const std::string& input) const {
    return std::any_of(questionList.begin(), questionList.end(), [&input](const question& q) {
        return input == q.getQuery();
    });
}

void bot::reply(const std::string& input) const {
    auto it = std::find_if(questionList.begin(), questionList.end(), [&input](const question& q) {
        return input == q.getQuery();
    });

    if (it != questionList.end()) {
        std::cout << it->getAnswer() << std::endl;
    }
}

void bot::storeNewQuestion(const std::string& input) {
    std::string tmp;
    std::cout << "Hmmm . . . that's a good question! Maybe you could help me? " << std::endl << input << std::endl;
    std::getline(std::cin, tmp);

    questionList.emplace_back(input, tmp);

    std::ofstream outputFile("QA.txt", std::ios::app);
    if (outputFile) {
        outputFile << std::endl << input << ";" << tmp;
    } else {
        std::cout << "Error, file didn't open." << std::endl;
    }
}

bot::~bot() {
    // Destructor implementation (if needed)
}
