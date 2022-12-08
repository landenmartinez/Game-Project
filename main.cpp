// Main Adventure
// December 6, 2022

#include "Hero.h"    // Hero header File
#include "villain.h" // Villian header File
#include <iostream>
using namespace std;

/* * * * * * START OF PEOPLE FUNCTIONS * * * * * * */
void Martinez(Hero hero1, villain villain1);
void Cotter(Hero hero1, villain villain1);
void Dye(Hero hero1, villain villain1);
void Grilliot(Hero hero1, villain villain1);
void Kreibach(Hero hero1, villain villain1);
void Riggins(Hero hero1, villain villain1);
void Wofford(Hero hero1, villain villain1);
void Woodworth(Hero hero1, villain villain1);
void Rhoten(Hero hero1, villain villain1);
void Son(Hero hero1, villain villain1);
void Vincent(Hero hero1, villain villain1, int turnCounter);
void Wells(Hero hero1, villain villain1);
void Garrelts(Hero hero1, villain villain1);

/* * * * * * * END OF PEOPLE FUNCTIONS * * * * * * * */

int main() {
  Hero hero1(100, 10, 10, 10);
  villain villain1(100, 50, 2, 10);
  int turnCounter = 0;
  // peanut butter jelly

  Martinez(hero1, villain1);
  system("CLS");
  Cotter(hero1, villain1);
  system("CLS");
  Dye(hero1, villain1);
  system("CLS");
  Grilliot(hero1, villain1);
  system("CLS");
  Kreibach(hero1, villain1);
  system("CLS");
  Riggins(hero1, villain1);
  system("CLS");
  Wofford(hero1, villain1);
  system("CLS");
  Woodworth(hero1, villain1);
  system("CLS");
  Rhoten(hero1, villain1);
  system("CLS");
  Son(hero1, villain1);
  system("CLS");
  Vincent(hero1, villain1, turnCounter);
  system("CLS");
  Wells(hero1, villain1);

  cout << "Thanks for playing our adventures :)";
  
  return 0;
}

void Martinez(Hero hero1, villain villain1) 
{
  
}

void Cotter(Hero hero1, villain villain1) 
{
  
}

void Dye(Hero hero1, villain villain1) 
{
  
}

void Grilliot(Hero hero1, villain villain1) 
{
  
}

void Kreibach(Hero hero1, villain villain1) 
{
  //Intro room
  hero1.loss_health(25)
  cout << "Drip..." << endl << "Drip...";
  cout << "You gain consciously slowly, each drop of water a sliver of wakefullness returning." << endl;
  cout << "With a wretch of your eyes, you jolt upwards and begin scouring the room." << endl;
  cout << "You find yourself in a shadowed stone room empty except for a single steel door on the far wall." << endl;
  cout << "You shiver as you stumble to your feet, and then to look upwards at a small barred window just the right size to let the evening light in, but to restrict any view." << endl;
  cout << "You can't recall why you are in this room, prison, you uneasily realize. " << endl;
  cout << "In fact you can barely recall what your own name, ";
  hero1.set_name("Rue"); //Can read name, but nah
  cout << hero1.getName() << " , is." << endl;
  cout << "Clearly, the window will yeild nothing, so you find yourself at the steel door testing its strength." << endl;
  cout << "You are pleasantly surprised to find the door creak open spraying sprinkling dust from its hinges." << endl;
  system("CLS");

  cout << "The hall, you decide, is even more eerie and drab, appearing to have been uninhabited for decades." << endl;
  cout << "You are at the end of the hall, so there is only one direction to travel, forward." << endl;
  cout << "You travel down the hall passing ancient, unmoving doors and their beaconing contents. " << endl;
  cout << "Regardless of their invition, you pass partially because they are empty and partially because of the going sense of forboding it releases." << endl;
  cout << "Suddenly, you stop. To your left there lies a single rusty dagger and what looks like a health potion." << endl;
  cout << "You gladly take the dagger, but you pause once you see the health potion. It's old, concerningly so." << endl;
  cout << "It should be red but the crimson has long since turned to a dull brown, and you spy what appears to be a crack stoppered by its own dry contents." << endl;
  cout << "You consider: should you take and drink the potion, you are stiff and injuried, or leave it for another decade. (y/n)" << endl;
  char potion1;
  cin >> potion1;
  if (potion1 == 'y')
    hero1.true_damage_loss(25);
    cout << "You pick up the potion, take a brerath, and choke down the drink's contents. " << endl;
    cout << "Immediately, you regret your choice. The potion clearly lost its healing property, and what remains feels acidic as it settles down your throat. " << endl;
    cout << ""
  else
    

  while (hero1.getHealth() > 0 || villain1.getHealth())
    {
      
    }
}

