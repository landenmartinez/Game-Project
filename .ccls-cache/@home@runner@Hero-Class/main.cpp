// Main Adventure
// December 6, 2022

#include "Hero.h"    // Hero header File
#include "villain.h" // Villian header File
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
//#include <windowns.h> //Does not work in replit
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
//void aniOut(string output); //A function to animate outputed text provided by yours truely :) - Landen M.  //Does not work in replit

/* * * * * * * END OF PEOPLE FUNCTIONS * * * * * * * */

int main() {
  Hero hero1(100, 15, 10, 8);
  villain villain1(200, 100, 1700000000, 6); //Health, speed, strength, defense
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

  cout << endl << "Thanks for playing our adventures :)" << endl;

  return 0;
}

void Martinez(Hero hero1, villain villain1) {
}

void Cotter(Hero hero1, villain villain1) 
{
  villain goblin(45, 7, 15, 10);
  cout << "As you leave the Castle of Nindriel, you gather supplies and begin your journey. Go, " << hero1.getName() << ", and leave for the outside world!\n";
  cout << endl << "As you journey out, the path is quiet and well-tread. Soon, you encounter an odd, green thing. As you approach, you discover it's an angry goblin looking for a fight!\n";
  battle(hero1, goblin);
  cout << endl << "The goblin falls, but suddenly..." << endl << "BONK!" << endl << "As you fade to black, you see some... thing... carrying you off into a cave nearby.\n";
}

void Dye(Hero hero1, villain villain1) 
{
  int choice = 0;
  cout << "You wake up in a dark tunnel, there???s a small light that grows larger with every step. A torch hangs on the wall, you pick it up and continue down the tunnel. Forty minutes pass, you spot a sign on the wall to your right. \"Caution! Unstable ceiling, turn back!\??? You choose to continue down the tunnel, but after you take a few steps the stone above your head starts to crumble, scaring you and causing you to run. The tunnel collapses behind you leaving you trapped and no longer able to head back, you hope for an exit as you walk. After a long time you see yet another light, however this light is different, its white and covers more of the tunnel, you found the exit! You look around and see three paths, one made of dirt, one made of gravel, and another dirt path that has a warning sign and blood stains.";

  cin >> choice;

  if (choice == 1)
  {
    cout << "(1.) You choose the dirt path, this path leads you home where you find your family crying with joy that you returned after being pronounced dead three days ago.";
  }

  if (choice == 2)
  {
    cout << "(2.) You choose the blood stained dirt path, you notice a pair of glowing eyes in a bush ahead of you, it speaks in a low tone. \???What brings you here stranger?\??? You feel terrified by the low rumble in its voice yet you answer with \???I'm lost.\??? Its teeth shine as it smiles and reveals itself, \???I hunger, and you shall be my meal.\??? The monster tears your head off slowly and painfully, killing you in the most painful way you can think.";
  }
  
  
cout << "(3.) You choose the gravel path, this path has plants that will be useful for later, you take a handful of all sorts of plants. You manage to make a healing potion. After a while of walking and wondering, you encounter an enemy.";//insert battle function

battle(hero1, villain1);
}

void Grilliot(Hero hero1, villain villain1) {
  Hero Jane(100, 12, 12, 12);          //sets the hero
  villain Kigiuth(80, 13, 10, 10);     //sets the villian
  char attack = 'h';                   //what type of attack the user chooses
  float damageV = 0, damageH = 0;      //damage to the other side
  float healthV = Kigiuth.getHealth(); //villain health
  float healthH = Jane.getHealth();    //hero health
  bool gameOn = true;                  //bool from true_damage_loss function
  //Background
  cout << "You are the most sought after healer in the kingdom.";
  cout << "The Highcrest villagers were kind to you. Having a bonfire in honor of you healing their increasingly "            "sickly chief" << endl;
  cout << "Sadly, you had to continue. The Newburgh villagers on the other side of the forest have requested your "           "help." << endl;
  cout << "A sick child needs your help in the next village and their time is running short each day you take to "            "get there." << endl;
  cout << "They warned you of it, the beast that haunts the forest on the full moon. The villagers told stories of "          "merchants, warriors, and travelers following the path only for their bodies to be found the next day in "          "the infamous clearing that stands close to the center of the forest." << endl;
  system("CLS");
  //Buildup
  cout << "No one knows how it got there, they only know of the misfortune it brings on the full moon. You???ve been "          "traveling for two days now. The sun has recently set, and with it a dense fog has rolled in. " << endl;
  cout << "The sun has recently set, and with it a dense fog has rolled in. Even with your lantern you can only see"          " a few feet in front of you, and nothing more." << endl;
  cout << "As you look up you see the branches of the trees arch above you, as well as the bright full moon in a "            "clear sky. The ominous noises around you only add to your apprehension." << endl;
  cout << "You finally reach the clearing. Up ahead you see where the path continues, about 60 feet from you. But "           "something seems to be in there with you." << endl;
  cout << "You tentatively take a few steps forward, praying to the gods above that whatever it is doesn???t notice "           "you. The fog helps you in this, obscuring you from the creature's sight. However, your prayers go "                "unanswered." << endl;
  cout << "The next step you take is on a stray twig. The snap echoes throughout the clearing and its head swivels "          "to you. Its glowing eyes pin you in place." << endl;
  system("CLS");
  //Villain Intro
  cout << "As it creeps closer you notice its wolf skull head with antlers on top that seem to reach for the stars "          "above. Its teeth glint in the moonlight, as do its long, sharp claws. Its torso is human, but its legs "           "are those of bears." << endl;
  cout << "Its deep growl reveberates through your chest as it creeps closer. A low voice rises in the forest. It "           "could only have come from the creature." << endl;
  cout << "???You shouldn???t have come here. I haven???t eaten in many moons and you will do nicely. You should???ve "               "listened to those villagers. After all, they are the ones who made me into this." << endl;
  cout << "They banished me. Me! Their greatest warrior! All because I killed the chief. The old man was senile and"          " close to death anyways. I would???ve been a better one than the chief???s naive child, but they wouldn???t "            "hear me." << endl;
  cout << "They banished me to these woods, leaving me to the predators within. Their annihilation will come soon, "          "brought by their own foolishness. Your death will make me strong enough to exterminate that village. "             "Everyone will know the name Kigiuth!???" << endl;
  cout << "As the last word ends, he rushes towards you on all fours. His mouth is open in a snarl, the teeth on "            "full view. From your hip you pull your sword out of its sheath, ready to defend yourself and the kind "            "village you came from." << endl;
  system("CLS");
  //first blows exchanged
  cout << "As Kigiuth lurches towards you, you attack." << endl;
  cout << "Is the attack heavy or light? (h for heavy and l for light) ";
  cin >> attack;
  if (attack == 'h')
  {
    damageV = Jane.attack_h();
  }
  else
  {
    damageV = Jane.attack_l();
  }
  healthV = Kigiuth.takeDamage(damageV);
  if (healthV <= 0)
  {
    exit(1);
  }
  cout << "Your attack hits, but Kigiuth raises from the ground with surprising speed." << endl;
  cout << "His next attack lands." << endl;
  damageH = Kigiuth.attack();
  gameOn = Jane.true_damage_loss(damageH);
  //the rest of the battle is in a loop
  while (gameOn == true)
  {
    cout << "You attack next, is it heavy(h) or light(l)? ";
    cin >>  attack;
    if (attack == 'h')
    {
      damageV = Jane.attack_h();
    }
    else
    {
      damageV = Jane.attack_l();
    }
    healthV = Kigiuth.takeDamage(damageV);
    if (healthV <= 0)
    {
      exit(1);
    }
    cout << "Kigiuth attacks" << endl;
    damageH = Kigiuth.attack();
    gameOn = Jane.true_damage_loss(damageH);
  }
}

