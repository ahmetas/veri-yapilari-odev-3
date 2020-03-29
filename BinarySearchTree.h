#ifndef VERIYAPILARIODEV3_BINARYSEARCHTREE_H
#define VERIYAPILARIODEV3_BINARYSEARCHTREE_H

#include "Node.h"

class BinarySearchTree {
private:
    Node* root;
public:
    BinarySearchTree();
    void Insert();
    void InOrder();
    void PreOrder();
    void PostOrder();
};

#endif //VERIYAPILARIODEV3_BINARYSEARCHTREE_H