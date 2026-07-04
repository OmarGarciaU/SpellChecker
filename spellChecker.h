#ifndef SPELL_CHECKER
#define SPELL_CHECKER

#include <string>
#include <vector>
#include <fstream>
class SpellChecker{
public:
    SpellChecker(){
    }
    SpellChecker(std::string wd){
        word = wd;
    }
    std::string findClosestWord();
    //std::vector<std::string> getWordsWithMatchingLetters(std::string word);
    void readFile();
private:
    std::string word;
    std::vector<std::string> wordList;
    std::string getWord() const{
        return word;
    }
};
#endif
