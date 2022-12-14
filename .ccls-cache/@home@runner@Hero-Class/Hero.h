// Rylie Kreibach, Landon Martinez, Preston Wofford, Edwin Dye, Andrew Cotter,
// Lily Grilliot Hero Class December 6th, 2022

#ifndef _HERO_H
#define _HERO_H

/* * * * INCLUDES * * * */
#include "dice.h"
#include <iostream>
using namespace std;
/* * * * INCLUDES END * * * */

/* * * * HERO CLASS * * * */
class Hero {
public:
  Hero(const int MAX_HP, int speed, int str, int def);

  void loss_health(float damage);
  bool true_damage_loss(float damage); // Loss health to true damage
  void gain_health(float hp_gain);

  void set_name(string n);
  int attack_h();  // Heavy attack
  int attack_l();  // Light attack
  void h_potion(); // Use health potion
  void gain_potion();

  void lose_game(); // Character death

  string getName();
  int getSpeed();    // Accessor - return speed stat
  int getDefense();  // Accessor - return defense stat
  int getStrength(); // Accessor - return strength stat
  float getHealth(); // Accessor - return health

private:
  const int MAX_HEALTH;
  string name;  // Character name
  float health; // If it reaches 0, hero dies
  int speed;    // Speed stat - which character attacks first
  int strength; // Strength stat - correlates with damage dealt
  int defense;  // Defense stat - lowers health lost by percentage
  int health_potions = 3;

  bool crit_chance(); // Attack functions call to see if crit applies
  dice crit_c;        // Die that rolls 12 (8% chance)
  dice attack;        // Rolls out of 5 to find damage variance
  dice hit_chance;    // Rolls out of 100 for hit chance for attacks
};
/* * * * HERO CLASS END * * * */

/* * * * HERO CLASS FUNCTIONS * * * */

// Hero Constructor - establishes character stats
Hero::Hero(const int MAX_HP, int speed, int str, int def)
    : MAX_HEALTH(MAX_HP), health(float(MAX_HP)), speed(speed), strength(str),
      defense(def), attack(5), crit_c(12), hit_chance(100) { /*blank*/
}

// Health Loss Mutator
void Hero::loss_health(float damage) // Mutator
{
  // Receives parameter concerning how much health is lost then applies it
  float reduction = defense / 100.0; // Converts defense to percent (10 def = 10% reduction)
  damage -= damage * reduction; // Subtracts a percent of the damage from the original damage
  health -= damage; // Removes health

  cout << "You lost " << damage << " health points." << endl;

  if (health <= 0) // If health is under 0
  {
    lose_game();
  }
}

bool Hero::true_damage_loss(float damage) {
  health = health - damage;

  cout << "You lost " << damage << "  health points." << endl;

  if (health <= 0) // If health is under 0
  {
    lose_game();
    return false; // Return to main to declare death
  } else
    return true; // Return to main survival
}

// Health Gain Mutator
void Hero::gain_health(float hp_gain) // Mutator
{
  // Recieves parameter concerning how much health is gained then applies it
  health += hp_gain; // Regain health
  if (health > MAX_HEALTH)
    health = MAX_HEALTH;
}

void Hero::set_name(string n) // Mutator
{
  name = n;
}

// Heavy Attack function
int Hero::attack_h() // Heavy attack
{
  int damage; // Holds damage value and return
  bool crit;  // Crit chance happened? T/F
  int chance; // Temporary holds on dice rolls
  float temp;

  chance = hit_chance.roll(); // Roll 100 to see if hit or miss
  if (chance <= 35)           // Find if hit missed - 65% hit chance
  {
    cout << "You missed." << endl << endl;
    damage = 0; // Set damage to 0 to return no damage
  } else {
    crit = crit_chance(); // Call function and see crit yes or no
    temp = attack.roll(); // Roll die out of 5

    // damage multiplier between 1.4 - 1.8: creates damage variance
    if (temp == 1)
      temp = 1.4; // Damage increase by
    else if (temp == 2)
      temp = 1.5;
    else if (temp == 3)
      temp = 1.6;
    else if (temp == 4)
      temp = 1.7;
    else
      temp = 1.8;

    damage = strength * temp; // Find damage with variance value

    if (crit)              // If you hit crit or is true
      damage = damage * 2; // crit dmg = twice
  }

  return damage; // Return damage to the main
}

// Light Attack function
int Hero::attack_l() // Light attack
{
  int damage, chance; // Holds damage value and return
  float temp;
  bool crit; // Crit chance happened? T/F

  chance = hit_chance.roll();

  if (chance <= 10) // 90% hit chance
  {
    cout << "You missed." << endl << endl;
    damage = 0;
  } else {
    crit = crit_chance(); // Call function and see if true or false
    temp = attack.roll(); // Roll die out of 5

    // Damage multiplier - 0.8 to 1.2
    if (temp == 1)
      temp = 0.8; // Damage increase by
    else if (temp == 2)
      temp = 0.9;
    else if (temp == 3)
      temp = 1.0;
    else if (temp == 4)
      temp = 1.1;
    else
      temp = 1.2;

    damage = strength * temp; // Find damage

    if (crit)              // If true
      damage = damage * 2; // crit dmg = twice
  }

  return damage; // Return damage to the main
}

void Hero::h_potion() {
  if (health_potions != 0) {
    gain_health(50);
    --health_potions;
    cout << "You gained 50 health points. " << endl;
  } else
    cout << "You have no more health potions left." << endl;
}

void Hero::gain_potion() { ++health_potions; }

void Hero::lose_game() {
  cout << endl << endl << "You died, get good." << endl << endl;
}

// Crit Chance Calculator
bool Hero::crit_chance() // Returns news of application to the calling attack function
{
  if (crit_c.roll() == 1) // 8% percent chance
    return true;          // doubles attack if applies
  else
    return false;
}

string Hero::getName() { return name; }
int Hero::getSpeed() { return speed; }
int Hero::getStrength() { return strength; }
int Hero::getDefense() { return defense; }
float Hero::getHealth() { return health; }

/* * * * HERO CLASS FUNCTIONS END * * * */

#endif