#include "Translator.h"
#include "Model.h"
#include <string>

// Default constructor
Translator::Translator(){}
// Destructor
Translator::~Translator(){}

/* translates whole english sentence at a time to Tutnese,
    returns translated sentence
*/
string Translator::translateEnglishSentence(string s){
    string word;
    string newSentence;

    for(int i = 0; i <= s.size(); ++i){
        if(isalpha(s[i])){
            word += s[i];
        } else{
            newSentence += translateEnglishWord(word);
            word = s[i];
        }
    }
    return newSentence + "\n";
}

/* translates one english word at a time to Tutnese
    returns translated word
*/
string Translator::translateEnglishWord(string word){
    string newWord;
    Model m;
    for(int i = 0; i < word.size(); ++i){
        if(word[i] == word[i+1]){
            newWord.append(m.translateDoubleEnglishCharacter(word[i]));
            word.erase(i+1 ,1);
        } else{
            newWord.append(m.translateSingleEnglishCharacter(word[i]));
        }
    }
    return newWord;
}

/* translates whole Tutnese sentence at a time to english,
    returns translated sentence
*/
string Translator::translateTutSentence(string s){
    string word;
    string newSentence;
    for(int i = 0; i <= s.size(); ++i){
        if(isalpha(s[i])){
            word += s[i];
        } else{
            newSentence += translateTutWord(word);
            word = "";
        }
    }
    return newSentence + "\n";
}

/* translates one Tutnese word at a time to English
    returns translated word
*/
string Translator::translateTutWord(string word){
    string newWord;
    string temp;
    Model m;
    for(int i = 0; i < word.length(); ++i){
        temp += word[i];
        if(m.isTranslatable(temp)){
            if(temp.substr(0, 4) == "Squa" || temp.substr(0,4) == "squa"){
                newWord.append(m.translateDoubleTut(temp));
                temp = "";
            }
            else{
                newWord.append(m.translateSingleTut(temp));
                temp = "";
            }
        }
    }
    return newWord + " ";
}
