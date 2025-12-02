#include <iostream>
using namespace std;

int main() {
    int age_years;

    cout << "Enter your age in years: ";
    cin >> age_years;

    int months = age_years * 12;
    int days = age_years * 365;

    cout << "Age in months = " << months << endl;
    cout << "Age in days = " << days << endl;

    return 0;
}


