#include <iostream>
#include <fstream>
#include "Queue.h"

using namespace std;

int main() {
    ifstream inFile;
    inFile.open(R"(../sayilar.txt)");

    string line;
    while (getline(inFile, line)){
        if (line.back() == 13) {
            line.pop_back();
        }
        auto* queue = new Queue(line);
    }

    return 0;
}