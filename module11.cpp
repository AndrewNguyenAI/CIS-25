#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    double price;

public:
    Product(int i, string n, double p) {
        id = i;
        name = n;
        price = p;
    }

    ~Product() {
        cout << "Destructor called\n";
    }

    void printDetails() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p(1, "Laptop", 999.99);
    p.printDetails();
    return 0;
}
