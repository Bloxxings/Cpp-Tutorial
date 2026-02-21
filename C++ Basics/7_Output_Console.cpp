#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;
    cout << "x = " << x << endl // Print x // endl = new line
         << "y = " << y << endl;

    // Exercice 
    double sales = 95000;
    const double stateTax = .04;
    const double countyTax = .02;
    cout << (sales * stateTax) + (sales * countyTax) << endl;
    return 0;
}



