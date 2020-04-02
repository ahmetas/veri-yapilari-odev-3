#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree() {
    root = nullptr;
}

Node* BinarySearchTree::Insert(Node* p, string& line) {
    int lenght = line.length();
    int lineTotal = 0;
    for (int i = 0; i <lenght ; ++i) {
        lineTotal += line[i] - '0';
    }

    Node* temp = nullptr;
    if (p == nullptr){
        auto* queue = new Queue(line);
        temp = new Node();
        temp->SetData(queue);
        return temp;
    }

    if (p->GetData()->GetTotal() > lineTotal ){
        p->SetLeft(Insert(p->GetLeft(), line));
    }
    else if(p->GetData()->GetTotal() < lineTotal){
        p->SetRight(Insert(p->GetRight(), line));
    }

    return p;
}

void BinarySearchTree::InOrder() {

}

void BinarySearchTree::PreOrder() {

}

void BinarySearchTree::PostOrder() {

}
