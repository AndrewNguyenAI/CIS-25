#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "==== Main Menu ====\n";
    cout << "1) Add a new item\n";
    cout << "2) Show all items\n";
    cout << "3) Quit program\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You chose to add an item.\n";
    }
    else if (choice == 2) {
        cout << "Listing items...\n";
    }
    else if (choice == 3) {
        cout << "Goodbye!\n";
    }
    else {
        cout << "That is not a valid option.\n";
    }

    return 0;
}
