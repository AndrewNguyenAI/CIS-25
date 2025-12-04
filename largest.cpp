#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;
    float largest;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2) {
        if (n1 >= n3) {
            largest = n1;
        } else {
            largest = n3;
        }
    } else {
        if (n2 >= n3) {
            largest = n2;
        } else {
            largest = n3;
        }
    }

    cout << "Largest number: " << largest << endl;

    return 0;
}
