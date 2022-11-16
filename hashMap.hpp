#ifndef HASHMAP_HPP_
#define HASHMAP_HPP_

#include "hashNode.hpp"

using namespace std;

class hashMap {
    friend class makeHash;
    friend class main;
    int arraySize;
    hashNode **map;
    string first;
    int numKeys;

public:
    hashMap();
    int hashfn(string key);
    void insert(string key, string value);
    void remove(string key);
    void printMap();
};

#endif