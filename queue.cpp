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
    return rearIndex == MAX - 1;
}

// Check if queue is empty
bool isEmpty() {
    return frontIndex > rearIndex;
}

// Add a new patient
void enqueue(string name, int age, string reason) {
    if (isFull()) {
        cout << "Queue is full! Cannot add more patients.\n";
        return;
    }

    rearIndex++; // Move rear forward

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

    frontIndex++; // Move front to the next patient

    // RESET queue when empty
    if (frontIndex > rearIndex) {
        frontIndex = 0;
        rearIndex = -1;
    }
}

// Show all patients currently waiting
void displayQueue() {
    if (isEmpty()) {
        cout << "\nNo patients in queue!\n";
        return;
    }

    cout << "\nCurrent Queue:\n";

    for (int i = frontIndex; i <= rearIndex; i++) {
        cout << i - frontIndex + 1 << ". "
             << nameArr[i]
             << " | Age: " << ageArr[i]
             << " | Reason: " << reasonArr[i]
             << "\n";
    }
}
