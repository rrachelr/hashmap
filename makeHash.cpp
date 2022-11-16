#include "makeHash.hpp"
#include "hashMap.hpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

makeHash::makeHash(string inFile, string outFile){
    hashTable = new hashMap();
    inputFile = inFile;
    outputFile = outFile;
    readFile();
    writeFile();
}

void makeHash::readFile(){
    ifstream inFile(inputFile);
    string key = "";
    string value = "";
    inFile >> key;

    
}
