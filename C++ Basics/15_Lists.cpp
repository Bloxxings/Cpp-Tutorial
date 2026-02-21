#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nombres = {10, 20, 30}; // define a list

    nombres.push_back(40);    // Same as append in Python
    nombres.pop_back();       // Remove last element
    cout << nombres[0];       // Access first element
    cout << nombres.size();   // Get size of the lis
}
       