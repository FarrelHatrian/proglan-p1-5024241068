#include <iostream>
#include <string>

class Character {
private:
  std::string name;
  int health;
  int attackPower;

public:
  Character(std::string name, int health, int attackPower)
    : name(name), health(health), attackPower(attackPower) {}

  void attack(Character& target) {
    target.health -= attackPower;
    if (target.health < 0) target.health = 0;
  }

  bool isAlive() const {
    return health > 0;
  }

  void printStatus() const {
    std::cout << name << " has " << health << " health remaining.\n";
  }

  std::string getName() const {
    return name;
  }
};

int main() {

}

