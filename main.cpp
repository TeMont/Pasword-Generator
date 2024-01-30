#include <iostream>
#include <windows.h>
#include <string>
#include <time.h>
#include "lib.hpp"



int main() {

    srand(time(NULL));

    while (1) {

        std::string Password;
        
        std::cout << "\x1B[2J\x1B[H";

        while (UsingCharactersList.size() < 1) {

            char choice;

            std::string QuestionsList[] = { "Use Lower Case Letters?", "Use Upper Case Letters?", "Use Digits?", "Use Special Characters?" };

            for (int x = 0; x < CharactersList.size(); ++x) {
                std::cout << QuestionsList[x] << "(Y / N)" << std::endl;
                std::cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    UsingCharactersList.push_back(CharactersList[x]);
                }

            }

            std::cout << "\x1B[2J\x1B[H";

            if (UsingCharactersList.size() < 1) {
                std::cout << "You Must Choose At Least One Characters Set" << std::endl;
                Sleep(2000);
            }
        }


        int PasswordSize = 0;

        while (std::cin.fail() || PasswordSize < 1) {

            std::cout << "Enter Password Size" << std::endl;
            std::cin >> PasswordSize;

            std::cout << "\x1B[2J\x1B[H";

            if (std::cin.fail() || PasswordSize < 1) {
                std::cin.clear();
                std::cin.ignore();
                std::cout << "You Entered Incorrect Password Size" << std::endl;
                Sleep(2000);
            }
        }

        for (int i = 0; i < PasswordSize; ++i) {
            int SetNum = (rand() % UsingCharactersList.size() + 0);
            int CharNum = (rand() % UsingCharactersList[SetNum].size() + 0);
            Password.push_back(UsingCharactersList[SetNum][CharNum]);
        }

        std::cout << "\x1B[2J\x1B[H";

        std::cout << Password << std::endl;
        
        Sleep(5000);
    }

    return 0;
}
