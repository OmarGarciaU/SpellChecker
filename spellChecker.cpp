#include "spellChecker.h"
#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

std::string SpellChecker::findClosestWord(){
    std::string outWord;

    // Error Check
    if(word.size() != 0){
        filterWordList(word.size());
    }else{
        std::cerr << "empty Word" << std::endl;
        return "";
    }

    //iterate through each word in the list
    int max = 0, counter = 0,largestIndex;
    for (int i{0}; i < wordList.size(); i++) {
        for (int j{0}; j < word.size(); j++) {
            if(word.at(j) == wordList.at(i).at(j)){
                std::cout << "word.at(j): " << word.at(j) << " == wordlist.at(i).at(j)" << wordList.at(i).at(j) << std::endl;
                counter++;
            }
        }
        std::cout << "i: " << i << "counter: " << counter << std::endl;
        if (counter > max) {
            max = counter;
        }
        if(counter >= max){
            largestIndex = i;
        }
        counter = 0;
    }
    std::cout << largestIndex << std::endl;
    outWord = wordList.at(largestIndex);
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

std::string SpellChecker::toUpper(std::string s){
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){return std::toupper(c);});
    return s;
}

void SpellChecker::printWord(){
    std::cout << word << std::endl;
}
