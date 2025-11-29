#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    int id;
};

int binarySearch(Item* arr, int size, int targetId) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid].id == targetId)
            return mid;
        else if (targetId < arr[mid].id)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}

int main() {
    const int SIZE = 100;
    Item* inventory = new Item[SIZE];

    for (int i = 0; i < SIZE; i++) {
        inventory[i].id = 1000 + i;
        inventory[i].name = "Item";
        if (i < 10)
            inventory[i].name += "00" + to_string(i);
        else if (i < 100)
            inventory[i].name += "0" + to_string(i);
        else
            inventory[i].name += to_string(i);
    }

    int searchId;
    cout << "Enter ID to search for: ";
    cin >> searchId;

    int index = binarySearch(inventory, SIZE, searchId);

    if (index != -1) {
        cout << "Found: " << inventory[index].name
             << " (ID " << inventory[index].id << ")\n";
    } else {
        cout << "Item not found.\n";
    }

    delete[] inventory;
    return 0;
}
