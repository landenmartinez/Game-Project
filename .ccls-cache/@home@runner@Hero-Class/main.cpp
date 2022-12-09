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
void battle(Hero hero1, villain villain1);
/* * * * * * * END OF PEOPLE FUNCTIONS * * * * * * * */

int main() {
  Hero hero1(100, 10, 10, 10);
  villain villain1(100, 50, 2, 10);  //Health, speed, strength, defense
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
  system("CLS");

  cout << "Thanks for playing our adventures :)";

  return 0;
}

void Martinez(Hero hero1, villain villain1) {
  string name;
  cout << "Welcome to the new world, what is your name? ";
  cin >> name;
  hero1.set_name(name);
  cout << "Hello, " << name << endl;
  cout << "You are tasked with defeating multiple foes in order to gain access to the rest of this world and enjoy paradise.";



  .
  
}

void Cotter(Hero hero1, villain villain1) {}

void Dye(Hero hero1, villain villain1) {}

void Grilliot(Hero hero1, villain villain1) {}

void Kreibach(Hero hero1, villain villain1) {
  // Declare
  char potion1; // use expired potion or not
  char hall1;   // Turn hall left or right
  char run;     // run away or not
  int end_game = 0;

  // Intro room
  hero1.loss_health(25);
  cout << "Drip..." << endl << "Drip...";
  cout << "You gain consciously slowly, each drop of water a sliver of wakefullness returning." << endl;
  cout << "With a wretch of your eyes, you jolt upwards and begin scouring the room." << endl;
  cout << "You find yourself in a shadowed stone room empty except for a single steel door on the far wall." << endl;
  cout << "You shiver as you stumble to your feet, and then to look upwards at a small barred window just the right size to let the evening light in, but to restrict any view." << endl;
  cout << "You can't recall why you are in this room, prison, you uneasily realize. " << endl;
  cout << "In fact you can barely recall what your own name, ";
  hero1.set_name("Rue"); // Can read name, but nah
  cout << hero1.getName() << " , is." << endl;
  cout << "Clearly, the window will yeild nothing, so you find yourself at the steel door testing its strength." << endl;
  cout << "You are pleasantly surprised to find the door creak open spraying sprinkling dust from its hinges." << endl;
  system("CLS");

  // Find potion
  cout << "The hall, you decide, is even more eerie and drab, appearing to have been uninhabited for decades." << endl;
  cout << "You are at the end of the hall, so there is only one direction to travel, forward." << endl;
  cout << "You travel down the hall passing ancient, unmoving doors and their beaconing contents. " << endl;
  cout << "Regardless of their invition, you pass partially because they are "
          "empty and partially because of the going sense of forboding it "
          "releases."
       << endl;
  cout << "Suddenly, you stop. To your left there lies a single rusty dagger "
          "and what looks like a health potion."
       << endl;
  cout << "You gladly take the dagger, but you pause once you see the health "
          "potion. It's old, concerningly so."
       << endl;
  cout << "It should be red but the crimson has long since turned to a dull "
          "brown, and you spy what appears to be a crack stoppered by its own "
          "dry contents."
       << endl;
  cout << "It is a health potion, so it likely won't kill you" << endl;
  cout << "You consider: should you take and drink the potion, you are stiff "
          "and injuried, or leave it for another decade. (y/n)"
       << endl;
  cin >> potion1;
  system("CLS");

  if (potion1 == 'y') {
    hero1.true_damage_loss(25);
    cout << "You pick up the potion, take a brerath, and choke down the "
            "drink's contents. "
         << endl;
    cout << "Immediately, you regret your choice. The potion clearly lost its "
            "healing property, and what remains feels acidic as it settles "
            "down your throat. "
         << endl;
    cout << "You have to quake on the floor for minutes before the pain slowly "
            "abates."
         << endl;
  } else {
    cout << "You decide not to test your luck. It might not even be a health "
            "potion, and if you know anything, then decade old medicine is not "
            "to be trusted."
         << endl;
  }

  // Hall
  cout << "You gather your dagger and begin to pick your way through the halls anew." << endl;
  cout << "Finally, you reach the hall's end, and peer both directions. Both the right and the left appears to be safe, but the left appears to be dustier than the right" << endl;
  cout << "Marginally less dusty, perhaps someone walked by recently." << endl;
  cout << "Is it safe to go right or left? (r/l)" << endl;

  cin >> hall1;
  system("CLS");

  if (hall1 == 'l') 
  {
    cout << "You decide to turn left, it seems welcoming afterall, no potential killers and all. " << endl;
    cout << "You stumble down the hall, only to fall straight through the floor with the crumbling stone. " << endl;
    cout << "You do not survive the fall. " << endl;
    hero1.lose_game();
    while (end_game != 1)
    {
      cout << "Your eyes close for the final time. Enter 1 to close the program." << endl;
      cin >> end_game;
      if (end_game == 1) 
      {
        exit(1);
      }
    }
  } 
  else 
  {
    cout << "Humans, they might know what is going on, you think. Determined, you begin picking your way down the passage. " << endl;
    cout << "You find a purse of potions, this time not expired beyond belief. You pick it up, either to return to its sane owner or to use if ou run into trouble" << endl;
    cout << "Suddenly, a figure forms in the gloom, and you are face to face with a ghastly monster. Its short like a child, yet has wrinkled skin that looks like it has sat in the sun for years on end." << endl;
    cout << "It turns toward you, red eyes gleaming in twisted glee. With a wretched cry it lunges toward you. It seems like it was a strike of luck that you found the dagger. " << endl;
    battle(hero1, villain1);

    //Run or search
    cout << "You force yourself to turn away from your attacker and begin begin running down the hall. " << endl;
    cout << "You see a small camp coming up soon. Stop and search it or continue to run by? (s/r)" << endl;
    if (run == 'r') 
    {
      cout << "Never! You just want to get out of here, and the camp will clearly just slow you down" << endl;
      cout << "You run threw hall after hall slowing down for nothing. So fast were you going that you were unable to do a single thing about the second creature that lunged at you with a rock. " << endl;
      hero1.lose_game();
      while (end_game != 1)
      {
        cout << "Your eyes close for the final time. Enter 1 to close the program." << endl;
        cin >> end_game;
        if (end_game == 1) 
        {
          exit(1);
        }
      }
    } 
    else 
    {
      cout << "There might be something useful you realize past your panic. You stop and scour the items. Useless, you think. Your about to give up when you find a recognizable stone." << endl;
      cout << "A return stone. You grab it a smash it onto the ground promptly. "<< endl;
      cout << "You open your eyes..." << endl;
      cout << "...Drip \n ...Drip" << endl;
      cout << "You are in a small stone room shrouded in darkness. You can't remember how you got her, but you find you'd focus on something else." << endl;
      cout << endl << endl << "The end..." << endl;
    }
  }
}

