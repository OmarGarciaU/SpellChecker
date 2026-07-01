#ifndef SPELL_CHECKER
#define SPELL_CHECKER

#include <string>
class SpellChecker{
public:
    SpellChecker(){
    }
    SpellChecker(std::string wd){
        word = wd;
    }
    std::string findClosestWord();
private:
    std::string word;
    std::string getWord() const;
};
#endif
