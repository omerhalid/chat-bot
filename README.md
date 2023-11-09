# C++ Chatbot Project

## Description
This project is a C++ chatbot application designed to simulate a basic conversation flow and process user input. It demonstrates the use of object-oriented programming (OOP) principles and modern C++ features such as smart pointers and standard library containers.

## Project Structure
- `main.cpp` - Main driver code for the chatbot application.
- `ChatSession.h` and `ChatSession.cpp` - Class that manages a chat session.
- `bot.h` and `bot.cpp` - Class representing the chatbot, handling the logic of questions and responses.
- `question.h` and `question.cpp` - Class representing a question, with query and response.

## Building the Project
To build this project, you will need a C++ compiler that supports C++17. Navigate to the project directory and use the following command:

```bash
g++ -std=c++17 *.cpp -o ChatbotApp
```
This will compile all the .cpp files and create an executable named ChatbotApp.

## Running the Project

After building, run the project by executing:

```bash

./ChatbotApp
```

## Notes

    Ensure that the file QA.txt is in the same directory as the executable for the bot to function correctly.
    The chatbot is designed to simulate simple interactions and is not a substitute for professional advice or help.

## Contributors

    Ömer Cinar

## Acknowledgments

    Thanks to everyone who contributed to the development and testing of this project.

## License

This project is open source and available under the MIT License.
