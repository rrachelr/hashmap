#include "hashMap.hpp"
#include <iostream>

using namespace std;

hashNode::hashNode(){
    key = "";
    values = new string[100];
    valuesSize = 100;
    currSize = 0;
}

hashNode::hashNode(string str){
    key = str;
    values = new string[100];
    valuesSize = 100;
    currSize = 0;
}

hashNode::hashNode(string str, string val){
    key = str;
    values = new string[100];
    values[0] = val;
    valuesSize = 100;
    currSize = 1;
}