void Riggins(Hero hero1, villain villain1)
{
  
}

void Wofford(Hero hero1, villain villain1)
{
  string hero_Name;
  cout << "What shall your adventuers name be?: ";
  cin >> hero_Name;
  system("CLS");
  cout << "You wake up, immeadiatly realizing you have woken up on a deserted island, sun bearing down on your face." << endl;
  cout << "You look to the left, you see many a palm tree's waving in the windy air. The beach that you have arrived on " << endl;
  cout << "stretches as far as the eye can see. To the right you see the boat you were on, torn to bits and pieces." << endl;
  cout << "You also notice multiple bodies along the beach. You recognize that they're familiar, almost family like." << endl;
  cout << "And that when it hits you. Your name is " << hero_Name << ", you were on a boat party with your family for your"<< endl;
  cout << "twentyfirst birthday. " << endl;

  //Apple bottom jeans boots with the fur, with the fur.
}

void Woodworth(Hero hero1, villain villain1) 
{
  int choice;
  bool alive = true;
  cout << "You regain consciousness in a cave with one very large tree on an island surounded by crystal clear water." << endl;
  cout << "The lake surrounding the tree seems to be completly clear of fish. The tree in the middle is partialy covered in mushrooms." << endl;
  cout << "You realize you are very thirsty and could use a drink. Would you like to take a drink (1), Inspect the water(2), Atempt to swim across(3)";
  cin >> choice;
  switch(choice)
  {
  case(1):
    cout << endl << "You take a drink and feel refreshed you healed to full health!" << endl;
    hero1.gain_health(100000000);
    cout << "You decide to rest a little while." << endl;
    cout << "You have almost fallen asleep when " << villain1.getName() << " jumps out of the water and lands right next to you." << endl;
    cout << "You ready your weapon." << endl;
  case(2):
    cout << endl << "You inspect the water and see there seems to be nothing wrong with it, though you choose to play it safe." << endl;
    cout << "You take are about to sit down when you hear a noise come from in the water." << endl;
    cout << villain1.getName() << " jumps out of the water and hits you before you can react." << endl;
    alive = hero1.loss_health(20);
    if (alive == false)
    {
      cout << "You feel the blow and black out" << endl;
      cout << "You died before the fight even started how sad." << endl;
    }
  case(3):
    
  }
}

void Rhoten(Hero hero1, villain villain1)
{
  char choice;
  cout << "Finding just enough change to borrow a horse with saddle, you ride through an empty and dull grassland with enough sunshine that could dehydrate a small lake. The horse, you named Lighter, suddenly refuses to step another hoove.\nLeaving no other choice, you decide to rest on a wall full of moss, which have seemed to attempt to backflow for more water.";
  hero1.gain_health(hero1.getHealth() / 2.50);  //The hero gains a near-third amount of health from resting.
  cout << "After a few minutes of unwinding, a sudden gush of wind flows through and out of the moss next to you. Immediately, Lighter gallops through the hole the sudden wind opened. Knowing that you can't reach far without him, you quickly follow behind. You rush into a tunnel with only brushes of candles lighting your path. Looking behind you, you realize nothing's in sight. However, turning back around, you slam into something. It felt as the object was the same size as you. You hit the ground and hear a sound that should've only came from you own mouth:\n";
  cout << char(146) << "CK!" << endl;
  cout << "Silence... You don't see anything and don't want to stick around with the quiet; however, your inclination holds your ground. Still, nothing seems to be happening.";
}

