#include <iostream>
#include <fstream>
#include "BinarySearchTree.h"

using namespace std;

int main() {
    ifstream inFile;
    inFile.open(R"(../sayilar.txt)");

    string line;
    auto* bst = new BinarySearchTree;
    Node* root = nullptr;
    while (getline(inFile, line)){
        if (line.back() == 13){
            line.pop_back();
        }
        bst->Insert(root,line);
    }

    delete bst;
    return 0;
}