void Riggins(Hero hero1, villain villain1) {}

void Wofford(Hero hero1, villain villain1) {
  string hero_Name;
  cout << "What shall your adventuers name be?: ";
  cin >> hero_Name;
  system("CLS");
  cout << "You wake up, immediately realizing you are on a deserted island, sun bearing down" << endl;
  cout << "on your face. You look to the left, you see many palm tree's swaying in the windy air." << endl;
  cout << "The beach that you have arrived on stretches as far as the eye can see. To the right you see" << endl;
  cout << "the boat you were on, torn to bits and pieces. You also notice multiple bodies along the " << endl;
  cout << "beach. You recognize that they're familiar, almost family-like. And that when it hits you. "<< endl;
  cout << "Your name is " << hero_Name << " you were on a boat party with your family for your twenty" << endl;
  cout << "first birthday. You start to grieve thinking, what could have happened? But there's no time for that." << endl;
  cout << "You realize that the sun is going down, what do you do?" << endl;
  string choice;
  cout << "(1)Find Shelter" << endl;
  cout << "(2)Climb a Tree" << endl;
  cout << "(3)Stay to Grieve" << endl;
  cin >> choice;
____________________________________________________________________________
if choice == 1:
  {
  cout << "You continue on to find shelter, you look around the surrounding area, there is a forest area to the east. To the west there are open fields of tall grass and nice oak trees. To the South there are rocky grounds, with a steep mountain behind. You want to decide which way should be the best for your survival. You sit there pondering what decisions you could make along the way, until you hear a sudden noise behind you. There's a sharp pain in your back and you pass out from the pain.
  Press enter to continue
  
  system(“CLS”)
  You wake up, realizing that it has been multiple days since you last remembered. You come to your senses and see that there are multiple appearances standing around you. They are screaming at you, speaking English, saying that you have entered their territory as a traitor. They hold you as a prisoner, and torture you for your crimes as they see fit. You died   4 days later
  Press enter to continue
  
  system.exit(1);
  }
If (2) Climb a Tree
When you climb the tree, you spot a light flickering inside of the forest. What should you do?

Leave to see what the light is
Don't go see what the light is

	If (1) Leave to see what the light is
While on your way to the light, you notice multiple warning signs. Many skulls and sticks were along the path, skeletal bones and remains were almost at every turn and bend. And as you continue the light seems to be getting brighter, almost as if there are multiple sources of light. And that when you arrive. A large set of wooden gates stand before you. You see two men standing on guard towers that are on opposite sides of the doors. They start to motion something below them and the two doors start to open. As they open there is a large amount of people with bows and arrows. They tell you that you do not belong there and that they are taking you in as hostage. To be free once again they tell you that you must defeat their leader in a duel. Do you accept? Yes or No.

Cin choice;
If choice yes
	
	Else if choice no
		They shoot. You die. Gg no re wp
	
	If (2)Don't go see what the light is
You want to decide what would be the best for your survival. You sit there pondering what decisions you could make along the way, until you hear a sudden noise behind you. There's a sharp pain in your back and you pass out from the pain.
Press enter to continue
____________________________________________________________________________
If (3) Stay to Grieve
You stay to grieve, and you stand there, looking at the lifeless bodies of your family. You eventually realize that multiple hours have passed, and that it's the middle of the night. You try to leave to find shelter but you get attacked by something in the dark.You die on the spot
Press enter to continue
system.exit(1)

}