void Son(Hero hero1, villain villain1) 
{
  int choice = 0;
  int atktype = 0;
  int damage = 0;
  int run = 0;
  dice struggle(100);
  int strugres = 0;
  
  cout << "It's a dark night, and you stumble upon a humid, kind-of gross swamp." << endl; //story
  cout << "While you keep walking, you come across a very dark green patch of.. water?" << endl; //story
  cout << "The 'water' slowly, slooowly starts to grow..." << endl; //story
  cout << "As it grows, you realize that it's.. alive!? The weird lake monster groans and bubbles, and while you can't see it's face, you feel like you've disturbed it, somehow." << endl; //story
  cout << "The monster rises to its full height, and it appears to be a sort of slime. But compared to normal slimes, it's super huge! And super angry..." << endl << endl; //story
  cout << "You can feel the huge slime's anger radiating off of it. What will you do?" << endl; //story
  
  cout << "1. Attack \t 2. Use Potion \t 3. Check Stats \t 4. Run" << endl; //choices
  cin >> choice;
  switch (choice){
    case 1:
    cout << "1. Heavy Attack \t 2. Light Attack" << endl;
    cin >> atktype;
    if (atktype == 1)
      damage = hero1.attack_h();
    else
      damage = hero1.attack_l();
    break;
    case 2:
    hero1.h_potion();
    break;
    case 3:
    cout << "Spd: " << int getSpeed() << "\t Def: " int getDefense() << "\n Str: " << int getStrength() << "\t HP: " << float getHealth();
    break;
    case 4:
    cout << "The slime quickly reaches out to you, before you can even pick up your feet. Do you try to escape?" << endl;
    cout << "1. Yes \t 2. No";
    cin >> run;
    if (run == 1){
    strugres = struggle.roll();
      if (strugres <= 34)
        cout << "You successfully escape!";
      else
        
    }
    
  }
  

}

void Vincent(Hero hero1, villain villain1, int turnCounter) 
{
    char decision = 'Y';
  	cout << "You see yourself in a cauldera crisscrossed with bridges of brimstone." << endl << "You remember why you are here, if this volcano erupts an entire village will die a fiery death." << endl;
    cout << "You hear the gurgling of a nearby lava flow, do you want to go closer?(Y or N) ";
    cin >> decision;

    if (decision == 'Y')
    {
      hero1.loss_health(15);
      cout << "The heat from the lava burns you as you approach" << hero1.getHealth();
    }
  else
    {
      cout << "You keep walking and go deeper in the volcano";
    }
  
}


void Wells(Hero hero1, villain villain1) 
{
  cout << "You are strolling through the woods when you happen upon a(n) villain! The villain tries to engage!" << endl;
  int heroAttackType;
  float heroHeavy = hero1.attack_h();
  float heroLight;
  float heroLoseHealth;
  float heroGainHealth;
  cout << "Would you like to heavy attack(1), which would deal a base of 10 damage to yourself, or light attack(2), which does nothing: ";
  cin >> heroAttackType;

  if (hero1.getSpeed() > villain1.getSpeed()) 
  {
    if (heroAttackType == 1)
    {
      hero1.attack_h();
    }
    
  }
}

void Garrelts(Hero hero1, villain villain1)
{
  cout << "Welcome to your adventure!\nRemember to have fun and d̛͓̳̜̰͙̓̾o̓̍̎ͧ҉̫̜n̵̠̝͙̖̤̼̫̝̰̣͐̇̇ͭ̅͠'̡̺̖̣̱̼̇t̴̤̖̙͔̝̣̝ͩ͌̽ͅ ͆҉͔͖d̩̩̼ͧ̉̐̾́ͅḭ̘͈̲̄̿̋͝ͅe̪͖̲̗̩̠̚͠ ̴̹̭ͨͫͫ:̝̗̲͓̙̦̙̈͞)̺̦̤̖͓ͯ͒́͟";
  system("CLS");

  
}
  // If you're seeing this, you've been  blue lobstered
