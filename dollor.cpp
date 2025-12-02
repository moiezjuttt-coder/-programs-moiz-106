#include <iostream>
using namespace std;

int main() {
    float rupees = 12000;
    const float dollar_rate = 60.0; 

    float dollars = rupees / dollar_rate;

    cout << "Rupees: " << rupees << endl;
    cout << "Equivalent in Dollars = $" << dollars << endl;

    return 0;
}


