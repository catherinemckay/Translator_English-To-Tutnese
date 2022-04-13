#include <iostream>
using namespace std;

class FileProcessor{
    public:
        void processFile(string inputFile, string outputFile, string translationType);
        FileProcessor();
        ~FileProcessor();
};