void Woodworth(Hero hero1, villain villain1) {
  int choice;
  bool alive = true;
  cout << "You regain consciousness in a cave with one very large tree on an "
          "island surounded by crystal clear water."
       << endl;
  cout << "The lake surrounding the tree seems to be completly clear of fish. "
          "The tree in the middle is partialy covered in mushrooms."
       << endl;
  cout << "You realize you are very thirsty and could use a drink. Would you "
          "like to take a drink (1), Inspect the water(2), Atempt to swim "
          "across(3)";
  cin >> choice;

  switch (choice) {
  case (1):
    cout << endl
         << "You take a drink and feel refreshed you healed to full health!"
         << endl;
    hero1.gain_health(100000000);
    cout << "You decide to rest a little while." << endl;
    cout << "You have almost fallen asleep when " << villain1.getName()
         << " jumps out of the water and lands right next to you." << endl;
    cout << "You ready your weapon." << endl;
  case (2):
    cout << endl
         << "You inspect the water and see there seems to be nothing wrong "
            "with it, though you choose to play it safe."
         << endl;
    cout << "You take are about to sit down when you hear a noise come from in "
            "the water."
         << endl;
    cout << villain1.getName()
         << " jumps out of the water and hits you before you can react."
         << endl;
    hero1.loss_health(20);
    if (hero1.getHealth() < 0) {
      cout << "You feel the blow and black out" << endl;
      cout << "You died before the fight even started how sad." << endl;
    } else {
      cout << "You grab your weapons and prepare to battle." << endl;
    }
  case (3):
    cout << "You decide to try to swim to the tree. You swim about halfway "
            "there then you hear the Jaws Theme. In a panic you start swimming "
            "faster.\n";
    cout << "You feel something brush past your left leg. You know for a fact "
            "there is still a decent amount of distance between you and the";
    cout << "island or the land you came from.\n What do you do? Attempt to "
            "swim to the island(1), Try to fight whatever just ran into "
            "you(2), Float Very Still(3)";
    cin >> choice;

    switch (choice) {
    case (1):
      cout << "You start to swim as fast as you can toward the island.\n"
           << "You feel a large amount of teeth sink into your right thigh.";
      hero1.loss_health(40);
      if (hero1.getHealth() < 0) {
        cout << "You are unable to break free from its grip and are dragged "
                "down into the depths. You survive for an unreasonable amount "
                "of time without oxygen before blacking out. You don't wake "
                "back up.";
      } else {
        cout << "You break free from its grip but the water rushes into your ";
        cout << "wounds but you feel the water healing you.";
        hero1.gain_health(10);
        cout << "You heal 10 health. Your health is currently "
             << hero1.getHealth();
      }
      cout << "You start to swim as fast as you can toward the island again. "
              "Trying to get away.\n"
           << "You feel a large amount of teeth sink into your left thigh.";
      hero1.loss_health(40);
      if (hero1.getHealth() < 0) {
        cout << "You are unable to break free from its grip and are dragged "
                "down into the depths. You survive for an unreasonable amount "
                "of time without oxygen before blacking out. You don't wake "
                "back up.";
      } else {
        cout << "You break free from its grip but the water rushes into your ";
        cout << "wounds but you feel the water healing you.";
        hero1.gain_health(10);
        cout << "You heal 10 health. Your health is currently "
             << hero1.getHealth();
      }
      cout << "You start to swim as fast as you can toward the island for the "
              "third time. Trying to get away.\n"
           << "You feel a large amount of teeth sink into your right thigh "
              "again.";
      hero1.loss_health(30);
      if (hero1.getHealth() < 0) {
        cout << "You are unable to break free from its grip and are dragged "
                "down into the depths. You survive for an unreasonable amount "
                "of time without oxygen before blacking out. You don't wake "
                "back up.";
      } else {
        cout << "You break free from its grip but the water rushes into your ";
        cout << "wounds but you feel the water healing you.";
        hero1.gain_health(10);
        cout << "You heal 10 health. Your health is currently "
             << hero1.getHealth();
        cout << "You succesfully make it to the island and look up to see "
             << villain1.getName() << "Standing before you ready to fight.";
      }
    case (2):
      cout << "You attempt to fight the shark but soon realize it is a lost "
              "cause, but it is too late.\n";
      cout
          << "The shark gets a firm hold and your leg and pulls you down into "
             "the deep. It takes you a while to black out though. You drowned.";
      hero1.loss_health(100000000);
    case (3):
      cout << "You knew this was a bad idea.";
      cout << "And you choose it anyway so now I get control of your game.";
      cout << "How about I just kill you now.";
      cout << "Or I could let you get to the island.";
      cout << "You obviously need help so how about you just teleport you to "
              "the island.";
    }
  }
  system("cls");

  cout << "BATTLE BEGIN!!!" << endl;

  int damage = 0

      while (hero1.getHealth() > 0 && villain.getHealth() > 0) {
    if (hero1.getSpeed > villain.getSpeed) {
      cout << "Chose action    1: Light Attack    2: Heavy Attack    3: Health Potion";
      cin >> choice;
      switch (choice){
        case(1):
        
      }
    } else {
      
    }
  }
}

