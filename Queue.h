#ifndef VERIYAPILARIODEV3_QUEUE_H
#define VERIYAPILARIODEV3_QUEUE_H

#include <iostream>

using namespace std;

class Queue {
private:
    int size;
    int front = -1;
    int rear = -1;
    int* pointer;
public:
    Queue(string);
    void Enqueue(char);
    void Display();
};

#endif //VERIYAPILARIODEV3_QUEUE_H
