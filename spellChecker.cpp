#include "spellChecker.h"
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

std::string SpellChecker::findClosestWord(){
    readFile();
    std::string outWord;
    if(word.size() != 0){
        filterWordList(word.size());
    }else{
        std::cerr << "empty Word" << std::endl;
        return "";
    }

    for (int i{0}; i<word.size(); i++) {

    }
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
    for (std::string s : wordList) {
        std::cout << s << std::endl;
    }
}

void SpellChecker::filterWordList(int size){
    std::vector<std::string> newList;
    for(int i{0}; i < wordList.size(); i++) {
        if (wordList.at(i).size() == size) {
            newList.push_back(wordList.at(i));
        }
    }
    wordList = std::move(newList);
}