void Rhoten(Hero hero1, villain villain1) {
  int choice;
  bool is_knife = 0;
  cout << "Finding just enough change to borrow a horse with saddle, you ride "
          "through an empty and dull grassland with enough sunshine that could "
          "dehydrate a small lake. The horse, you named Lighter, suddenly "
          "refuses to step another hoove.\nLeaving no other choice, you decide "
          "to rest on a wall full of moss, which have seemed to attempt to "
          "backflow for more water.";
  hero1.gain_health(
      hero1.getHealth() /
      2.50); // The hero gains a near-third amount of health from resting.
  system("pause");
  cout << "After a few minutes of unwinding, a sudden gust of wind flows "
          "through and out of the moss next to you. Immediately, Lighter "
          "gallops through the hole the sudden wind opens. Knowing that you "
          "can't reach far without him, you quickly follow behind. You rush "
          "into a tunnel with only brushes of candles lighting your path. "
          "Looking behind you, you realize nothing's in sight. However, "
          "turning back around, you slam into something. It felt as if the "
          "object was the same size as you. You hit the ground and hear a "
          "sound that should've only came from you own mouth:\n";
  cout << char(146) << "CK!" << endl;
  cout << "Silence... All you feel is the blow of the wind. You don't see "
          "anything and don't want to stick around "
          "with the quiet; however, your inclination holds your ground. Still, "
          "nothing seems to be happening.\n";
  cout
      << "You cut to your mind and think of three choices:" << endl
      << "1. Pull your melee out \t 2. Call out for Lighter \t 3. Do nothing\n";
  cout << "You've decided to go with choice #";
  cin >> choice;
  if (choice == 1) {
    cout << "\nYou pull your weapon. It rings a tune of keen defense. Nothing "
            "approaches.\n";
  } else if (choice == 2) {
    cout
        << "\nYou call out your horse's name: \"LIGHTER!\" Although Lighter is "
           "needed for the resumption of journey, a sense of deplore strikes "
           "through your mind as this could've gave away your unwanted entry.\n"
  } else if (choice == 3) {
    cout << "\nSometimes doing nothing is the best preparation, you thought to "
            "yourself. A few minutes of your life passes in a dim and ominous "
            "tunnel.\n";
  } else {
    cout << "\nYou've scratched the thoughts out of your head and decided to "
            "keep walking forward instead.\n";
  }
  system("pause");
  system("CLS");
  cout << "A loud neigh comes from the direction your horse ran to. Repulsing "
          "some time to consider your choices, you start sprinting. As you "
          "continue to hear the calls from your campanion, strings of dangling "
          "moss start to appear. You point your "
          "melee's blade ahead of you. It cuts through some of the moss you "
          "encounter as you dash, nearing the new shade of light that gleamed "
          "onto your weapon.\n"
          "You've reached the end of the tunnel and step into a gray scale of "
          "open space. The breeze seemed to fade away, and you take a moment "
          "to look around you.\n"
          "The flooring is filled with dark and crumpled concrete, reflecting "
          "the background of the symbols scattered across it. Some brewing "
          "stands are propped outside of the symbols'"
          "pattern. You see no sign of your horse. Despite this, you see a "
          "shine out of the corner of your eye. As you turn and walk to it, "
          "the bright light forms into a knife. The knife's "
          "handle is colored turquoise, with a bright pink giving the "
          "appearance of the blade. It sits on a wooden table with a couple "
          "unknown potions positioned around.";
  cout << "[Do you want to pick up the knife? 1 for yes, 0 for no]: ";
  cin >> is_knife;
  if (is_knife == 1) {
    cout << "\nYou pick up the knife and a rush of energy fills your body. "
            "Your vision, strength, and mobility increased with this new "
            "feeling of vitality!\n";
    Hero buffed_Hero(int hero1.getHealth(), int(hero1.getSpeed() + 2), int(hero1.getStrength + 3), int hero1.getDefense);
  } 
  else 
  {
    cout << "\nYou decided not to pick up the knife\n\n";
  }
  cout << "Looking up ahead of you, you see a red, black, and white figure. It's posture is the same as a human's. The pointed claws of the creature glisten of light grey. A black bag in "
          "the shape of an envelope rests on its thigh with a handle looping around the neck of the bod."
}

