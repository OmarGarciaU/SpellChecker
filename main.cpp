#include <iostream>
#include <string>
#include "spellChecker.h"
using namespace std;

int main(){
    std::string s;
    cout << "Enter word: ";
    cin >> s;
    SpellChecker spellChecker(s);
    cout << spellChecker.findClosestWord() << endl;
}
