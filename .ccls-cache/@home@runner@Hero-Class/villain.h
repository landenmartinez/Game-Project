// Adam Vincent, Talyn Rhoten, Jasmine Son, Zachary Woodworth, Brenton Wells

#pragma once
#include "dice.h"
#include <cstdlib>
#include <iostream>

using namespace std;

class villain {
public:
  villain(float health, float speed, float strength, float defense);             // constructor
  float attack();                     // Mutator
  float takeDamage(float heroAttack); // mutator
  float getSpeed();
  float getHealth();
  float getDefense();
  float getStrength();
  string getName();
  void set_name(string n);

private:
  string name;            // the villain's name
  float health;           // the villain's health
  float speed;            // the villain's speed
  float defense;          // the villain's defense
  float strength;         // the villain's strength
  double critRate = 0.08; // the chance the villain will crit
  double critDamage =
      2; // the amount that the attack will be multiplied by if they crit
};

villain::villain(float health, float speed, float defense, float strength)
    : health(health), speed(speed), defense(defense),
      strength(strength) // constructor
{
  // Whole lot of nothing
}

float villain::attack() // Modifier
{
  dice generator(60); // Gets a random number between 1 and 60

  float villainAttack = strength * ((generator.roll() + 80.00) /
                                    100.00); // Adds 80 to the random number to
                                             // get a number between 81 and 140

  cout << "Damage: " << villainAttack;
  return villainAttack; // Returning our attack damage that the villain is
                        // dealing
}

float villain::takeDamage(float heroAttack) // Modifier
{
  float taken = heroAttack * (defense / 100); // Figuring the damage to be taken
  health -= taken;                            // Subtracting from the health
  cout << "You dealt " << taken << " to the enemy." << endl; // Reporting hero's damage dealt
  if (health > 0) {
    return health; // Returning the new health
  } else {
    cout << "I'm dead" << endl << endl;

    return health; // Returning the new health
  }
}

float villain::getSpeed() // returns the villains speed
{
  return speed;
}

float villain::getHealth() { return health; }

float villain::getDefense() { return defense; }

float villain::getStrength() { return strength; }

string villain::getName() { return name; }

void villain::set_name(string n) { name = n; }