void Son(Hero hero1, villain villain1) {
  int choice = 0;
  int atktype = 0;
  int damage = 0;
  int run = 0;
  dice struggle(100);
  int strugres = 0;
  int hp = hero1.getHealth();

  cout
      << "It's a dark night, and you stumble upon a humid, kind-of gross swamp."
      << endl; // story
  cout << "While you keep walking, you come across a very dark green patch "
          "of.. water?"
       << endl;                                                     // story
  cout << "The 'water' slowly, slooowly starts to grow..." << endl; // story
  cout << "As it grows, you realize that it's.. alive!? The weird lake monster "
          "groans and bubbles, and while you can't see it's face, you feel "
          "like you've disturbed it, somehow."
       << endl; // story
  cout << "The monster rises to its full height, and it appears to be a sort "
          "of slime. But compared to normal slimes, it's super huge! And super "
          "angry..."
       << endl
       << endl; // story
  cout << "You can feel the huge slime's anger radiating off of it. What will "
          "you do?"
       << endl; // story

  while (hp != 0) { // while the heros health is not at 0
    cout << "1. Attack \t 2. Use Potion \t 3. Check Stats \t 4. Run"
         << endl; // choices
    cin >> choice;
    system("CLS");    // clear screen
    switch (choice) { // switch statement based on user choices
    case 1:           // attack
      cout << "1. Heavy Attack \t 2. Light Attack"
           << endl; // ask for heavy or light atk
      cin >> atktype;
      if (atktype == 1)            // if they choose heavy
        damage = hero1.attack_h(); // run heavy
      else                         // anything else will be light
        damage = hero1.attack_l(); // run light
      break;
    case 2:             // if they want to use a potion
      hero1.h_potion(); // call health potion hero class
      break;
    case 3: // if they want to check their stats
      cout << "Spd: " << hero1.getSpeed() << "\t Def: " << hero1.getDefense()
           << endl;
      cout << "Str: " << hero1.getStrength() << "\t HP: " << hero1.getHealth()
           << endl; // print all stats
      break;
    case 4: // if they want to run away
      cout << "The slime quickly reaches out to you, before you can even pick "
              "up your feet. Do you try to escape?"
           << endl;              // the slime gets them
      cout << "1. Yes \t 2. No"; // if they try to escape
      cin >> run;
      if (run == 1) { //
        strugres = struggle.roll();
        if (strugres <= 34) {
          cout << "You are slowly eaten by the sludge...";
          hero1.loss_health(hero1.getHealth());
        } else {
          cout << "You successfully escape!";
        }
      } else {
        cout << "You are slowly eaten by the sludge...";
        hero1.loss_health(hero1.getHealth());
      }
    }
    system("CLS");
    // sludges turn
    villain1.attack();
  }
}

