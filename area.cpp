#include <iostream>
#define PI 3.1417
using namespace std;

int main() {
    float r, area;

    cout << "Enter radius: ";
    cin >> r;

    area = PI * r * r;

    cout << "Area of Circle = " << area << endl;

    return 0;
}


