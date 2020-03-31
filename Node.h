#ifndef VERIYAPILARIODEV3_NODE_H
#define VERIYAPILARIODEV3_NODE_H

#include "Queue.h"

class Node {
private:
    Queue* data;
    Node* left;
    Node* right;
public:
    Node();
    void SetData(Queue*);
    Queue* GetData();
    void SetLeft(Node*);
    Node* GetLeft();
    void SetRight(Node*);
    Node* GetRight();
};

#endif //VERIYAPILARIODEV3_NODE_H
