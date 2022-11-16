#include "hashMap.hpp"
#include <iostream>

using namespace std;

class makeHash {
    hashMap *hashTable;
    string inputFile;
    string outputFile;
public:
    makeHash(string inFile, string outFile);
    void readFile();
    void writeFile();
};