//here are all methods of classes

#include "stdafx.h"
#include <iostream>
#include "items.h"
#include "char.h"
#include <string>

using namespace std;

//Characters below //konstruktor
pope::Character::Character(int hitpoints, int mana, int strenght, int stamina, int agility, int intelligence, int level, int experience, int age, int points, int gold,
	string name, string title, string rank, string country, string profession) {
	
	//ints //this-> czyli zmienna o danej nazwie nalezaca do tej klasy (w tym wypadku Character) przyjmie wartosc zmiennej hitpoints ktora przyjdzie do funkcji (w tym wypadku wartosc tej zmiennej przychodzi z poczatkowej deklaracji konstrutora w pliku char.h)
	this->hitpoints = hitpoints;
	this->mana = mana;
	this->strenght = strenght;
	this->stamina = stamina;
	this->agility = agility;
	this->intelligence = intelligence;
	this->level = level;
	this->experience = experience;
	this->age = age;
	this->points = points;
	this->gold = gold;

	//strings
	this->name = name;
	this->title = title;
	this->rank = rank;
	this->country = country;
	this->profession = profession;
}

pope::Cardinal::Cardinal(int hitpoints, int mana, int strenght, int stamina, int agility, int intelligence, int level, int experience, int age, int points, int gold,
	string name, string title, string rank, string country, string profession)
	:Character(hitpoints, mana, strenght, stamina, agility, intelligence, level, experience, age, points, gold, name, title, rank, country, profession) {
	//i ostatni mechanizm dziedziczenia, :Character - dziedziczy sposob przypisania zmiennych z konstruktora 'Character' :na przykladzie
	/*
	this->hitpoints = hitpoints; - linijka z kodu powyrzej. w tej oto funkcji, this odnosi sie do zmiennej hitpoints z klasy Cardinal ktora zostala odziedziczona z klasy Character ...
	co wiecej to ze :Character(.....) zawiera nazwy zmiennych i ich typy, kolejnosc nazw nie ma znaczenia, jedynie kolejnosc typow. np. (int, int, string, string)
	mozemy zapisac tak: (liczba1, liczba2, chuj1, chuj2) lub (liczba2, liczba1, ....) pod warunkiem ze takie zmiennej znajduja sie w klasie do ktorej chcemy jej je przypisac
	w tym wypadku jest to klasa Cardinal.
	*/
}

int pope::Cardinal::attack() {
	int damage;
	damage = strenght;

	return damage;
}

void pope::Cardinal::cast() {

}

void pope::Cardinal::dodge() {

}

void pope::Cardinal::block() {

}

void pope::Cardinal::gain_exp() {

}

void pope::Cardinal::lvl_up() {

}

void pope::Cardinal::display() {
	cout << "Statystyki twojej postaci:" << endl;
	cout << "Imie: " << name << endl;
	cout << "Punkty Zycia: " << hitpoints << endl;
	cout << "Mana: " << mana << endl;
	cout << "Sila: " << strenght << endl;
	cout << "Zrecznosc: " << agility << endl;
	cout << "Inteligencja: " << intelligence << endl;
	cout << "Poziom Postaci: " << level << endl;
	cout << "Doswiadczenie: " << experience <<"/"<< experience << endl;
}

void pope::Cardinal::death() {
	cout << "Game Over" << endl;
}

pope::Cardinal::~Cardinal() {
	//delete
}

pope::Monk::Monk(int hitpoints, int mana, int strenght, int stamina, int agility, int intelligence, int level, int experience, int age, int points, int gold,
	string name, string title, string rank, string country, string profession)
	:Character(hitpoints, mana, strenght, stamina, agility, intelligence, level, experience, age, points, gold, name, title, rank, country, profession) {	
}

pope::Saint::Saint(int hitpoints, int mana, int strenght, int stamina, int agility, int intelligence, int level, int experience, int age, int points, int gold,
	string name, string title, string rank, string country, string profession) 
	:Character(hitpoints, mana, strenght, stamina, agility, intelligence, level, experience, age, points, gold, name, title, rank, country, profession) {
}

pope::Omen::Omen(int hitpoints, int mana, int strenght, int stamina, int agility, int intelligence, int level, int experience, int age, int points, int gold,
	string name, string title, string rank, string country, string profession) 
	:Character(hitpoints, mana, strenght, stamina, agility, intelligence, level, experience, age, points, gold, name, title, rank, country, profession) {
}

//Monsters below
pope::Monster::Monster(int hitpoints, int strenght, int agility, int level, int loot,
	string name) {

	this->hitpoints = hitpoints;
	this->strenght = strenght;
	this->agility = agility;
	this->level = level;
	this->loot = loot;
	this->name = name;
}

pope::Rat::Rat(int hitpoints, int strenght, int agility, int level, int loot, string name) 
	:Monster(hitpoints, strenght, agility, level, loot, name) {
}

int pope::Rat::attack() {
	int damage;

	damage = strenght;

	return damage;
}

int pope::Rat::block() {

	return 0;
}

int pope::Rat::dodge() {

	return 0;
}

void pope::Rat::display() {
	cout << "Twoj przeciwnik: " << name << endl;
	cout << "Poziom przeciwnika: " << level << endl;
}

void pope::Rat::death() {

}

pope::Rat::~Rat() {

}

//weapons below
eq::Weapon::Weapon(string name, int damage, int range, int mana_restore, int hp_restore, int required_lvl, int required_strenght,
	int required_agility, int required_intelligence) {

	this->name = name;
	this->damage = damage;
	this->range = range;
	this->mana_restore = mana_restore;
	this->hp_restore = hp_restore;
	this->required_lvl = required_lvl;
	this->required_strenght = required_strenght;
	this->required_agility = required_agility;
	this->required_intelligence = required_intelligence;
}

eq::Short_Sword::Short_Sword(string name, int damage, int range, int mana_restore, int hp_restore, int required_lvl, int required_strenght,
	int required_agility, int required_intelligence) 
	:Weapon (name, damage, range, mana_restore, hp_restore, required_lvl, required_strenght, required_agility, required_intelligence) {
}

eq::Usable::Usable(string name, int damage, int aoe, int range, int mana_restore, int hp_restore, int required_lvl, int required_intelligence) {

	this->name = name;
	this->damage = damage;
	this->aoe = aoe;
	this->range = range;
	this->mana_restore = mana_restore;
	this->hp_restore = hp_restore;
	this->required_lvl = required_lvl;
	this->required_intelligence = required_intelligence;
}