void Vincent(Hero hero1, villain villain1, int turnCounter) {
  turnCounter = 0;
  char decision = 'Y';

  cout << "You see yourself in a cauldera crisscrossed with bridges of "
          "brimstone."
       << endl
       << "You remember why you are here, if this volcano erupts an entire "
          "village will die a fiery death."
       << endl;
  cout << "You hear the gurgling of a nearby lava flow, do you want to go "
          "closer?(Y or N) ";
  cin >> decision;

  if (decision == 'Y') {
    hero1.true_damage_loss(15);
    cout << "The heat from the lava burns you as you approach"
         << hero1.getHealth();
  } else {
    cout << "You keep walking and go deeper in the volcano";
  }

  cout << "A roar explodes from the shore of the lava at the center of the "
          "cauldera as the beast you have come to slay,a massive obsidion "
          "golem, sprints at you."
       << endl;

  cout << "Do you want to charge it?(Y/N)";
  cin >> decision;

  if (decision == 'Y') {
    hero1.attack_h();
    villain1.attack();
    turnCounter += 1;
  }

  else {
    hero1.attack_l();
    villain1.attack() turnCounter += 1;
  }

  cout << "The villain's health is now " << villain1.getHealth() << " HP"
       << endl;
  cout << "Your health is now " << hero1.getHealth() << " HP" << endl;

  while (turnCounter <= 9) 
  {
    if (turnCounter == 9 && villain1.getHealth() < 50) 
    {
      cout << "You have failed, the world turns to a mix of heat and agony as "
              "the volcano erupts around you, but it is not all in vain as you "
              "gaze to the heavens you see ghostly maidens on winged steads "
              "descending towards you to guide you to the afterlife  ";
    }
   cout << "after that last attack you are ready to try and hit back" << endl;
    
    
  }
}

