#include <vector>
#include <iostream>
using namespace std;

int main() {
    int score = 85;
    if (score >= 90) {
    cout << "Perfect";
    } else if (score >= 50) {
    cout << "Good";
    } else {
    cout << "Bad";
    }
    return 0;


    int i = 0;
    while (i < 5) {
        cout << i << endl;
        i++;
    }


    for (int i = 0; i < 10; i++) { // argument initialization; condition; increment
    cout << "Line : " << i << endl;
    }


    vector<string> fruits = {"Pomme", "Banane", "Fraise"}; // list of fruits

    for (string fruit : fruits) { // like for fruit in fruits: 
    cout << fruit << endl;
    }
}

