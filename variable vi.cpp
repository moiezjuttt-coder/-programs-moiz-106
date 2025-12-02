#include <iostream>
using namespace std;

int main() {
    float vi, t, a, s;

    cout << "Enter vi: ";
    cin >> vi;

    cout << "Enter t: ";
    cin >> t;

    cout << "Enter a: ";
    cin >> a;

    s = vi * t + 0.5 * a * t * t;

    cout << "Value of s = " << s << endl;

    return 0;
}



