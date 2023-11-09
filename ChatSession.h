#ifndef CHAT_SESSION_H
#define CHAT_SESSION_H

#include "bot.h"
#include <string>
#include <iostream>

class ChatSession {
public:
    ChatSession();
    void startSession();

private:
    bot chatBot;
    int depressionLevel;
    std::string userInput;

    void askQuestion(const std::string& question);
    void processInput();
    void analyzeDepressionLevel();
    void provideHelpfulResources();
    void endSession();
};

#endif // CHAT_SESSION_H
