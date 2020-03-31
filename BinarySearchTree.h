#ifndef VERIYAPILARIODEV3_BINARYSEARCHTREE_H
#define VERIYAPILARIODEV3_BINARYSEARCHTREE_H

#include "Node.h"

class BinarySearchTree {
public:
    Node* Insert(Node*, string&);
    void InOrder();
    void PreOrder();
    void PostOrder();
};

#endif //VERIYAPILARIODEV3_BINARYSEARCHTREE_H