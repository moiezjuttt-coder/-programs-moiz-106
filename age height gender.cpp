#include <iostream>
using namespace std;

int main() {
    string name, gender;
    int age;
    float height;

    // Input from user
    cout << "Enter student's name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter height (in feet or cm): ";
    cin >> height;

    cout << "Enter gender: ";
    cin >> gender;

    // Output
    cout << "\n--- Student Data ---\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Gender: " << gender << endl;

    return 0;
}

