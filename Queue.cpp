#include "Queue.h"

Queue::Queue(string line){
    size = line.length();
    pointer = new int[size];
    for (int i = 0; i < size; ++i) {
        Enqueue(line.at(i));
    }
}

void Queue::Enqueue(char data) {
    this->rear++;
    pointer[rear] = data - '0';
}

void Queue::Display() {
    for (int i = 0; i < size; ++i) {
        cout << pointer[i];
    }
}