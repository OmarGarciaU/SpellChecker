#include "spellChecker.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::string SpellChecker::findClosestWord(){
    readFile();
    std::string inWord, outWord;
    return outWord;
}

void SpellChecker::readFile(){
    std::fstream file("alphabet.txt");
    if(!file.is_open()){
        std::cout << "File not found" << std::endl;
        return;
    }

    std::string line;
    while (getline(file, line)) {
        wordList.push_back(line);
    }
}

void SpellChecker::printWordList(){
    if (wordList.size() > 15) {
        for(int i{0}; i < 15; i++){
            std::cout << wordList.at(i) << std::endl;
        }
        std::cout << "Press p to print the whole list: ";
        char choice;
        std::cin >> choice;
        if (choice == 'p' || choice == 'P') {
            for (int i{15}; i<wordList.size(); i++) {
                std::cout << wordList.at(i) << std::endl;
            }
        }
    }
}
