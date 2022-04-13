#include "FileProcessor.h"
#include "Translator.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Default constructor
FileProcessor::FileProcessor(){}
// Destructor
FileProcessor::~FileProcessor(){}

/* Processes input and output files
    Determines if user wants to translate English to Tut vs Tut to English
    Translation gets written to output file
*/
void FileProcessor::processFile(string inputFile, string outputFile, string translationType){
    ifstream inFS;
    string content;
    inFS.open(inputFile);
    Translator translator;
    ofstream outFS;
    outFS.open(outputFile);

    if(translationType == "E2T"){
        while(getline(inFS, content)){
            outFS << translator.translateEnglishSentence(content);
        }
    } else{
        while(getline(inFS, content)){
            outFS << translator.translateTutSentence(content);
        }
    }

    inFS.close();
    outFS.close();
}
