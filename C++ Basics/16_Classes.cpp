#include <iostream>
#include <string>
#include <vector>

using namespace std;

// --- 1. THE CLASS ---
class Player {
public:
    string name;
    int health;

    // Simplified Constructor
    Player(string n, int h) { // like Python __init__
        name = n;
        health = h;
    }

    void showStats() { // method
        cout << name << " has " << health << " HP." << endl;
    }
};

// --- 2. THE SUBCLASS (Inheritance) ---
class Warrior : public Player { // Warrior is child of Player (class in class)
public:
    int armor;

    // Constructor: uses Player(n, h) to set up the basics
    Warrior(string n, int h, int a) : Player(n, h) {
        armor = a;
    }

    void shout() {
        cout << name << " yells: FOR GLORY!" << endl;
    }
}; // Don't forget the semicolon here!

// --- 3. THE MAIN ---
int main() {
    // Creating a simple object
    Player p1("Alice", 100);
    p1.showStats();

    // Creating a child object
    Warrior w1("Bob", 150, 50);
    w1.showStats(); // Works because it's inherited
    w1.shout();

    // Using a for-loop and a vector (like a Python list)
    vector<int> scores = {10, 20, 30};
    for (int s : scores) {
        if (s > 15) {
            cout << "High score: " << s << endl;
        }
    }

    return 0;
}