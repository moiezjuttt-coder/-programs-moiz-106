#include <iostream>
using namespace std;

int main() {
    int rollNo;
    float pf, ic, cg;

    cout << "Enter Roll No.: ";
    cin >> rollNo;

    cout << "Enter marks in Programming Fundamentals: ";
    cin >> pf;

    cout << "Enter marks in Introduction to Computing: ";
    cin >> ic;

    cout << "Enter marks in Computer Graphics: ";
    cin >> cg;

    float total = pf + ic + cg;
    float average = total / 3.0;

    cout << "\n--- Result ---\n";
    cout << "Roll No.: " << rollNo << endl;
    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

    return 0;
}



