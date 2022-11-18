#include "hashMap.hpp"
#include "hashNode.hpp"
#include <iostream>
#include <string>

using namespace std;

hashMap::hashMap(){
    arraySize = 4000;
    first = "";
    numKeys = 0;
    map = new hashNode*[arraySize];
    for (int i = 0; i < arraySize; i++){
        map[i] = NULL;
    }
}

void hashMap::insert(string key, string value){
    int index = getIndex(key);
    if (map[index] == NULL){
        map[index] = new hashNode(key,value);
    } else if (map[index]->key == key) {
        map[index]->addValue(value);
    } else {
        index = collision(index, key);
        map[index] = new hashNode(key, value);
    }
    numKeys++;
}

int hashMap::getIndex(string key){
    int index = hashfn(key);
    if ((map[index] != NULL) && (map[index]->key != key)){
        index = collision(index, key);
    }
    return index;
}

int hashMap::collision(int index, string key){
    while ((map[index] != NULL) && (map[index]->key != key) && (index < arraySize)){
        index += 1 % arraySize;
    }
    return index;
}

int hashMap::hashfn(string key){
    return ((int)key[0] + (int)key[1]) % arraySize;
}

void hashMap::printMap(){
    for (int i = 0; i < arraySize; i++){
        if (map[i] != NULL){
            cout << map[i]->key << ": ";
            for (int j = 0; j < map[i]->currSize; j++) {
                cout << map[i]->values[j] << ", ";
            }
            cout << endl;
        }
    }
}