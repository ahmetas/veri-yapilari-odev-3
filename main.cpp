#include <iostream>
#include <fstream>
#include "BinarySearchTree.h"

using namespace std;

inline void DeleteQueue(Queue *queue) {
    delete queue;
}

inline void PrintQueue(Queue *queue) {
    cout << *queue << " ";
}

int main() {
    ifstream inFile;
    inFile.open(R"(../sayilar.txt)");

    string line;
    auto* bst = new BinarySearchTree;
    while (getline(inFile, line)){
        auto queue = new Queue();

        for (char c : line) {
            int value = c - '0';

            if (value < 0 || value > 9) {
                continue;
            }

            queue->Enqueue(value);
        }

        bst->Insert(*queue);
    }

    cout << "InOrder:" << endl;
    bst->InOrder(PrintQueue);
    cout << endl;
    cout << "PreOrder:" << endl;
    bst->PreOrder(PrintQueue);
    cout << endl;
    cout << "PostOrder:" << endl;
    bst->PostOrder(PrintQueue);

    bst->PostOrder(DeleteQueue);

    delete bst;
    return 0;
}