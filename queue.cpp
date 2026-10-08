#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> customers;
    int choice;
    string name;

    do {
        cout << "1. Add Customer\n";
        cout << "2. Attend Next Customer\n";
        cout << "3. Display Waiting Customers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter customer name: ";
                cin >> name;
                customers.push(name);
                cout << name << " added to the queue.\n";
                break;

            case 2:
                if (customers.empty()) {
                    cout << "No customers waiting.\n";
                } else {
                    cout << "Attending customer: " << customers.front() << endl;
                    customers.pop();
                }
                break;

            case 3:
                if (customers.empty()) {
                    cout << "No customers are waiting.\n";
                } else {
                    queue<string> temp = customers;
                    cout << "Waiting customers:\n";

                    while (!temp.empty()) {
                        cout << temp.front() << endl;
                        temp.pop();
                    }
                }
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
