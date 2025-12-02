#include <iostream>
using namespace std;

int main() {
    const float PI = 3.1417;
    float r, h, volume;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Enter height: ";
    cin >> h;

    volume = PI * r * r * h;

    cout << "Volume of Cylinder = " << volume << endl;

    return 0;
}