void Kreibach(Hero hero1, villain villain1)
{
  // Declare
  char potion1; // use expired potion or not
  char hall1;   // Turn hall left or right
  char run;     // run away or not
  int end_game = 0; 

  //Intro room
  hero1.true_damage_loss(25); //Start injured
  cout << "Drip..." << endl << "Drip..." << endl;
  cout << "You gain consciously slowly, each drop of water a sliver of wakefullness returning." << endl;
  cout << "With the opening of your eyes, you jolt upwards and begin scouring the room." << endl;
  cout << "You find yourself in a shadowed stone room empty except for a single steel door on the far wall." << endl;
  cout << "You shiver as you stumble to your feet, and then to look upwards at a small barred window just the right size to let the evening light in, but to restrict any view." << endl;
  cout << "You can't recall why you are in this room, prison, you uneasily realize." << endl;
  cout << "In fact you can barely recall what your own name is, ";
  hero1.set_name("Rue");      // Can read name, but nah
  cout << hero1.getName() << "." << endl; //Print name
  cout << "Clearly, the window will yeild nothing, so you find yourself at the steel door testing its strength." << endl;
  cout << "You are pleasantly surprised to find the door creak open spraying sprinkling dust from its hinges." << endl;
  cout << "Enter a letter to continue. " << endl;
  cin >> run;
  system("CLS"); //Clear the screen for ease of playing

  //Find potion (use?)
  cout << "The hall, you decide, is even more eerie and drab, appearing to have been uninhabited for decades." << endl;
  cout << "You are at the end of the hall, so there is only one direction to travel, forward." << endl;
  cout << "You travel down the hall passing ancient, unmoving doors and their beaconing contents. " << endl;
  cout << "Regardless of their invition, you pass partially because they are empty and partially because of the going sense of forboding it releases." << endl;
  cout << "Suddenly, you stop. To your left there lies a single rusty dagger and what looks like a health potion." << endl;
  cout << "You gladly take the dagger, but you pause once you see the health potion. It's old, concerningly so." << endl;
  cout << "It should be red but the crimson has long since turned to a dull brown, and you spy what appears to be a crack stoppered by its own dry contents." << endl;
  cout << "It is a health potion, so it likely won't kill you." << endl;
  cout << "You consider: should you take and drink the potion, you are stiff and injuried, or leave it for another decade. (y/n)" << endl;
  cin >> potion1; //Read in if you use potion 
  system("CLS");  //Clear screen after choice

  if (potion1 == 'y') //Drink potion
  {
    hero1.true_damage_loss(25); //Recieve true damage from potion
    cout << "You pick up the potion, take a brerath, and choke down the drink's contents." << endl;
    cout << "Immediately, you regret your choice. The potion clearly lost its healing property, and what remains feels acidic as it settles down your throat." << endl;
    cout << "You have to quake on the floor for minutes before the pain slowly abates." << endl;
  } 
  else //Don't drink potion
  {
    cout << "You decide not to test your luck. It might not even be a health potion, and if you know anything, then decade old medicine is not to be trusted." << endl;
  }

  //Hall
  cout << "You gather your dagger and begin to pick your way through the halls anew." << endl;
  cout << "Finally, you reach the hall's end, and peer both directions. Both the right and the left appears to be safe, but the left appears to be dustier than the right" << endl;
  cout << "Marginally less dusty, perhaps someone walked by recently." << endl;
  cout << "Is it safe to go right or left? (r/l)" << endl;
  cin >> hall1;  //Right or left
  system("CLS"); //Clear screen

  if (hall1 == 'l') //Left hall
  {
    cout << "You decide to turn left, it seems welcoming afterall, nothing that looks like rabid dogs or anything in sight." << endl;
    cout << "You stumble down the hall, only to fall straight through the floor along with the cruming stone." << endl;
    cout << "You are dowsed in water as you are saved by a frigid pool of water." << endl;
    cout << "You struggle to the surface, everything is dark, but you eventually find your way upward. " << endl;
    cout << "Once you break through the surface, you can see you must've fallen through at least 4 floors. " << endl;
    cout << "You gasp in gratitude that you at least had something to break your fall. " << endl;
    cout << "With a quick gaze around you find the only nearby ledge. A homely ledge with a lovely skeleton, yet you continue onward regardless. " << endl;
    cout << "Definently homely, you decided. I looks so comfortable that it hasn't died in years. " << endl;
    cout << "As you drag yourself onto the ledge you find a satchel filled with 3, clearly not-expired, health potions. " << endl;
    cout << "With a quick word to the long dead, you gratefully take the items." << endl;
    system("CLS");
    
    cout << "You shake the water off your body and turn around yourself, to find where to go next. " << endl;
    cout << "You see a few ledges in the distance, but now you wouldn't be able to reach them in your current condition, and there is no possible way to climb back up. " << endl;
    cout << "Conviently and rather forebodingly, you spy a crook inbetween the rocks that lead further inside the caverns. " << endl;
    cout << "With no other option apparent, you pick yourself up and begin to travel carefully through the crevasse. " << endl;
    cout << "The path is frought with uneven rocks and gravel, so you take your time. " << endl;
    cout << "You hear a creak behind you, and suddenly you begin to consider if taking your time was a poor decision. " << endl;
    cout << "You might be able to run away from whatever monster may be stalking you, or you can prepare yourself for battle. " << endl;
    cout << "Run or fight (r/f)" << endl;
    cin >> run;    //Fight or run
    system("CLS");
    
    if (run == 'r') //Run away from monster
    {
      cout << "You're in no condition to fight, so you pick up your feet and sprint away. " << endl;
      cout << "Twist after twist you run, and before you know it you become lost. " << endl;
      cout << "You find yourself unable to find either your way out or back regardless of anything you try. " << endl;
      cout << "After what must've been days, you collapse spent. You didn't last long without supplies, but you doubt you would've found your way out even with them." << endl;
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
   else //Fight the monster
    {
      cout << "You don't feel comfortable running it what very well could be a maze with a unknown monster chasing after you." << endl;
      cout << "For all I know, they might be friendly, or have a map in the least. " << endl;
      cout << "You prepare yourself, dagger in hand and potions at the ready. " << endl;
      cout << "You watch as the unknown follower, rounds the corner. " << endl;
      cout << "Round, green, and shiny it creeps toward you at a alarming speed. A slime you realize just before you are forced into combat." << endl << endl;
      battle(hero1, villain1); //Battle slime

      //If you survive and the game doesn't exit(1);
      cout << "You survive, if only by the skin of you teeth, stumbling away from the still writhing mass of smile. " << endl;
      cout << "You continue to walk away, you can't imagine finding even more of these green masses. Pressing forward is the most promising option. " << endl;
      cout << "You continue to walk for many minutes, perhaps hours, until you find you next adversary." << endl;
      cout << "A humanoid figure, normal from the shadow cast figure it casts. " << endl;
      cout << "Should you run past it, talk to it. (r/t)" << endl;
      cin >> run;     //Run or talk
      system("CLS");  //Clear screen
      if (run == 'r') //Run past creature
      {
        cout << "You run past, without sparing a glance towards it, or them." << endl;
        cout << "You run until, suddenly the floor collaspes underneath your feet, and you plummet the second time this day. " << endl;
        cout << "You hit the floor hard. " << endl;
        hero1.lose_game(); //Character dies
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
      else //Talk to monster
      {
        cout << "You decided to try to talk the the figure, they look human enough." << endl;
        cout << "You open your mouth ready to speak when you are hit suddenly from behind. " << endl;
        cout << "You wake up much later, tied to an altar. You are sacrificed towards an unnamed god, by unnamed people." << endl;
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
    }
  } 
  else //Right hall
  {
    cout << "Humans, they might know what is going on, you think. Determined, you begin picking your way down the passage. " << endl;
    cout << "You find a purse of potions, this time not expired beyond belief. You pick it up, either to return to its sane owner or to use if you run into trouble." << endl;
    cout << "Suddenly, a figure forms in the gloom, and you are face to face with a ghastly monster." << endl;
    cout << "Its short like a child, yet has wrinkled skin that looks like it has sat in the sun for years on end." << endl;
    cout << "It turns toward you, red eyes gleaming in twisted glee. With a wretched cry it lunges toward you. It seems like it was a strike of luck that you found the dagger." << endl << endl;
    battle(hero1, villain1); //Battle kobolt

    //Run or search
    cout << "You force yourself to turn away from your attacker and begin begin running down the hall. " << endl;
    cout << "You see a small camp coming up soon. Stop and search it or continue to run by? (s/r)" << endl;
    if (run == 'r') //run past camp and try to escape
    {
      cout << "Never! You just want to get out of here, and the camp will clearly just slow you down." << endl;
      cout << "You run threw hall after hall slowing down for nothing." << endl;
      cout << "So fast were you going that you were unable to do a single thing about the second creature that lunged at you with a rock." << endl;
      hero1.lose_game();    //Character death
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
    else //Search camp for supplies
    {
      cout << "There might be something useful you realize past your panic. " << endl;
      cout << "You stop and scour the items. Useless, you think. Your about to give up when you find a recognizable stone." << endl;
      cout << "A return stone. You grab it a smash it onto the ground promptly." << endl;
      cout << "You open your eyes..." << endl;
      cout << "...Drip \n...Drip" << endl;
      cout << "You are in a small stone room shrouded in darkness. You can't remember how you got her, but you find you'd focus on something else." << endl;
      cout << endl << endl << "The end..." << endl<< endl;
      cout << "Enter a letter to end the game." << endl;
      cin >> run;
    }
  }
}

void Riggins(Hero hero1, villain villain1) {}

void Wofford(Hero hero1, villain villain1) {
  string hero_Name;
  string cont;
  int choice = 0;
  cout << "What shall your adventuers name be?: ";
  cin >> hero_Name;
  system("CLS");
  cout << "You wake up, immediately realizing you are on a deserted island, sun bearing down " << endl;
  cout << "on your face. You look to the left, you see many palm tree's swaying in the windy air." << endl;
  cout << "The beach that you have arrived on stretches as far as the eye can see. To the right you see" << endl;
  cout << "the boat you were on, torn to bits and pieces. You also notice multiple bodies along the " << endl;
  cout << "beach. You recognize that they're familiar, almost family-like. And that when it hits you. " << endl;
  cout << "Your name is " << hero_Name << " you were on a boat party with your family for your twenty" << endl;
  cout << "first birthday. You start to grieve thinking, what could have happened? But there's no time for that."<< endl;
  cout << "You realize that the sun is going down, what do you do?" << endl;
  cout << "(1)Find Shelter" << endl;
  cout << "(2)Climb a Tree" << endl;
  cout << "(3)Stay to Grieve" << endl;
  cin >> choice;
  system("CLS");
  if (choice == 1) {
    cout << "You continue on to find shelter, you look around the surrounding area, there is a forest area " << endl;
    cout << "to the east. To the west there are open fields of tall grass and nice oak trees. To the South "<< endl;
    cout << "there are rocky grounds, with a steep mountain behind. You want to decide which way should be the " << endl;
    cout << "best for your survival. You sit there pondering what decisions you could make along the way, until " << endl;
    cout << "you hear a sudden noise behind you. There's a sharp pain in your back and you pass out from the pain." << endl;
    cout << "Please enter a to continue" << endl;
    cin >> cont;
    system("CLS");
    cout << "You wake up, realizing that it has been multiple days since you last remembered. You come to your senses" << endl;
    cout << "and see that there are multiple appearances standing around you. They are screaming at you, speaking English, saying" << endl;
    cout << "that you have entered their territory as a traitor. They hold you as a prisoner, and torture you for your crimes as " << endl;
    cout << "they see fit. You died 4 days later." << endl;
    cout << "Please enter a to continue" << endl;
    cin >> cont;
    exit(1);
  }
  else if (choice == 2)
  {
    cout << "when you climb the tree, you spot a light flickering inside of the forest. What should you do?" << endl;
    cout << "(1)Leave to see what the light is" << endl;
    cout << "(2)Don't go see what the light is" << endl;
    cin >> choice;
    system("CLS");
    if (choice == 1)
    {
      cout << "While on your way to the light, you notice multiple warning signs. Many skulls and sticks were along the path, " << endl;
      cout << "skeletal bones and remains were almost at every turn and bend.And as you continue the light seems to be getting brighter," << endl;
      cout << "almost as if there are multiple sources of light.And that when you arrive.A large set of wooden gates stand before" << endl;
      cout << "you.You see two men standing on guard towers that are on opposite sides of the doors.They start to motion something below " << endl;
      cout << "them and the two doors start to open.As they open there is a large amount of people with bows and arrows.They tell you that " << endl;
      cout << "you do not belong there and that they are taking you in as hostage. To be free once again they tell you that you must defeat" << endl;
      cout << "their leader in a duel.Do you accept? Yes(1) or No(0)." << endl;
      cin >> choice;
      system("CLS");
      if (choice == 1)
      {
          battle(hero1, villain1);
      }
      else if (choice == 0)
      {
        cout << "They look to they're commander in confusion on what to do. The commander nods once, and in an instance you die with an arrow sticking out of your chest" << endl;
        cout << "Please enter a to continue" << endl;
        cin >> cont;
        system("CLS");
      }
    }
    if (choice == 2)
    {
      cout << "You want to decide what would be the best for your survival.You sit there pondering what decisions you could make along the way, until you hear a" << endl;
      cout << "sudden noise behind you.There's a sharp pain in your back and you pass out from the pain." << endl;
      cout << "Please enter a to continue" << endl;
      cin >> cont;
      system("CLS");
    }
  }
  else if (choice == 3)
  {
    cout << "You stay to grieve, and you stand there, looking at the lifeless bodies of" << endl;
    cout << "your family. You eventually realize that multiple hours have passed, and" << endl;
    cout << "that it's the middle of the night. You try to leave to find shelter but you" << endl;
    cout << "get attacked by something in the dark.You die on the spot" << endl;
    cout << "Please enter a to continue" << endl;
    cin >> cont;
    exit(1);
  }
}

void Woodworth(Hero hero1, villain villain1) 
{
  int choice;  //Variable to hold the players choices
  bool alive = true;  //Variable to check is the hero has died or not
  cout << "You regain consciousness in a cave with one very large tree on an "  //Visualization/story
          "island surounded by crystal clear water."  //Visualization/story
       << endl;
  cout << "The lake surrounding the tree seems to be completly clear of fish. "  //Visualization/story
          "The tree in the middle is partialy covered in mushrooms."  //Visualization/story
       << endl;
  cout << "You realize you are very thirsty and could use a drink. Would you "  //Visualization/story
          "like to take a drink (1), Inspect the water(2), Atempt to swim "  //Visualization/story
          "across(3)";  //Visualization/story
  cin >> choice;  //Gets the players descion for what to do

  switch (choice) {  //Uses the variable for this switch statement
  case (1):  //If the user entered one
    cout << endl
         << "You take a drink and feel refreshed you healed to full health!"  //Visualization/story
         << endl;
    hero1.gain_health(100000000);  //Guranteed Heal to full hp
    cout << "You decide to rest a little while." << endl;  //Visualization/story
    cout << "You have almost fallen asleep when " << villain1.getName()  //Visualization/story
         << " jumps out of the water and lands right next to you." << endl;  //Visualization/story
    cout << "You ready your weapon." << endl;  //Visualization/story
  case (2):
    cout << endl
         << "You inspect the water and see there seems to be nothing wrong "  //Visualization/story
            "with it, though you choose to play it safe."  //Visualization/story
         << endl;
    cout << "You take are about to sit down when you hear a noise come from in "  //Visualization/story
            "the water."
         << endl;
    cout << villain1.getName()  //Visualization/story
         << " jumps out of the water and hits you before you can react."  //Visualization/story
         << endl;
    hero1.loss_health(20);  //Causes a free hit on the player
    if (hero1.getHealth() < 0) {  //Checks if that hit killed the player
      cout << "You feel the blow and black out" << endl;  //Visualization/story
      cout << "You died before the fight even started how sad." << endl;  //Visualization/story
    } else {
      cout << "You grab your weapons and prepare to battle." << endl;  //Visualization/story
    }
  case (3):
    cout << "You decide to try to swim to the tree. You swim about halfway "  //Visualization/story
            "there then you hear the Jaws Theme. In a panic you start swimming "  //Visualization/story
            "faster.\n";  //Visualization/story
    cout << "You feel something brush past your left leg. You know for a fact "  //Visualization/story
            "there is still a decent amount of distance between you and the";  //Visualization/story
    cout << "island or the land you came from.\n What do you do? Attempt to "  //Visualization/story
            "swim to the island(1), Try to fight whatever just ran into "  //Visualization/story
            "you(2), Float Very Still(3)";  //Visualization/story
    cin >> choice;  //Gets the players choice

    switch (choice) {  //Uses the players choice to cause the next action
    case (1):
      cout << "You start to swim as fast as you can toward the island.\n"  //Visualization/story
           << "You feel a large amount of teeth sink into your right thigh.";  //Visualization/story
      hero1.loss_health(40);  //Hurts the hero 
      if (hero1.getHealth() < 0) {  //Checks if the hero is dead
        cout << "You are unable to break free from its grip and are dragged "  //Visualization/story
                "down into the depths. You survive for an unreasonable amount "  //Visualization/story
                "of time without oxygen before blacking out. You don't wake "  //Visualization/story
                "back up.";
      } else {  //If the hero isn't dead
        cout << "You break free from its grip but the water rushes into your ";  //Visualization/story
        cout << "wounds but you feel the water healing you.";  //Visualization/story
        hero1.gain_health(10);  //Heals the hero
        cout << "You heal 10 health. Your health is currently "  //Visualization/story
             << hero1.getHealth();  //Shows the player the heroes health
      }
      
      cout << "You start to swim as fast as you can toward the island again. "  //Visualization/story
              "Trying to get away.\n"  //Visualization/story
           << "You feel a large amount of teeth sink into your left thigh.";  //Visualization/story
      hero1.loss_health(40);  //Hurts the hero
      if (hero1.getHealth() < 0) {  //Checks if the hero is dead
        cout << "You are unable to break free from its grip and are dragged "  //Visualization/story
                "down into the depths. You survive for an unreasonable amount "  //Visualization/story
                "of time without oxygen before blacking out. You don't wake "  //Visualization/story
                "back up.";  //Visualization/story
      } else {  //If the hero isn't dead
        cout << "You break free from its grip but the water rushes into your ";  //Visualization/story
        cout << "wounds but you feel the water healing you.";  //Visualization/story
        hero1.gain_health(10);  //Heals the hero
        cout << "You heal 10 health. Your health is currently "  //Visualization/story
             << hero1.getHealth();  //Shows the player the heros health
      }
      
      cout << "You start to swim as fast as you can toward the island for the "  //Visualization/story
              "third time. Trying to get away.\n"  //Visualization/story
           << "You feel a large amount of teeth sink into your right thigh "  //Visualization/story
              "again.";  //Visualization/story
      hero1.loss_health(30);  //Hurts the hero
      if (hero1.getHealth() < 0) {  //Checks if the hero is dead
        cout << "You are unable to break free from its grip and are dragged "  //Visualization/story
                "down into the depths. You survive for an unreasonable amount "  //Visualization/story
                "of time without oxygen before blacking out. You don't wake "  //Visualization/story
                "back up.";  //Visualization/story
      } else {  //If the hero isn't dead
        cout << "You break free from its grip but the water rushes into your ";  //Visualization/story
        cout << "wounds but you feel the water healing you.";  //Visualization/story
        hero1.gain_health(10);  //Heals the hero
        cout << "You heal 10 health. Your health is currently "  //Visualization/story
             << hero1.getHealth();  
        cout << "You succesfully make it to the island and look up to see "  //Visualization/story
             << villain1.getName() << "Standing before you ready to fight.";  //Visualization/story
      }
    case (2):
      cout << "You attempt to fight the shark but soon realize it is a lost "  //Visualization/story
              "cause, but it is too late.\n";  //Humiliation 1
      cout
          << "The shark gets a firm hold and your leg and pulls you down into "  //Visualization/story
             "the deep. It takes you a while to black out though. You drowned.";  //Visualization/story
      hero1.loss_health(100000000);  //Salt on the wound
    case (3):
      cout << "You knew this was a bad idea.";  //Humiliation 2
      cout << "And you choose it anyway so now I get control of your game.";  //Visualization/story
      cout << "How about I just kill you now.";  //Visualization/story
      cout << "Or I could let you get to the island.";  //Visualization/story
      cout << "You obviously need help so how about you just teleport you to "  //Humiliation 3
              "the island.";  //Visualization/story
    }
    system("CLS");

    if (alive){
      cout << "BATTLE BEGIN!!!" << endl;  //Visualization/story

      battle(hero1, villain1);

      cout << "You strike down your foe and move onwards!!!" << endl;  //Visualization/story
      cout << "After enjoying the veiw." << endl;  //Visualization/story
    } else {
      cout << "You died before you even got to the fight good job." << endl;cout << "BATTLE BEGIN!!!" << endl;  //Visualization/story
    }
  }
}

void Rhoten(Hero hero1, villain villain1) {

    dice chance_descript(20); // Creates a dice object to roll the probability of knowing more of the creature.
    Hero buffed_Hero(100, 5, 5, 5);  //Declares the buffed_Hero class object to be changed and used later if the user makes a specific choice.
    int choice;
    bool is_knife = 0;
    cout
        << "Finding just enough change to borrow a horse with saddle, you ride "
        "through an empty and dull grassland with enough sunshine that "
        "could "
        "dehydrate a small lake. The horse, you named Lighter, suddenly "
        "refuses to step another hoove.\nLeaving no other choice, you "
        "decide "
        "to rest on a wall full of moss, which have seemed to attempt to "
        "backflow for more water.\n\n";
    hero1.gain_health(hero1.getHealth() / 2.50); // The hero gains a near-third amount of health from resting.
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
    cout << char(146) << "CK!" << endl << endl;
    system("pause");
    cout << "Silence... All you feel is the blow of the wind. You don't see "
        "anything and don't want to stick around "
        "with the quiet; however, your inclination holds your ground. "
        "Still, "
        "nothing seems to be happening.\n";
    cout << "You cut to your mind and think of three choices:" << endl
        << "1. Pull your melee out \t\t 2. Call out for Lighter \t\t 3. Do nothing\n";
    cout << "You've decided to go with choice #";
    cin >> choice;
    if (choice == 1) {
        cout
            << "\nYou pull your weapon. It rings a tune of keen defense. Nothing "
            "approaches.\n\n";
    }
    else if (choice == 2) {
        cout
            << "\nYou call out your horse's name: \"LIGHTER!\" Although Lighter "
            "is "
            "needed for the resumption of journey, a sense of deplore strikes "
            "through your mind as this could've gave away your unwanted "
            "entry.\n\n";
    }
    else if (choice == 3)
    {
        cout
            << "\nSometimes doing nothing is the best preparation, you thought "
            "to "
            "yourself. A few minutes of your life passes in a dim and ominous "
            "tunnel.\n\n";
    }
    else
    {
        cout << "\nYou've scratched the thoughts out of your head and decided to keep walking forward instead.\n\n";
    }
    system("pause");
    system("CLS");
    cout
        << "A loud neigh comes from the direction your horse ran to. Repulsing "
        "some time to consider your choices, you start sprinting. As you continue to hear the calls from your campanion, strings of dangling moss start to appear. You point your "
        "melee's blade ahead of you. It cuts through some of the moss you encounter as you dash, nearing the new shade of light that gleamed onto your weapon.\n"
        "You've reached the end of the tunnel and step into a gray scale of open space. The breeze seemed to fade away, and you take a moment to look around you.\n"
        "The flooring is filled with dark and crumpled concrete, reflecting "
        "the background of the symbols scattered across it. Some brewing stands are propped outside of the symbols' pattern. You see no sign of your horse. Despite this, you see a "
        "shine out of the corner of your eye. As you turn and walk to it, the bright light forms into a knife. The knife's handle is colored turquoise, with a bright pink giving the "
        "appearance of the blade. It sits on a wooden table with a couple unknown potions positioned around.\n";
    cout << "[Do you want to pick up the knife? 1 for yes, 0 for no]: ";
    cin >> is_knife;
    if (is_knife == 1)
    {
        cout << "\nYou pick up the knife and a rush of energy fills your body. "
            "Your vision, strength, and mobility increased with this new "
            "feeling of vitality!\n\n";
        Hero buffed_Hero(hero1.getHealth(), hero1.getSpeed() + 4, hero1.getStrength() + 6, hero1.getDefense());
    }
    else
    {
        cout << "\nYou decided not to pick up the knife\n\n";
    }
    system("pause");
    cout << "Looking up ahead of you, you see a red, black, and white figure, standing ahead of two doors. It's posture and height is the same as a human's. The pointed claws of the "
        "creature glisten of light grey. A black bag in the shape of an envelope rests on its right thigh with a handle looping around the neck of the bod. A red witch hat covers most "
        "of the fur on its head. You struggle to see the behind of the figure as its black cape blocks the sight. ";
    if (chance_descript.roll() == 17)
    {
        cout << "However, thanks to a book you've read in your journey, you've noticed that the creature is a wickerbeast, a creature with the surface of wicker-like scales with hardly any pupils in their large eyes and horns pointing out from the front and sides of the head. They are known for being cuddly.\n";
    }
    else
    {
        cout << "You cannot recall a species similar to what you see...\n\n";
    }
    system("pause");
    cout << "For a second time, your mind rushes for more choices:\n" << "1. Ask for a name \t 2. Threaten \t 3. Attempt to walk away\n";
    cout << "You decided, in a second, to go with #";
    cin >> choice;

    system("CLS");
    if (choice == 1)
    {
        cout << "\n\"What's your name?\" you shouted.\n The voice that follows from the direction of the creature was as if wind was pushed through a wicker, \"I shall follow. A well placed conversation with your demise is a good choice... My name's Ruby.\" You tell yours.";
        cout << "\n\"You're on a adventure are you? Well I'm sorry, but it must have an ending! And it can't always go your way.\"\n\n";
    }
    else if (choice == 2)
    {
        cout << "\nYou threaten the creature, daring the creature to take a step closer. He does, smiling.\n\n";
    }
    else if (choice == 3)
    {
        cout << "Without saying anything and keeping both eyes away from it, you walk towards the doors behind the creature. However, you are (painfully) shoved by the claws of the creature. You hear a voice coming from the mouth of the creature as if it was pushed through a wicker, \"I'm glad you've made that decision for Ruby.\"\n\n";
    }
    else
    {
        cout << "\nYou open your mouth to communicate, but the creature promptly speaks first.\n";
        cout << "\"No need for the complexity of conversation.\" The voice spoken was as if wind was pushed through a wicker. \"It's a simple as, \'You cannot leave here after what you saw!\' And Ruby's in a hurry.\"\n\n";
    }
    system("pause");
    system("CLS");

    int action;       // Action choice for hero
    int damage;       // Action damage
    int end_game = 0; // variable to enter exit(1);
    bool again = true;  //Variable for while loop to see if someone died yet.

    if (is_knife == 1)
    {
        if (buffed_Hero.getSpeed() >= villain1.getSpeed()) // Find which character attacks first
        {
            while (again) // While a character is still alive.
            {
                cout << "Your health: " << buffed_Hero.getHealth() << endl;
                cout << "Enemy's health: " << villain1.getHealth() << endl << endl;

                cout << "Select your action: \n  1. light attack \t 2. heavy attack \t 3. health potion" << endl;
                cin >> action;
                switch (action) 
                {
                    case (1):
                        damage = buffed_Hero.attack_l();
                        villain1.takeDamage(damage);
                        break;
                    case (2):
                        damage = buffed_Hero.attack_h();
                        villain1.takeDamage(damage);
                        break;
                    case (3):
                        buffed_Hero.h_potion();
                        break;
                }

                damage = villain1.attack();
                buffed_Hero.loss_health(damage);
                cout << endl;

                if (hero1.getHealth() <= 0)//If a character has died
                {
                    again = false; //End battle loop
                }
                if (villain1.getHealth() <= 0)
                {
                    again = false; //End battle loop
                }
            }
        }
        else
        {
            while (again)
            {
                cout << "Your health: " << buffed_Hero.getHealth() << endl;
                cout << "Enemy's health: " << villain1.getHealth() << endl << endl;

                damage = villain1.attack();
                buffed_Hero.loss_health(damage);

                cout << "Select your action: \n  1. light attack \t 2. heavy attack \t 3. health potion" << endl;
                cin >> action;
                switch (action)
                {
                case (1):
                    damage = buffed_Hero.attack_l();
                    villain1.takeDamage(damage);
                    break;
                case (2):
                    damage = buffed_Hero.attack_h();
                    villain1.takeDamage(damage);
                    break;
                case (3):
                    buffed_Hero.h_potion();
                    break;
                }

                cout << endl;

                if (hero1.getHealth() <= 0)//If a character has died
                {
                    again = false; //End battle loop
                }
                if (villain1.getHealth() <= 0)
                {
                    again = false; //End battle loop
                }
            }
        }
        if (buffed_Hero.getHealth() > villain1.getHealth())
        {
            cout << "The enemy falls." << endl;
        }
        else
        {
            while (end_game != 1) // Techniquely an infinite loop, but it ends when the correct item is entered because it closes down the program period.
            {
                cout << "Your eyes close for the final time. Enter 1 to close the program." << endl;
                cin >> end_game;
                if (end_game == 1)
                {
                    exit(1);
                }
            }
        }
        system("pause");
        system("CLS");
    }
    else
    {
        if (hero1.getSpeed() >= villain1.getSpeed()) // Find which character attacks first
        {
            while (again) // While both character are still alive.
            {
                cout << "Your health: " << hero1.getHealth() << endl;
                cout << "Enemy's health: " << villain1.getHealth() << endl << endl;

                cout << "Select your action: \n  1. light attack \t 2. heavy attack \t 3. health potion" << endl;
                cin >> action;
                switch (action)
                {
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

                cout << endl;

                if (hero1.getHealth() <= 0)//If a character has died
                {
                    again = false; //End battle loop
                }
                if (villain1.getHealth() <= 0)
                {
                    again = false; //End battle loop
                }
            }
        }
        else
        {
            while (again)
            {
                cout << "Your health: " << hero1.getHealth() << endl;
                cout << "Enemy's health: " << villain1.getHealth() << endl << endl;

                damage = villain1.attack();
                hero1.loss_health(damage);

                cout << "Select your action: \n  1. light attack \t  2. heavy attack \t 3. health potion" << endl;
                cin >> action;
                switch (action)
                {
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
                cout << endl;

                if (hero1.getHealth() <= 0)//If a character has died
                {
                    again = false; //End battle loop
                }
                if (villain1.getHealth() <= 0)
                {
                    again = false; //End battle loop
                }
            }
        }
        if (villain1.getHealth() <= 0)
        {
            cout << "The enemy falls." << endl;
        }
        else
        {
            while (end_game != 1) // Techniquely an infinite loop, but it ends when the correct item is entered because it closes down the program period.
            {
                cout << "Your eyes close for the final time. Enter 1 to close the program." << endl;
                cin >> end_game;
                if (end_game == 1)
                {
                    exit(1);
                }
            }
        }
        system("pause");
        system("CLS");
    }
    cout << "You've taken Ruby down, or so for a bit. As you took a moment to breathe and lick your wounds, it took you a minute to notice he was mixing a potion under his cape.\n";
    cout << "Your entire body rushes to stop him, but it's too late. Ruby throws a potion among your ground and it hurts to the excent of paralization. Emitting laughs from the coughing, Ruby utters \"I would pity one, but rushing into somebody else's path will always pay a life for a price\"\n";
    system("pause");
    if (is_knife == 1)
    {
        cout << "He reaches and takes the purple knife from your inventory, weaking your muscles as it was pulled away from your stretch.\n";
        cout << "\"You know, this was engineered by a robot, specifically designed to increase the gore left of the victim. And you didn't think of using it? Too bad, it wouldn't have harmed me!\"\n\n";
    }
    else
    {
        cout << "He hobbles over to the wooden table with the purple knife on it. Then, without hesitation, he grabs the knife and bundles himself towards you.\n\n";
    }

    cout << "He lifts the knife...\n";
    system("pause");
    system("CLS");
    cout << "____________    ____       ___       ____          _         ____      ___       ________       \n";
    cout << "------------     ----      ---      ----          ---        -----     ---      ----------      \n";
    cout << "    |||           ----     ---     ----          -- --       ------    ---     ---              \n";
    cout << "    |||            ----    ---    ----          --   --      -------   ---    ---    -----      \n";
    cout << "    |||             ---- - --- - ----          ---------     ---  ---  ---   ----     ---       \n";
    cout << "    |||              ----------------         -----------    ---   --- ---    ---     --        \n";
    cout << "    |||               ---  ---  ---          --         --   ---    ------     --------         \n\n\n";
    system("pause");
    system("CLS");

    cout << "An arrow... It had struck Ruby right in the head through the back of his witch hat and depresses his muscles to react in his dying stand. He falls next to you. Looking around for a moment for any sign of a person, you gather through in carcass's purse. Two health potions!\n";
    hero1.gain_potion();
    hero1.gain_potion();
    cout << "You sit to get up, but fall back down in agony. Laying on the uncomfortable concrete, you hope for your body to regenerate what was left of you..." << endl;
    system("pause");
    cout << "And just like that, you feel... better?! Jumping to your feet, you play around with your muscles to feel the fully recovered parts.";
    hero1.gain_health(99 * 10000);
    cout << "You look at the shiny violet knife and reach down to pick it up, but it was already swiped from the floor. While slowly stepping away from you, an elf with a dark color of... skin stares at your appearance while you do the same. He wore a white piece of armor that would like a piece of cloth from far away, with the same colored pants and a tan cloak. You've taken noticed that the pair of arrows in his pack is the same as the one in Ruby's head. At the same time, the elf seemed to relax as well, still having a flare of destruction in his eyes. \n";
    cout << "He raises the knife, pointing at his face, then says \"Mind if I take this?\" His voice sounding like a drumstick was hitting the inside of a bell." << endl;
    cout << "You open your mouth to reply, but the elf shoves the purple weapon in his pack in a matter of seconds.\n";
    cout << "\"You may have stumbled upon his work, but he did the same to my friend. We're not classified as enemies right now. Therefore, you should get going because your horse is waiting for you.\" ";
    cout << "You nod to his understandment and without asking his name, you walk towards the two doors. You can finally start finishing your journey\n";
    system("pause");
}

void Son(Hero hero1, villain villain1) {
    int choice = 0;
    int atktype = 0;
    int damage = 0;
    int run = 0;
    dice struggle(100);
    int strugres = 0;
    int hpH = hero1.getHealth();
    int hpV = villain1.getHealth();
    int atkV;

    /* STORY  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * * */
    cout << "It's a dark night, and you stumble upon a humid, kind-of gross "
            "swamp."
         << endl; // story
    cout << "While you keep walking, you come across a very dark green patch "
            "of.. water?"
         << endl; // story
    cout << "The 'water' slowly, slooowly starts to grow..." << endl
         << endl; // story
    cout << "As it grows, you realize that it's.. alive!?" << endl
         << "The weird lake thing "
            "groans and bubbles, and while you can't see it's face,"
         << endl
         << "you feel "
            "like you've disturbed it, somehow."
         << endl
         << endl; // story
    cout << "The thing rises to its full height, and it appears to be a sort "
            "of slime monster."
         << endl
         << "But compared to normal slimes, it's super huge! And super "
            "angry..."
         << endl
         << endl; // story
    cout
        << "You can feel the huge slime's anger radiating off of it. What will "
           "you do?"
        << endl
        << endl; // story
    /* STORY  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
     * * */

    /* WHILE HERO IS ALIVE  * * * * * * * * * * * * * * * * * * * * * * * * * *
     * * * * * * * * * */
    while (hero1.getHealth() >= 0) { // while the heros health is not at 0

        cout << "1. Attack \t 2. Use Potion \t \t 3. Check Stats \t 4. Run"
            << endl; // choices

        cin >> choice;

        switch (choice) { // switch statement based on user choices
        case 1:           // attack
            system("CLS");
            cout << "What will you do? " << endl << endl;
            cout << "Sludge's HP: " << villain1.getHealth() << endl; //print sludge health
            cout << "Your HP: " << hero1.getHealth() << endl << endl; //print your health
            cout << "1. Heavy Attack \t 2. Light Attack" << endl; // ask for heavy or light atk

            cin >> atktype;
            if (atktype == 1)            // if they choose heavy
                damage = hero1.attack_h(); // run heavy
            else                         // anything else will be light
                damage = hero1.attack_l(); // run light
            cout << endl << "You do " << damage << " damage." << endl; //print dmg

            villain1.takeDamage(damage); //send villain takedamage
            cout << "Sludge's HP: " << villain1.getHealth() << endl;

            system("pause");
            break;
        case 2:             // if they want to use a potion
            system("CLS");
            hero1.h_potion(); // call health potion hero class
            cout << "You used a potion!" << endl << "You now have " << hero1.getHealth() << " health." << endl; //print health they have
            system("pause");
            break;
        case 3: // if they want to check their stats
            system("CLS");
            cout << "YOUR STATS: " << endl;
            cout << "Spd: " << hero1.getSpeed() << "\t Def: " << hero1.getDefense() << endl;
            cout << "Str: " << hero1.getStrength() << "\t HP: " << hero1.getHealth() << endl << endl; // print all stats

            cout << "SLUDGE STATS: " << endl;
            cout << "Spd: " << villain1.getSpeed() << "\t Def: " << villain1.getDefense() << endl;
            cout << "Str: " << villain1.getStrength() << "\t HP: " << villain1.getHealth() << endl; // print all stats
            system("pause");
            break;
        case 4: // if they want to run away
            system("CLS");
            cout << "The slime quickly reaches out to you, before you can even pick up your feet." << endl;
            cout << "It grabs you by the legs! Do you try to escape? " << endl << endl;            // the slime gets them
            cout << "1. Yes \t 2. No" << endl; // if they try to escape
            cin >> run;
            if (run == 1) { //

                strugres = struggle.roll();

                cout << endl << "Roll above an 80 out of 100 to escape." << endl;
                cout << "You rolled a " << strugres << "." << endl;

                if (strugres <= 80) {
                    cout << endl << "You escape from it's grip, but you can't run from it." << endl;
                    cout << "You can either try to escape again, fight against it, or succumb to the slime..." << endl;
                }
                else {
                    cout << "You successfully escape!" << endl << endl;
                    exit(0);
                }
            }
            else {
                cout << endl << "You are slowly eaten by the sludge..." << endl;
                hero1.loss_health(hero1.getHealth());
                
            }
            system("pause");
            break;
        }
        system("CLS");
        cout << endl << endl << "Sludge's turn!" << endl;//sludges turn to attack

        atkV = villain1.attack(); //assign a variable to their attack
        hero1.loss_health(atkV); //hero loses health 
        cout << endl << "Your HP: " << hero1.getHealth() << endl; //print health
        cout << "Sludge's HP: " << villain1.getHealth() << endl << endl; //print health
        system("pause");
        if (hero1.getHealth() <= 0) { //if the heros health is below 0
            hero1.lose_game(); //they lose the game
        }
        if (villain1.getHealth() <= 0) { //if the villains health is below 0
            system("CLS");

            cout << "The slime grows bigger, bigger, and bigger..." << endl;
            cout << "Until it explodes, slimy debris raining around the swamp." << endl;
            cout << "Some of the leftover slime falls onto you. You take a bit of damage." << endl << endl;
            hero1.loss_health(2);
            cout << "Your HP: " << hero1.getHealth() << endl;
            if (hero1.getHealth() <= 0) {
                cout << "Wow, you really died?";
                hero1.lose_game();
            }
            cout << endl;
            cout << "Now that you have defeated the sludge, you can finally leave...." << endl;

        }
        
  }
}

void Vincent(Hero hero1, villain villain1, int turnCounter) 
{
    turnCounter = 0;
    char decision = 'Y';//declares decision

    cout << "You see yourself in a cauldera crisscrossed with bridges of brimstone." << endl  << "You remember why you are here, if this volcano erupts an entire village will die a fiery death." << endl;
    cout << "You hear the gurgling of a nearby lava flow, do you want to go closer?(Y or N) ";
    cin >> decision;//bring in the decision they made

    if (decision == 'Y')
    {//if they answered y it runs
      hero1.true_damage_loss(15);//makes the hero take damage 
      cout << "The heat from the lava burns you as you approach" << endl << "your health is now " << hero1.getHealth();
    } 
    else 
    {
      cout << "You keep walking and go deeper in the volcano";
    }

    cout << "A roar explodes from the shore of the lava at the center of the cauldera as the beast you have come to slay,a massive obsidion golem, sprints at you." << endl;
    cout << "Do you want to charge it?(Y/N)";
    cin >> decision;

    if (decision == 'Y') //if they answer y they do a heavy attack, the villain attacks,  and the turn counter goes up
    {
      hero1.attack_h();
      villain1.attack();
      turnCounter += 1;
    }

    else //they do a light attack instead of a heavy attack other than that same as the if
    {
      hero1.attack_l();
      villain1.attack(); 
      turnCounter += 1;
    }

    cout << "The villain's health is now " << villain1.getHealth() << " HP" << endl;//says the villains health
    cout << "Your health is now " << hero1.getHealth() << " HP" << endl;//says the hero health

    while (turnCounter <= 5) //if the number of turns is less than 9 then it runs
    {
      if (turnCounter == 5 && villain1.getHealth() == villain1.getHealth() * .5) //if they are still alive after 8 turns of combat but they drop the villains health below 50% it runs
      {
        cout << "You have failed, the world turns to a mix of heat and agony as the volcano erupts around you, but it is not all in vain as you gaze to the heavens you see ghostly maidens on winged steads descending towards you to guide you to the afterlife";
      }

      else if  (turnCounter == 5 && villain1.getHealth() > 50) // if they last 8 turns but the villain has more than 50% health runs
      {
        cout << "You have failed the village and doomed them and yourself to a painful death, and yourself and family name to shame. Hopefully both the village and your family honor can be repaired after your failure";
      }

      if (hero1.getHealth() == 0)// if they die it runs
      {
        cout << "You have failed the village and doomed them and yourself to a painful death, and yourself and family name to shame. Hopefully both the village and your family honor can be repaired after your failure"; 
      }

      battle(hero1, villain1);//calls the battle function(Thanks Rylie)

      ++turnCounter;//increments turn counter

      if (villain1.getHealth() <= 0 && turnCounter < 9) //if they win it runs
      {
        cout << "You did it! The volcano begins to die down as the beasts head is lopped off by your sword The village is saved, you will be handsomely rewarded";
        hero1.gain_potion(); //gives the hero a potion as a reward
        hero1.gain_health(200);//regens the hero's health 200 points
      }                        
    }
  }

void Wells(Hero hero1, villain villain1) 
{
    int heroAttackType;  //The hero's options for their turn
    int numPotions = 3;  //Creating the number of potions that the hero has
    float damage;   //A variable to hold the damage
    bool cont = 1;  //A bool to continue the game
    int heroTurn;   //The hero's turn
    int villainTurn;  //The villain's turn

    cout << "It is a beautiful, quiet day on planet Earth, and you are out enjoying the sunshine, and you decide to take a swim."; //Story time
    cout << "You have a nice swim in a calm, peaceful river, and it is uneventful. You are on your way home when you happen upon an evil being. It's Adam Vincent!!" << endl; //Story time

    system("Pause");
    system("CLS");  //Clearing the screen

    cout << "Dramatic Swoosh......" << endl;  //Funny

    system("Pause");
    system("CLS");  //Clearing the screen

    cout << "Adam - 'Give me your lunch money, nerd!'" << endl;  //Story time

    system("Pause");
    system("CLS");  //Clearing the screen

    cout << "Dramatic Swoosh......" << endl;  //Funny

    system("Pause");
    system("CLS");  //Clearing the screen

    cout << "Your Hp: " << hero1.getHealth() << endl;  //Telling the user the hero's hp
    cout << "Adam Hp: " << villain1.getHealth() << endl << endl << endl;  //Telling the user the villain's hp

    if (hero1.getSpeed() > villain1.getSpeed())   //If the hero goes first
    {
        heroTurn = 2;
        villainTurn = 1;
        while (cont)   //This will allow the game to go until someone dies
        {
            while (heroTurn == 2)  //The hero's turn
            {
                cout << "Would you like to heavy attack(1), which would deal a base of 25 damage to yourself, or light attack(2), which does nothing to you, or use a health potion(3): ";  //Asking the user what they want to do
                cin >> heroAttackType;

                system("Pause");
                system("CLS");  //Clearing the screen

                if (heroAttackType == 1)  //If the hero chooses the first option
                {
                    damage = hero1.attack_h();  //Using a member function from the hero class to get damage
                    hero1.true_damage_loss(25);  //A consequence for using a heavy attack, meant to deter the user from using it
                    villain1.takeDamage(damage);  //Dealing damage to the villain

                    cout << "You did " << damage << " damage." << endl << endl;  //Telling the user how much damage they did
                    cout << "Your new health after the base damage is: " << hero1.getHealth() << " hp." << endl;  //Telling the user their new health after the consequence
                    cout << "Adam's health after you attack is: " << villain1.getHealth() << " hp." << endl;  //Telling the user the villain's new health after the attack

                    system("Pause");
                    system("CLS");  //Clearing the screen

                    if (villain1.getHealth() <= 0)  //If the villain dies
                    {
                        cout << "YOU WIN!!! THANKS FOR PLAYING!!!" << endl << endl;  //Telling the user that they won
                        heroTurn = 1;
                        villainTurn = 1;
                        cont = 0;
                    }
                    else if (hero1.getHealth() <= 0)  //If the hero dies
                    {
                        cout << "YOU LOSE";  //Telling the user that they lost

                        system("Pause");
                        system("CLS");  //Clearing the screen

                        cout << "GAME OVER";  //GAME OVER
                        heroTurn = 1;
                        villainTurn = 1;
                        cont = 0;
                    }
                    else  //If no one dies
                    {
                        cout << "NEXT ROUND" << endl << endl;  //Telling the user that we are moving to the next round
                        cout << "Your Hp: " << hero1.getHealth() << endl;  //Telling the user their hp
                        cout << "Adam Hp: " << villain1.getHealth() << endl << endl << endl;  //Telling the user the villain's hp

                        system("Pause");
                        system("CLS");  //Clearing the screen

                        heroTurn = 1;
                        villainTurn = 2;
                    }
                }
                else if (heroAttackType == 2)  //If the hero selects the second option
                {
                    damage = hero1.attack_l();  //Setting damage using a member function
                    villain1.takeDamage(damage);  //Having the villain take damage

                    cout << "You did " << damage << " damage." << endl << endl;  //Telling the user how much damage they did
                    cout << "Adam's health after you attack is: " << villain1.getHealth() << " hp." << endl;  //Telling th user the villain's health

                    system("Pause");
                    system("CLS");  //Clearing the screen

                    heroTurn = 1;
                    villainTurn = 2;
                }
                else if (heroAttackType == 3)  //If the user selects the third option
                {
                    if (numPotions <= 0)  //If the user doesn't have any potions left
                    {
                        cout << "You don't have any potions left. Your turn is now over." << endl;  //Telling the user that they don't have any potions left

                        system("Pause");
                        system("CLS");  //Clearing the screen
                    }
                    else  //If the user has potions left
                    {
                        --numPotions;  //Subtracting from the number of potions
                        hero1.h_potion();  //Calling a member function to use a potion
                        cout << "You have " << numPotions << " health potion(s) left, and your new HP is " << hero1.getHealth() << " hp." << endl;  //Telling the user how many potions they have left

                        system("Pause");
                        system("CLS");  //Clearing the screen
                    }

                    heroTurn = 1;
                    villainTurn = 2;
                }
                else  //If the user enters something invalid
                {
                    cout << "Invalid Attack Type! You Forfeit Your Turn And Adam Attacks!" << endl;  //Telling the user that they entered something invalid, and they forfeit their turn

                    system("Pause");
                    system("CLS");  //Clearing the screen

                    heroTurn = 1;
                    villainTurn = 2;
                }
            }

            damage = 0;

            while (villainTurn == 2)  //Villain's turn
            {
                damage = villain1.attack();  //Setting damage using a member function
                hero1.loss_health(damage);  //Taking health from the hero

                cout << "Your health is: " << hero1.getHealth() << " hp." << endl;  //Telling the user their hp

                system("Pause");
                system("CLS");  //Clearing the screen

                if (villain1.getHealth() <= 0)  //If the villain dies
                {
                    cout << "YOU WIN!!! THANKS FOR PLAYING!!!" << endl << endl;  //Telling the user that they won
                    heroTurn = 1;
                    villainTurn = 1;
                    cont = 0;
                }
                else if (hero1.getHealth() <= 0)  //If the hero dies
                {
                    cout << "YOU LOSE";

                    system("Pause");
                    system("CLS");

                    cout << "GAME OVER";
                    heroTurn = 1;
                    villainTurn = 1;
                    cont = 0;
                }
                else  //If no one dies
                {
                    cout << "NEXT ROUND" << endl << endl;
                    cout << "Your Hp: " << hero1.getHealth() << endl;
                    cout << "Adam Hp: " << villain1.getHealth() << endl << endl << endl;

                    system("Pause");
                    system("CLS");

                    heroTurn = 2;
                    villainTurn = 1;
                    cont = 1;
                }
            }
        }
    }

    if (hero1.getSpeed() < villain1.getSpeed())  //If the villain goes first. Everything is the same as when the hero goes first, except that the villain attacks first.
    {
        villainTurn = 2;
        heroTurn = 1;
        while (cont)
        {
            while (heroTurn == 2)
            {
                cout << "Would you like to heavy attack(1), which would deal a base of 25 damage to yourself, or light attack(2), which does nothing to you, or use a health potion(3): ";
                cin >> heroAttackType;

                system("Pause");
                system("CLS");

                if (heroAttackType == 1)
                {
                    damage = hero1.attack_h();
                    hero1.true_damage_loss(25);
                    villain1.takeDamage(damage);

                    cout << "You did " << damage << " damage." << endl << endl;
                    cout << "Your new health after the base damage is: " << hero1.getHealth() << " hp." << endl;
                    cout << "Adam's health after you attack is: " << villain1.getHealth() << " hp." << endl;

                    system("Pause");
                    system("CLS");

                    if (villain1.getHealth() <= 0)
                    {
                        cout << "YOU WIN!!! THANKS FOR PLAYING!!!" << endl << endl;

                        system("Pause");
                        system("CLS");

                        heroTurn = 1;
                        villainTurn = 1;
                        cont = 0;
                    }
                    else if (hero1.getHealth() <= 0)
                    {
                        cout << "YOU LOSE";

                        system("Pause");
                        system("CLS");

                        cout << "GAME OVER";
                        heroTurn = 1;
                        villainTurn = 1;
                        cont = 0;
                    }
                    else
                    {
                        cout << "NEXT ROUND" << endl << endl;
                        cout << "Your Hp: " << hero1.getHealth() << endl;
                        cout << "Adam Hp: " << villain1.getHealth() << endl << endl << endl;

                        system("Pause");
                        system("CLS");

                        heroTurn = 1;
                        villainTurn = 2;
                    }
                }
                else if (heroAttackType == 2)
                {
                    damage = hero1.attack_l();
                    villain1.takeDamage(damage);

                    cout << "You did " << damage << " damage." << endl << endl;
                    cout << "Adam's health after you attack is: " << villain1.getHealth() << " hp." << endl;

                    system("Pause");
                    system("CLS");

                    heroTurn = 1;
                    villainTurn = 2;
                }
                else if (heroAttackType == 3)
                {
                    if (numPotions <= 0)
                    {
                        cout << "You don't have any potions left. Your turn is now over." << endl;
                    }
                    else
                    {
                        --numPotions;
                        hero1.h_potion();
                        cout << "You have " << numPotions << " health potion(s) left, and your new HP is " << hero1.getHealth() << " hp." << endl;
                    }

                    system("Pause");
                    system("CLS");

                    heroTurn = 1;
                    villainTurn = 2;
                }
                else
                {
                    cout << "Invalid Attack Type! You Forfeit Your Turn And Adam Attacks!" << endl;

                    system("Pause");
                    system("CLS");

                    heroTurn = 1;
                    villainTurn = 2;
                }
            }

            damage = 0;

            while (villainTurn == 2)
            {
                damage = villain1.attack();
                hero1.loss_health(damage);

                cout << "Your health is: " << hero1.getHealth() << " hp." << endl;

                system("Pause");
                system("CLS");

                if (villain1.getHealth() <= 0)
                {
                    cout << "YOU WIN!!! THANKS FOR PLAYING!!!" << endl << endl;

                    heroTurn = 1;
                    villainTurn = 1;
                    cont = 0;
                }
                else if (hero1.getHealth() <= 0)
                {
                    cout << "YOU LOSE";

                    system("Pause");
                    system("CLS");

                    cout << "GAME OVER";

                    heroTurn = 1;
                    villainTurn = 1;
                    cont = 0;
                }
                else
                {
                    cout << "NEXT ROUND" << endl << endl;
                    cout << "Your Hp: " << hero1.getHealth() << endl;
                    cout << "Adam Hp: " << villain1.getHealth() << endl << endl << endl;

                    system("Pause");
                    system("CLS");

                    heroTurn = 2;
                    villainTurn = 1;
                    cont = 1;
                }
            }
        }
    }
}

void Garrelts(Hero hero1, villain villain1) 
{
  
}

void battle(Hero hero1, villain villain1) 
{
// Variables
int action;       // Action choice for hero
int damage;       // Action damage
int end_game = 0; // variable to enter exit(1);
bool again = true;//Variable for while loop to see if someone died yet

  if (hero1.getSpeed() >= villain1.getSpeed()) //Find which character attacks first (H or V)
  {
    while (again) //While a character lives
    {
      cout << "Your health: " << hero1.getHealth() << endl;               //Present Hero health
      cout << "Enemy's health: " << villain1.getHealth() << endl << endl; //Present villain health
      cout << "Select your action: \n  1. light attack \n  2. heavy attack \n  3. health potion" << endl; //List battle options
      cin >> action; //Read in action
      system("CLS"); //Clear screen for ease of reading it
      
      switch (action) //Use read in action and call the appropiate action
      {
      case (1): //Light attack
          damage = hero1.attack_l();   //Find light attack damage
          villain1.takeDamage(damage); //Decrease villain health + state villain health lost
          break; //Break out
      case (2):
          damage = hero1.attack_h();   //Heavy attack
          villain1.takeDamage(damage); //villain loose health
          break;
      case (3):
          hero1.h_potion(); //Heal hero with health potion
          break;
      }
  
      damage = villain1.attack(); //Find villain's damage
      hero1.loss_health(damage);  //Take villain damage and decrease hero health
      cout << endl; //Space for ease of reading
  
      if (hero1.getHealth() <= 0 || villain1.getHealth() <= 0) //If a character has died
      {
          again = false; //End battle loop
      }
    }
  }
  else //Villain attacks first
  {
    while (again) //Battle loop until a death
    {
      cout << "Your health: " << hero1.getHealth() << endl; //State current health status
      cout << "Enemy's health: " << villain1.getHealth() << endl << endl;

      damage = villain1.attack(); //Villain deals damage
      hero1.loss_health(damage);  //Hero takes damage

      cout << "Select your action: \n  1. light attack \n  2. heavy attack\n 3. health potion" << endl; //List options
      cin >> action; //Read in action
      system("CLS"); //Clear screen
      switch (action) //Find and call correct action
      {
      case (1):
          damage = hero1.attack_l();  //Light attack
          villain1.takeDamage(damage);
          break;
      case (2):
          damage = hero1.attack_h(); //Heavy attack
          villain1.takeDamage(damage);
          break;
      case (3):
          hero1.h_potion(); //Health potion
          break;
      }
      if (hero1.getHealth() <= 0 || villain1.getHealth() <= 0) //If a character dies
      {
          again = false; //End battle loop
      }
    }
  }
  if (hero1.getHealth() > villain1.getHealth()) //If villain died
  {
      cout << "The villain dies." << endl; //state that the villain died
  }
  else //Hero died
  {
    while (end_game != 1) //Techniquely an infinite loop, but it ends when the correct item is entered because it closes down the program period.
    {
      cout << "Your eyes close for the final time. Enter 1 to close the program." << endl; //State death and instructions
      cin >> end_game; //Read in character to end program
      if (end_game == 1) //When you enter correctly exit program
      {
        exit(1); //Exit program
      }
    }
  }
  system("CLS"); //Clear battle screen 
}

//A function to animate outputed text provided by yours truely :) - Landen M.
//Does not work in replit
//void aniOut(string output)
//{
//    int length = output.length();
//
//    for (int i = 0; i < length; ++i) {
//        cout << output[i];
//        Sleep(20);
//    }
//
//}