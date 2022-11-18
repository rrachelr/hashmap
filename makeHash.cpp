#include "makeHash.hpp"
#include "hashMap.hpp"
#include <iostream>
#include <stdlib.h>
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
    ifstream inFile(inputFile.c_str(), ios::in);
    string key = "";
    string value = "";

    inFile >> key;
    hashTable->first = key;
    
    while (inFile >> value) {
        cout << key << ": " << value << endl;
        hashTable->insert(key, value);
        key = value;
        value = "";
    }

    hashTable->insert(key, value);
    cout << endl;
    inFile.close();
    hashTable->printMap();
}

void makeHash::writeFile() {
    cout << "hello" << endl;
    ofstream outFile(outputFile.c_str(), ios::out);
    outFile << hashTable->first << " ";
    string key = "";
    string value = "";
    int totalWords = 0;
    int lineLen = 0;

    while (totalWords < 500 && value != "") {
        key = value;
        outFile << key << " ";
        if (lineLen == 11){
            outFile << endl;
            lineLen = 0;
        } else {
            lineLen++;
        }
        value = hashTable->map[hashTable->hashfn(key)]->randVal();
        totalWords++;
    }
    outFile.close();
}
