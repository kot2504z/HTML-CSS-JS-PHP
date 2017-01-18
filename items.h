//All items classes

#include <iostream>

using namespace std;

namespace eq {
	class Weapon {
	
	protected: // dostepne dla kazdej klasy pochodnej dziedziczacej z klasy Weapon
		string name = "";
		int damage, range, mana_restore, hp_restore, required_lvl, required_strenght, required_agility, required_intelligence;
	
	public: // dostepne dla kazdej funkcji
		Weapon::Weapon(string = "", int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0); //konstruktor - nazwa::nazwa
	};

	class Usable {
	protected:
		string name = "";
		int damage = 0, aoe = 0, range = 0, mana_restore = 0, hp_restore = 0, required_lvl = 0, required_intelligence = 0;
	
	public:
		Usable::Usable(string = "", int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);
	};

	class Short_Sword :public Weapon { // dziedziczy publicznie z klasy Weapon, to znaczy ze uprawnienia zostaja odziedziczone bez zmian, protected zostaje protected, public, public.
	public:
		Short_Sword::Short_Sword(string = "Short Sword", int = 1, int = 0, int = 0, int = 0, int = 1, int = 10, int = 10, int = 0);
	};
}
