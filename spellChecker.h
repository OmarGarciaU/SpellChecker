#ifndef SPELL_CHECKER
#define SPELL_CHECKER

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
class SpellChecker{
public:
    SpellChecker(std::string wd){
        word = wd;
        readFile();
    }
    void assignWord(std::string wd){
        word = wd;
    }
    void assignWord(){
        std::cout << "Enter Word: " << std::endl;
        std::string wd;
        std::cin >> wd;
        word = wd;
    }
    void filterWordList(int);

    std::string findClosestWord();
    //std::vector<std::string> getWordsWithMatchingLetters(std::string word);
    void readFile();
    void printWordList();
private:
    std::string word;
    std::vector<std::string> wordList;
    std::string getWord() const{
        return word;
    }
};
#endif
