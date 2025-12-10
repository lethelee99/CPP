#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    int choice;
    string name, reason;
    int age;

    do {
        cout << "\n--- HOSPITAL QUEUE SYSTEM ---\n\n";
        cout << "1. Add Patient\n";
        cout << "2. Serve Patient\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "\nChoose option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout <<"\n===New Patient Forms===\n";
                cout << "\nEnter patient name: ";
                cin.ignore();
                getline(cin, name);

                cout << "Enter age: ";
                cin >> age;

                cout << "Enter Reason for Visit: ";
                cin.ignore();
                getline(cin, reason);

                enqueue(name, age, reason);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                displayQueue();
                break;

            case 4:
                cout << "Exiting system...\n";
                break;

            default:
                cout << "Invalid option!\n";
        }

    } while (choice != 4);

    return 0;
}
