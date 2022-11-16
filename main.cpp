#include "makeHash.hpp"
#include <iostream>
using namespace std;

int main() {
    hashMap *table = new hashMap();
    table->insert("hello", "world");
    
    return 0;
}