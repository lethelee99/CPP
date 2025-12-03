#include <iostream>
#include "queue.h"

using namespace std;

string queueArr[MAX];
int frontIndex = 0;
int rearIndex = -1;

bool isFull() {
    return rearIndex == MAX - 1;
}

bool isEmpty() {
    return frontIndex > rearIndex;
}

void enqueue(const string &name) {
    if (isFull()) {
        cout << "Queue is full! Cannot add more patients.\n";
        return;
    }

    rearIndex++;
    queueArr[rearIndex] = name;

    cout << "Patient '" << name << "' added. Priority number: " 
         << (rearIndex + 1) << endl;
}

void dequeue() {
    if (isEmpty()) {
        cout << "No patients to serve.\n";
        return;
    }

    cout << "Serving patient: " << queueArr[frontIndex] << endl;
    frontIndex++;
}

void display() {
    if (isEmpty()) {
        cout << "No patients in the queue.\n";
        return;
    }

    cout << "\n--- Current Queue ---\n";
    for (int i = frontIndex; i <= rearIndex; i++) {
        cout << (i + 1) << ". " << queueArr[i] << endl;
    }
    cout << "----------------------\n";
}
