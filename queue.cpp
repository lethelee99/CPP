#include <iostream>
#include "queue.h"

using namespace std;

// Arrays storing patient info
string nameArr[MAX];
int ageArr[MAX];
string reasonArr[MAX];

// Queue pointers
int frontIndex = 0;
int rearIndex = -1;

// Check if the queue is full
bool isFull() {
    return (rearIndex + 1) % MAX == frontIndex;
}

// Check if queue is empty
bool isEmpty() {
    return frontIndex == (rearIndex + 1) % MAX;
}

// Add a new patient
void enqueue(string name, int age, string reason) {
    if (isFull()) {
        cout << "Queue is full! Cannot add more patients.\n";
        return;
    }

    rearIndex = (rearIndex + 1) % MAX; // Move rear forward with wrapping

    nameArr[rearIndex] = name;
    ageArr[rearIndex] = age;
    reasonArr[rearIndex] = reason;

    cout << "Patient added successfully!\n";
}

// Serve a patient
void dequeue() {
    if (isEmpty()) {
        cout << "\nNo patients in queue!\n";
        return;
    }

    cout << "\nServing patient:\n";
    cout << "Name: " << nameArr[frontIndex] << "\n";
    cout << "Age: " << ageArr[frontIndex] << "\n";
    cout << "Reason: " << reasonArr[frontIndex] << "\n";

    frontIndex = (frontIndex + 1) % MAX; // Move front to next patient with wrapping
}

// Show all patients currently waiting
void displayQueue() {
    if (isEmpty()) {
        cout << "\nNo patients in queue!\n";
        return;
    }

    cout << "\nCurrent Queue:\n";

    int count = 1;
    for (int i = frontIndex; i != (rearIndex + 1) % MAX; i = (i + 1) % MAX) {
        cout << count << ". "
             << nameArr[i]
             << " | Age: " << ageArr[i]
             << " | Reason: " << reasonArr[i]
             << "\n";
        count++;
    }
}
