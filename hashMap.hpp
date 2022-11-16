#include "hashNode.hpp"
#include <iostream>

using namespace std;

class hashMap {
    friend class makeHash;
    int arraySize;
    hashNode *map;
    string first;
    int numKeys;
public:
    hashMap();
    int hashfn(string k);
    void insert(string key);
    void remove(string key);
    void printHash();
};