#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"


int main(int argc, char const *argv[]) {
    if(argc < 3){
        cout << "invaid input, check program instructions" << endl;
    }
    FileProcessor fileProcessor;
    fileProcessor.processFile(argv[1],argv[2], argv[3]);
    // inputfile, outputfile, E2T or T2E
    return 0;
}
