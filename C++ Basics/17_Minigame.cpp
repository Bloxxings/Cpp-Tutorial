#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Entity {
public:
    string name;
    int health;

    Entity(string n, int h) {
        name = n;
        health = h;
    }

    void takeDamage(int amount) {
        health -= amount;
        if (health < 0) health = 0;
        cout << name << " took " << amount << " damage, health now " << health << endl;
    }
};

class Monster : public Entity {
public:
    Monster(string n, int h) : Entity(n, h) {} 

    int attack() {
        int damage = rand() % 20 + 5;
        cout << name << " attacks!" << endl;
        return damage;
    }
};

int main() {
    srand(time(0));
    Entity hero("The Hero", 100);
    Monster monster("Goblin", 50);

    while (hero.health > 0 && monster.health > 0) {
        int damage = monster.attack();
        hero.takeDamage(damage);

        int heroDamage = rand() % 15 + 10;
        monster.takeDamage(heroDamage);
    }
}