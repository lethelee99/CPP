#ifndef QUEUE_H
#define QUEUE_H

#include <string>
using namespace std;

const int MAX = 100;

extern string nameArr[MAX];
extern int ageArr[MAX];
extern string reasonArr[MAX];

extern int frontIndex;
extern int rearIndex;

bool isFull();
bool isEmpty();
void enqueue(string name, int age, string reason);
void dequeue();
void displayQueue();

#endif
