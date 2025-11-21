#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;

    void saveToFile() {
        ofstream out("items.txt");
        out << name << "," << quantity;
        out.close();
    }

    void loadFromFile() {
        ifstream in("items.txt");
        string line;
        getline(in, line);
        in.close();

        size_t pos = line.find(',');
        name = line.substr(0, pos);
        quantity = stoi(line.substr(pos + 1));

        cout << "Name: " << name << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main() {
    Item item;
    item.name = "Apple";
    item.quantity = 5;

    item.saveToFile();
    item.loadFromFile();

    return 0;
}
