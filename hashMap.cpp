#include "hashMap.hpp"
#include "makeHash.hpp"
#include <iostream>

using namespace std;

hashMap::hashMap(){
    arraySize = 2000;
    first = "";
    numKeys = 0;
    map = new hashNode[arraySize];
}

void hashMap::insert(string key){
    int index = hashfn(key);
    if (map[index] == NULL){
        map[index] = new hashNode(key);
    }
}

void hashMap::remove(string key){
    int index = hashfn(key);

}

int hashMap::hashfn(string key){

}

void hashMap::printHash(){
    for (int i = 0; i < arraySize; i++){
        if (map[i] != NULL){
            cout << map[i].key << ": ";
            cout << endl;
        }
    }
}