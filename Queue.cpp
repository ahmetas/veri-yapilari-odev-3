#include "Queue.h"

Queue::Queue(string line){
    size = line.length();
    pointer = new int[size];
    for (int i = 0; i < size; ++i) {
        Enqueue(line.at(i));
    }
    this->total = TotalQueue();
}

void Queue::operator=(const Queue &q) {
    this->total = q.total;
}

ostream &operator<<(ostream &os, const Queue &q) {
    os << q.total;
    return os;
}

void Queue::Enqueue(char data) {
    this->rear++;
    pointer[rear] = data - '0';
}

int Queue::TotalQueue() {
    rear = 0;
    for (int i = 0; i < size; ++i) {
        total += pointer[rear];
        rear++;
    }
    return total;
}

void Queue::Display() {
    for (int i = 0; i < size; ++i) {
        cout << pointer[i];
    }
}

Queue::~Queue() {
    delete pointer;
}