void Wells(Hero hero1, villain villain1) 
{
  cout << "You are strolling through the woods when you happen upon a(n) villain! The villain tries to engage!" << endl;
  system("CLS");
  int heroAttackType;
  float damage;
  bool cont = 1;
  int heroTurn;
  int villainTurn;
  float heroHealth = hero1.getHealth();
  float villainHealth = villain1.getHealth();

  if (hero1.getSpeed() > villain1.getSpeed()) 
  {
    heroTurn = 2;
    while (cont) 
    {
      while (heroTurn == 2) 
      {
        cout << "Would you like to heavy attack(1), which would deal a base of 10 damage to yourself, or light attack(2), which does nothing to you: ";
        cin >> heroAttackType;

        system("CLS");

        if (heroAttackType == 1) 
        {
          damage = hero1.attack_h();
          hero1.true_damage_loss(10);
          villain1.takeDamage(damage);

          cout << "Your new health after the base damage is: " << heroHealth << " hp." << endl;
          cout << "The villain's health after you attack is: " << villainHealth << " hp." << endl;

          if (villainHealth <= 0) 
          {
            cout << "YOU WIN!!! THANKS FOR PLAYING!!!" << endl << endl;
            heroTurn = 1;
            villainTurn = 1;
            cont = 0;
          } 
          else if (heroHealth <= 0) 
          {
            cout << "YOU LOSE";
            system("CLS");
            cout << "GAME OVER";
            heroTurn = 1;
            villainTurn = 1;
            cont = 0;
          } 
          else 
          {
            cout << "NEXT ROUND" << endl << endl;
            heroTurn = 1;
            villainTurn = 2;
          }
        } 
        else if (heroAttackType == 2) 
        {
          damage = hero1.attack_l();
          villain1.takeDamage(damage);
          cout << "The villain's health after you attack is: " << villainHealth << " hp." << endl;
          heroTurn = 1;
          villainTurn = 2;
        } 
        else 
        {
          cout << "Invalid Attack Type! You Forfeit Your Turn And The Villain Attacks!" << endl;
          heroTurn = 1;
          villainTurn = 2;
        }
      }

      system("CLS");
      damage = 0;

      while (villainTurn == 2) 
      {
        damage = villain1.attack();
        hero1.loss_health(damage);
        cout << "Your health is: " << heroHealth << " hp." << endl;

        if (villainHealth <= 0) 
        {
          cout << "YOU WIN!!! THANKS FOR PLAYING!!!" << endl << endl;
          heroTurn = 1;
          villainTurn = 1;
          cont = 0;
        } 
        else if (heroHealth <= 0) 
        {
          cout << "YOU LOSE";
          system("CLS");
          cout << "GAME OVER" << endl << "GET BETTER NERD";
          heroTurn = 1;
          villainTurn = 1;
          cont = 0;
        } 
        else 
        {
          cout << "NEXT ROUND" << endl << endl;
          heroTurn = 2;
          villainTurn = 1;
          cont = 1;
        }
      }

      system("CLS");
    }
  }

  if (hero1.getSpeed() < villain1.getSpeed()) 
  {
    villainTurn = 2;
    while (cont) 
    {
      while (heroTurn == 2) 
      {
        cout << "Would you like to heavy attack(1), which would deal a base of 10 damage to yourself, or light attack(2), which does nothing to you: ";
        cin >> heroAttackType;

        system("CLS");

        if (heroAttackType == 1) 
        {
          damage = hero1.attack_h();
          hero1.true_damage_loss(10);
          villain1.takeDamage(damage);

          cout << "Your new health after the base damage is: " << heroHealth << " hp." << endl;
          cout << "The villain's health after you attack is: " << villainHealth << " hp." << endl;

          if (villainHealth <= 0) 
          {
            cout << "YOU WIN!!! THANKS FOR PLAYING!!!" << endl << endl;
            system("CLS");
            cout << "Would you like to continue your walk? Enter 1 for yes or 0 for no: ";
            cin >> cont;
            heroTurn = 1;
            villainTurn = 1;
          } 
          else if (heroHealth <= 0) 
          {
            cout << "YOU LOSE";
            system("CLS");
            cout << "GAME OVER";
            heroTurn = 1;
            villainTurn = 1;
            cont = 0;
          } 
          else 
          {
            cout << "NEXT ROUND" << endl << endl;
            heroTurn = 1;
            villainTurn = 2;
          }
        } 
        else if (heroAttackType == 2) 
        {
          damage = hero1.attack_l();
          villain1.takeDamage(damage);

          cout << "The villain's health after you attack is: " << villainHealth << " hp." << endl;

          heroTurn = 1;
          villainTurn = 2;
        } 
        else 
        {
          cout << "Invalid Attack Type! You Forfeit Your Turn And The Villain Attacks!" << endl;
          heroTurn = 1;
          villainTurn = 2;
        }
      }

      system("CLS");
      damage = 0;

      while (villainTurn == 2) 
      {
        damage = villain1.attack();
        hero1.loss_health(damage);

        cout << "Your health is: " << heroHealth << " hp." << endl;

        heroTurn = 2;
        villainTurn = 1;

        if (villainHealth <= 0) 
        {
          cout << "YOU WIN!!! THANKS FOR PLAYING!!!" << endl << endl;
          cout << "Would you like to continue your walk? Enter 1 for yes, 0 for no: ";
          cin >> cont;

          heroTurn = 1;
          villainTurn = 1;
        } 
        else if (heroHealth <= 0) 
        {
          cout << "YOU LOSE";
          system("CLS");
          cout << "GAME OVER" << endl << "GET BETTER NERD";

          heroTurn = 1;
          villainTurn = 1;
          cont = 0;
        } 
        else 
        {
          cout << "NEXT ROUND" << endl << endl;
          heroTurn = 1;
          villainTurn = 2;
          cont = 1;
        }
      }

      system("CLS");
    }
  }
}

