#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree() {
    root = nullptr;
}

Node *BinarySearchTree::Insert(Node *p, Queue &queue) {
    Node *temp = nullptr;
    if (p == nullptr) {
        temp = new Node();
        temp->SetData(&queue);
        return temp;
    }

    int lineTotal = queue.GetTotal();

    if (p->GetData()->GetTotal() > lineTotal) {
        p->SetLeft(Insert(p->GetLeft(), queue));
    } else if (p->GetData()->GetTotal() < lineTotal) {
        p->SetRight(Insert(p->GetRight(), queue));
    }

    delete temp;
    return p;
}

void BinarySearchTree::Insert(Queue &queue) {
    if (this->root == nullptr) {
        this->root = new Node();
        this->root->SetData(&queue);
        return;
    }

    Insert(this->root, queue);
}

void BinarySearchTree::InOrder(Node *p, void (*callback)(Queue *)) {
    if (p) {
        InOrder(p->GetLeft(), callback);
        callback(p->GetData());
        InOrder(p->GetRight(), callback);
    }
}

void BinarySearchTree::InOrder(void (*callback)(Queue *)) {
    InOrder(this->root, callback);
}

void BinarySearchTree::PreOrder(Node *p, void (*callback)(Queue *)) {
    if (p) {
        callback(p->GetData());
        PreOrder(p->GetLeft(), callback);
        PreOrder(p->GetRight(), callback);
    }
}

void BinarySearchTree::PreOrder(void (*callback)(Queue *)) {
    PreOrder(this->root, callback);
}

void BinarySearchTree::PostOrder(Node *p, void (*callback)(Queue *)) {
    if (p) {
        PostOrder(p->GetLeft(), callback);
        PostOrder(p->GetRight(), callback);
        callback(p->GetData());
    }
}

void BinarySearchTree::PostOrder(void (*callback)(Queue *)) {
    PostOrder(this->root, callback);
}

void BinarySearchTree::Clear(Node *node) {
    if (node) {
        Clear(node->GetLeft());
        Clear(node->GetRight());
        delete node;
    }
}

void BinarySearchTree::Clear() {
    Clear(this->root);
}

BinarySearchTree::~BinarySearchTree() {
    Clear();
}
