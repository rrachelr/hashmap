#include <iostream>

using namespace std;

class hashNode {
    friend class hashMap;
    string key;
    string *values;
    int valuesSize;
    int currSize;

public:
    hashNode();
    hashNode(string str);
    hashNode(string str, string val);
};