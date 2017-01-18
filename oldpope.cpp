// Stary Papież.cpp : Defines the entry point for the console application.

#include <iostream>
#include "stdafx.h"
#include "char.h"
#include "items.h"
#include <fstream>

using namespace std;
using namespace pope;
using namespace eq;

//class fstream and it objects for file operations
fstream story, lore, summary;

Usable one, two, three, four, five;
Weapon first, second;

Character *character;
Monster *monster;

Cardinal cardinal;
Rat rat;

void damage (Character *hero, Monster *creature) {
	int hero_damage = hero->attack();
	int monster_damage = creature->attack();

	character->display();
	cout << endl;
	monster->display();

	cout << "\nTwoje obrazenia: " << hero_damage << " Obrazenia potwora: " << monster_damage << endl;
}

int main() {

	character = &cardinal;
	monster = &rat;

	damage(character, monster);

	//cout << "Udalo ci zajebac szczurowi za " << cardinal.attack() << endl;
	//dynamically allocated class
	//Character *ptr = new Cardinal;
	//ptr->death();

	//static classes

	//weapons and usables objects

	/*
	story.open("story.pope", ios::in);
	if (!story.is_open()) {
		std::cout << "Error while loading, try reainstalling game" << std::endl;
		system("PAUSE");
		exit(EXIT_FAILURE);
	}

	lore.open("lore.pope", ios::in);
	if (!story.is_open()) {
		std::cout << "Error while loading, try reainstalling game" << std::endl;
		system("PAUSE");
		exit(EXIT_FAILURE);
	}

	summary.open("summary.pope", ios::in);
	if (!story.is_open()) {
		std::cout << "Error while loading, try reainstalling game" << std::endl;
		system("PAUSE");
		exit(EXIT_FAILURE);
	}
	*/
	system("PAUSE");
    return 0;
}
