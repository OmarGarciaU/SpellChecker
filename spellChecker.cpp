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
