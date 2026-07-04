#include <iostream>
#include "spellChecker.h"
using namespace std;

int main(){
    SpellChecker spellChecker("Coasterf");
    cout << spellChecker.findClosestWord() << endl;
}
