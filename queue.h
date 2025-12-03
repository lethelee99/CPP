#ifndef QUEUE_H
#define QUEUE_H

#include <string>

const int MAX = 100;

void enqueue(const std::string &name);
void dequeue();
void display();

bool isFull();
bool isEmpty();

#endif
