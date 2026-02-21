#include <iostream>
#include <cstdlib> // Random
#include <ctime>   // Time since 1st Jan 1970

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator
    int number = rand() % 100; // Generate a random number between 0 and 99
    cout << number;
    return 0;
}