#include <iostream>
#include <string>
using namespace std;

class Model {
public:

    string translateSingleEnglishCharacter(char c);
    string translateDoubleEnglishCharacter(char c);
    string translateSingleTut(string sound);
    string translateDoubleTut(string sound);
    bool isTranslatable(string substring);
    Model();
    ~Model();

};
