#include <vector>

std::vector<std::vector<char>> UsingCharactersList;

std::vector<char> UpperCaseLetters {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
std::vector<char> LowerCaseLetters {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
std::vector<char> Digits {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
std::vector<char> SpecialCharacters {'!', '@', '#', '$', '%', '^', '&', '*'};

std::vector<std::vector<char>> CharactersList {UpperCaseLetters, LowerCaseLetters, Digits, SpecialCharacters};