void Garrelts(Hero hero1, villain villain1) {}

void battle(Hero hero1, villain villain1) {
  // Variables
  int action;       // Action choice for hero
  int damage;       // Action damage
  int end_game = 0; // variable to enter exit(1);

  if (hero1.getSpeed() >=
      villain1.getSpeed()) // Find which character attacks first
  {
    while (hero1.getHealth() > 0 ||
           villain1.getHealth() > 0) // While a character
    {
      cout << "You health: " << hero1.getHealth() << endl;
      cout << "Enemies health: " << villain1.getHealth() << endl << endl;

      cout << "Select your action: \n  1. light attack \n  2. heavy attack \n  "
              "3. health potion"
           << endl;
      cin >> action;
      switch (action) {
      case (1):
        damage = hero1.attack_l();
        villain1.takeDamage(damage);
        break;
      case (2):
        damage = hero1.attack_h();
        villain1.takeDamage(damage);
        break;
      case (3):
        hero1.h_potion();
        break;
      }

      damage = villain1.attack();
      hero1.loss_health(damage);
    }
  } else {
    while (hero1.getHealth() > 0 || villain1.getHealth() > 0) {
      cout << "You health: " << hero1.getHealth() << endl;
      cout << "Enemies health: " << villain1.getHealth() << endl << endl;

      damage = villain1.attack();
      hero1.loss_health(damage);

      cout << "Select your action: \n  1. light attack \n  2. heavy attack \n  "
              "3. health potion"
           << endl;
      cin >> action;
      switch (action) {
      case (1):
        damage = hero1.attack_l();
        villain1.takeDamage(damage);
        break;
      case (2):
        damage = hero1.attack_h();
        villain1.takeDamage(damage);
        break;
      case (3):
        hero1.h_potion();
        break;
      }
    }
  }
  if (hero1.getHealth() > villain1.getHealth()) {
    cout << "The creature dies." << endl;
  } else {
    while (end_game !=
           1) // Techniquely an infinite loop, but it ends when the correct item
              // is entered because it closes down the program period.
    {
      cout
          << "Your eyes close for the final time. Enter 1 to close the program."
          << endl;
      cin >> end_game;
      if (end_game == 1) {
        exit(1);
      }
    }
  }
  system("CLS");
}