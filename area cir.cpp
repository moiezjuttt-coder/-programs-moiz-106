
#include <iostream>
using namespace std;

int main() {
    float r;
    const float PI = 3.1417;

    cout << "Enter radius: ";
    cin >> r;

    float area = PI * r * r;
    float circumference = 2 * PI * r;

    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;

    return 0;
}


