#include "Node.h"

Node::Node(){
    left = nullptr;
    right = nullptr;
}

void Node::SetData(Queue* queue) {
    this->data = queue;
}

Queue* Node::GetData() {
    return data;
}

void Node::SetLeft(Node* nodeLeft) {
    left = nodeLeft;
}

Node *Node::GetLeft() {
    return left;
}

void Node::SetRight(Node* nodeRight) {
    right = nodeRight;
}

Node* Node::GetRight() {
    return right;
}
