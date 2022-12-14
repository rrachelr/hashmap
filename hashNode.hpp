#ifndef HASHNODE_HPP_
#define HASHNODE_HPP_

#include "hashMap.hpp"
#include <iostream>

using namespace std;

class hashNode {
    friend class hashMap;
    string key;
    string *values;
    int valSize;
    int currSize;

public:
    hashNode();
    hashNode(string str);
    hashNode(string str, string val);
    void addValue(string val);
    string randVal();
};

#endif