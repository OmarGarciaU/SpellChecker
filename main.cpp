#include <iostream>
#include "spellChecker.h"
using namespace std;

int main(){
    SpellChecker spellChecker("Hello");
    spellChecker.readFile();
    spellChecker.filterWordList(5);
    spellChecker.printWordList();
}
