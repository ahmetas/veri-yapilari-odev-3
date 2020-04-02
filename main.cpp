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
        if (root == nullptr) {
            root = bst->Insert(root, line);
        } else {
            bst->Insert(root, line);
        }
    }

    cout << "InOrder:" << endl;
    bst->InOrder(root);
    cout << endl;
    cout << "PreOrder:" << endl;
    bst->PreOrder(root);
    cout << endl;
    cout << "PostOrder:" << endl;
    bst->PostOrder(root);

    delete bst;
    return 0;
}