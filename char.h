//All character classes

#include <iostream>

using namespace std;

namespace pope {
	class Character {

	protected:
		int hitpoints, mana, strenght, stamina, agility, intelligence, level, experience, age, points, gold;
		string name, title, rank, country, profession;

		Character(int = 100, int = 10, int = 10, int = 100, int = 10, int = 10, int = 1, int = 0, int = 30, int = 0, int = 0, 
			string = "", string = "", string = "", string = "", string = "");		
	
	public:
		virtual int attack() = 0;
		virtual void cast() = 0;
		virtual void dodge() = 0;
		virtual void block() = 0;

		virtual void gain_exp() = 0;
		virtual void lvl_up() = 0;

		virtual void display() = 0;
		virtual void death() = 0;
	};

	class Cardinal :public Character {

	public:
		Cardinal(int = 2137, int = 100, int = 10, int = 100, int = 10, int = 10, int = 1, int = 0, int = 30, int = 0, int = 0,
			string = "Jan Pawel II", string = "", string = "", string = "", string = "");
	
		virtual int attack();		
		virtual void cast();
		virtual void dodge();
		virtual void block();

		virtual void gain_exp();
		virtual void lvl_up();

		virtual void display();
		virtual void death();
		virtual ~Cardinal();
	};

	class Monk :public Character {

	public:
		Monk(int = 200, int = 10, int = 10, int = 100, int = 10, int = 10, int = 1, int = 0, int = 30, int = 0, int = 0,
			string = "", string = "", string = "", string = "", string = "");	
		/*
		virtual void create();

		virtual void attack();
		virtual void cast();
		virtual void dodge();
		virtual void block();

		virtual void gain_exp();
		virtual void lvl_up();

		virtual void death();
		~Monk();
		*/
	};

	class Saint :public Character {

	public:
		Saint(int = 100, int = 10, int = 10, int = 100, int = 10, int = 10, int = 1, int = 0, int = 30, int = 0, int = 0,
			string = "", string = "", string = "", string = "", string = "");
		/*
		virtual void create();

		virtual void attack();
		virtual void cast();
		virtual void dodge();
		virtual void block();

		virtual void gain_exp();
		virtual void lvl_up();

		virtual void death();
		~Saint();
		*/
	};

	class Omen :public Character {

	public:
		Omen(int = 100, int = 10, int = 10, int = 100, int = 10, int = 10, int = 1, int = 0, int = 30, int = 0, int = 0,
			string = "", string = "", string = "", string = "", string = "");
		/*
		virtual void create();

		virtual void attack();
		virtual void cast();
		virtual void dodge();
		virtual void block();

		virtual void gain_exp();
		virtual void lvl_up();

		virtual void death();
		~Omen();
		*/
	};

	class Monster {
	
	protected:
		int hitpoints, strenght, agility, level, loot;
		string name;

	public:
		Monster(int = 10, int = 1, int = 1, int = 1, int = 1, string = "");

		virtual int attack() = 0;
		virtual int dodge() = 0;
		virtual int block() = 0;
		
		virtual void display() = 0;
		virtual void death() = 0;
	};

	class Rat :public Monster {
	
	public:
		Rat(int = 10, int = 1, int = 1, int = 1, int = 5, string = "Diabel");		
		
		virtual int attack();
		virtual int dodge();
		virtual int block();

		virtual void display();
		virtual void death();		
		virtual ~Rat();
	};
}
