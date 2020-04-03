#include "Queue.h"

Queue::Queue(){
}

ostream &operator<<(ostream &os, const Queue &q) {
    os << q.total;
    return os;
}

void Queue::Expand() {
    if (size < 1) {
        size = 1;
        pointer = new int[size];
        return;
    }

    auto temp = new int[2 * size];

    for (int i = 0; i < size; ++i) {
        temp[i] = pointer[i];
    }
    delete[] pointer;
    pointer = temp;

    size = 2 * size;
}

void Queue::Enqueue(int data) {
    rear++;

    if (rear >= size) {
        Expand();
    }

    pointer[rear] = data;
}

int Queue::GetTotal() {
    if (total > 0) {
        return total;
    }

    for (int i = 0; i <= rear; ++i) {
        total += pointer[i];
    }
    return total;
}

Queue::~Queue() {
    delete pointer;
}