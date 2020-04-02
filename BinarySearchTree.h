#ifndef VERIYAPILARIODEV3_BINARYSEARCHTREE_H
#define VERIYAPILARIODEV3_BINARYSEARCHTREE_H

#include "Node.h"

class BinarySearchTree {
private:
    Node* root;
public:
    BinarySearchTree();
    Node* Insert(Node*, string&);
    void InOrder(Node*);
    void PreOrder(Node*);
    void PostOrder(Node*);
};

#endif //VERIYAPILARIODEV3_BINARYSEARCHTREE_H