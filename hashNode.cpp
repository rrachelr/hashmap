#include "hashMap.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

hashNode::hashNode(){
    key = "";
    values = new string[100];
    valSize = 100;
    currSize = 0;
    srand(time(NULL));
}

hashNode::hashNode(string str){
    key = str;
    values = new string[100];
    valSize = 100;
    currSize = 0;
    srand(time(NULL));
}

hashNode::hashNode(string str, string val){
    key = str;
    values = new string[100];
    values[0] = val;
    valSize = 100;
    currSize = 1;
}

void hashNode::addValue(string val){
    for (int i = 0; i < valSize; i++){
        if (values[i] == ""){
            values[i] = val;
            currSize++;
            break;
        }
    }
}

string hashNode::randVal(){
    string random;
    random = values[rand()%currSize];
    cout << random << endl;
    return random;
}