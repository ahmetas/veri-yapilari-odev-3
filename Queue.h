#ifndef VERIYAPILARIODEV3_QUEUE_H
#define VERIYAPILARIODEV3_QUEUE_H

#include <iostream>

using namespace std;

class Queue {
private:
    int size;
    int total = 0;
    int front = -1;
    int rear = -1;
    int* pointer;
public:
    Queue(string);
    void operator=(const Queue& q);
    friend ostream& operator<<(ostream& os, const Queue& q);
    void Enqueue(char);
    int TotalQueue();
    void Display();
    ~Queue();
};

#endif //VERIYAPILARIODEV3_QUEUE_H
