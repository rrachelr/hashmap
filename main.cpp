#include "makeHash.hpp"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));
    makeHash hash("DrSeuss.txt", "Seussout1.txt");
    return 0;
}