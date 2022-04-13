#include "Model.h"
#include <cctype>
#include <string>

// Default constructor
Model::Model(){}
// Destructor
Model::~Model(){}

/* takes one english character at a time and translates to Tutnese sound
    returns new sound
*/
string Model::translateSingleEnglishCharacter(char c){
    string newSound;
    switch(c){
        case 'b':
          newSound = "bub";
          break;
        case 'c':
          newSound = "cash";
          break;
        case 'd':
          newSound = "dud";
          break;
        case 'f':
          newSound = "fuf";
          break;
        case 'g':
          newSound = "gug";
          break;
        case 'h':
          newSound = "hash";
          break;
        case 'j':
          newSound = "jay";
          break;
        case 'k':
          newSound = "kuck";
          break;
        case 'l':
          newSound = "lul";
          break;
        case 'm':
          newSound = "mum";
          break;
        case 'n':
          newSound = "nun";
          break;
        case 'p':
          newSound = "pub";
          break;
        case 'q':
          newSound = "quack";
          break;
        case 'r':
          newSound = "rug";
          break;
        case 's':
          newSound = "sus";
          break;
        case 't':
          newSound = "tut";
          break;
        case 'v':
          newSound = "vuv";
          break;
        case 'w':
          newSound = "wack";
          break;
        case 'x':
          newSound = "ex";
          break;
        case 'y':
          newSound = "yub";
          break;
        case 'z':
          newSound = "zub";
          break;
        case 'B':
          newSound = "Bub";
          break;
        case 'C':
          newSound = "Cash";
          break;
        case 'D':
          newSound = "Dud";
          break;
        case 'F':
          newSound = "Fuf";
          break;
        case 'G':
          newSound = "Gug";
          break;
        case 'H':
          newSound = "Hash";
          break;
        case 'J':
          newSound = "Jay";
          break;
        case 'K':
          newSound = "Kuck";
          break;
        case 'L':
          newSound = "Lul";
          break;
        case 'M':
          newSound = "Mum";
          break;
        case 'N':
          newSound = "Nun";
          break;
        case 'P':
          newSound = "Pub";
          break;
        case 'Q':
          newSound = "Quack";
          break;
        case 'R':
          newSound = "Rug";
          break;
        case 'S':
          newSound = "Sus";
          break;
        case 'T':
          newSound = "Tut";
          break;
        case 'V':
          newSound = "Vuv";
          break;
        case 'W':
          newSound = "Wack";
          break;
        case 'X':
          newSound = "Ex";
          break;
        case 'Y':
          newSound = "Yub";
          break;
        case 'Z':
          newSound = "Zub";
          break;
        default:
            newSound.push_back(c);
    }
    return newSound;
}

/* translates double english characters to Tutnese translation
    returns new sound
*/
string Model::translateDoubleEnglishCharacter(char c){
    string newSound = "";
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            newSound = "squat";
            newSound.push_back(c);
            return newSound;
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            newSound = "Squat" + tolower(c);
            return newSound;
            break;
        case 'b':
        case 'c':
        case 'd':

        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            newSound += "squa" + translateSingleEnglishCharacter(tolower(c));
            return newSound;
            break;
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            newSound += "Squa" + translateSingleEnglishCharacter(c);
            return newSound;
            break;
    }
}

/* helper method to indicate when a full Tut sound is found in a sentence/word
    returns bool
*/
bool Model::isTranslatable(string substring){
    for(int i = 0; i < substring.length(); ++i){
        substring[i] = tolower(substring[i]);
    }
    if(substring == "a"){
        return true;
    }
    if(substring == "e"){
        return true;
    }
    if(substring == "i"){
        return true;
    }
    if(substring == "o"){
        return true;
    }
    if(substring == "u"){
        return true;
    }
    if(substring == "bub"){
        return true;
    }
    if(substring == "cash"){
        return true;
    }
    if(substring == "dud"){
        return true;
    }
    if(substring == "fuf"){
        return true;
    }
    if(substring == "gug"){
        return true;
    }
    if(substring == "hash"){
        return true;
    }
    if(substring == "jay"){
        return true;
    }
    if(substring == "kuck"){
        return true;
    }
    if(substring == "lul"){
        return true;
    }
    if(substring == "mum"){
        return true;
    }
    if(substring == "nun"){
        return true;
    }
    if(substring == "pub"){
        return true;
    }
    if(substring == "quack"){
        return true;
    }
    if(substring == "rug"){
        return true;
    }
    if(substring == "sus"){
        return true;
    }
    if(substring == "tut"){
        return true;
    }
    if(substring == "vuv"){
        return true;
    }
    if(substring == "wack"){
        return true;
    }
    if(substring == "ex"){
        return true;
    }
    if(substring == "yub"){
        return true;
    }
    if(substring == "zub"){
        return true;
    }
    if(substring == "squata"){
        return true;
    }
    if(substring == "squate"){
        return true;
    }
    if(substring == "squati"){
        return true;
    }
    if(substring == "squato"){
        return true;
    }
    if(substring == "squatu"){
        return true;
    }
    if(substring == "squabub"){
        return true;
    }
    if(substring == "squacash"){
        return true;
    }
    if(substring == "squadud"){
        return true;
    }
    if(substring == "squafuf"){
        return true;
    }
    if(substring == "squagug"){
        return true;
    }
    if(substring == "squahash"){
        return true;
    }
    if(substring == "squajay"){
        return true;
    }
    if(substring == "squakuck"){
        return true;
    }
    if(substring == "squalul"){
        return true;
    }
    if(substring == "squamum"){
        return true;
    }
    if(substring == "squanun"){
        return true;
    }
    if(substring == "squapub"){
        return true;
    }
    if(substring == "squaquack"){
        return true;
    }
    if(substring == "squarug"){
        return true;
    }
    if(substring == "squasus"){
        return true;
    }
    if(substring == "squatut"){
        return true;
    }
    if(substring == "squavuv"){
        return true;
    }
    if(substring == "squawack"){
        return true;
    }
    if(substring == "squaex"){
        return true;
    }
    if(substring == "squayub"){
        return true;
    }
    if(substring == "squazub"){
        return true;
    }
}


/* translates Tut sound to correct english character
*/
string Model::translateSingleTut(string sound){
    string x;
    x = sound[0];
    return x;
}

/* translates double Tut sound to correct english characters
    returns new sound
*/
string Model::translateDoubleTut(string sound){
    string newSound = "";
    if(sound[4] == 't'){
        if(isupper(sound[0])){
            newSound.push_back(toupper(sound[5]));
            newSound.push_back(toupper(sound[5]));
        } else{
            newSound.push_back(sound[5]);
            newSound.push_back(sound[5]);
        }
    } else{
        if(isupper(sound[0])){
            newSound.push_back(toupper(sound[4]));
            newSound.push_back(toupper(sound[4]));
        } else{
            newSound.push_back(sound[4]);
            newSound.push_back(sound[4]);
        }
    }
    return newSound;
}
