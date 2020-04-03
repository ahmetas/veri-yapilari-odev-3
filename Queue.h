#ifndef VERIYAPILARIODEV3_QUEUE_H
#define VERIYAPILARIODEV3_QUEUE_H

#include <iostream>

using namespace std;

class Queue {
private:
    int size = 0;
    int total = 0;
    int rear = -1;
    int front = -1;
    int* pointer;

    void Expand();
public:
    Queue();
    friend ostream& operator<<(ostream& os, const Queue& q);
    void Enqueue(int);
    int GetTotal();
    ~Queue();
};

#endif //VERIYAPILARIODEV3_QUEUE_H
