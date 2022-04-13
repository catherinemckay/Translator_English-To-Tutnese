#include <iostream>
#include <string>
using namespace std;

class Translator{
    public:
        Translator();
        ~Translator();
        string translateEnglishSentence(string s);
        string translateEnglishWord(string word);
        string translateTutSentence(string s);
        string translateTutWord(string word);
};
