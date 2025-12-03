#include <iostream>
#include <string>
#include "queue.h"

using namespace std;

int main() {
    int choice;
    string name;

    do {
        cout << "\n===== HOSPITAL QUEUE SYSTEM =====\n";
        cout << "[1] Add Patient\n";
        cout << "[2] Serve Next Patient\n";
        cout << "[3] View Queue\n";
        cout << "[0] Exit\n";
        cout << "Choose option: ";
        cin >> choice;
        cin.ignore();  

        switch (choice) {
            case 1:
                cout << "Enter patient name: ";
                getline(cin, name);
                enqueue(name);
                break;              

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
