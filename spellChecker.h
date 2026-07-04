#ifndef SPELL_CHECKER
#define SPELL_CHECKER

#include <string>
#include <vector>
class SpellChecker{
public:
    SpellChecker(){
    }
    SpellChecker(std::string wd){
        word = wd;
    }
    std::string findClosestWord();
    std::vector<std::string> getWordsWithMatchingLetters(std::string word);
private:
    std::string word;
    std::string getWord() const{
        return word;
    }
};
#endif
