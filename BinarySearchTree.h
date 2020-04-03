#ifndef VERIYAPILARIODEV3_BINARYSEARCHTREE_H
#define VERIYAPILARIODEV3_BINARYSEARCHTREE_H

#include "Node.h"

class BinarySearchTree {
private:
    Node* root;

    static Node* Insert(Node *, Queue &);
    static void InOrder(Node *, void (*)(Queue *));
    static void PreOrder(Node *, void (*)(Queue *));
    static void PostOrder(Node *, void (*)(Queue*));
    static void Clear(Node *);
public:
    BinarySearchTree();
    void Insert(Queue&);
    void InOrder(void (*)(Queue *));
    void PreOrder(void (*)(Queue *));
    void PostOrder(void (*)(Queue*));
    void Clear();
    ~BinarySearchTree();
};

#endif //VERIYAPILARIODEV3_BINARYSEARCHTREE_H