
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    a = 5;
    b = 10;

    cout << "Before Interchange:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter Interchange:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}


