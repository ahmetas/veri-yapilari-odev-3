#include "BinarySearchTree.h"

Node* BinarySearchTree::Insert(Node* root, string& line) {
    int lenght = line.length();
    int lineTotal = 0;
    for (int i = 0; i <lenght ; ++i) {
        lineTotal += line[i] - '0';
    }

    Node* temp;
    if (root == nullptr){
        auto* queue = new Queue(line);
        temp = new Node();
        temp->SetData(queue);
        delete queue;
        return temp;
    }

    if (root->GetData()->TotalQueue() > lineTotal ){
        root->SetLeft(Insert(root->GetLeft(),line));
    }
    else if(root->GetData()->TotalQueue() < lineTotal){
        root->SetRight(Insert(root->GetRight(),line));
    }

    delete temp;
    return temp;
}

void BinarySearchTree::InOrder() {

}

void BinarySearchTree::PreOrder() {

}

void BinarySearchTree::PostOrder() {

}