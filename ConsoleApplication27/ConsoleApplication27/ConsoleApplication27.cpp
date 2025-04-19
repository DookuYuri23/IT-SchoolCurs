

#include <iostream>

using namespace std;

class Player {
private:
	string name;
	int health;
	int xp;

public:
	void set_name(string name_val){
		name = name_val;
		}
		string get_name() {
		return name;

	
		}
		void set_health(int health_val) {
			health = health_val;

		}
	Player() {

		name = "None";
		health = 100;
		xp = 3;
	}


};


int main()
{
	Player frank;
	frank.set_name("Frank");
	cout << frank.get_name() << endl;
	
	Player hero("Hero");
	hero.set_name("Hero");

	Player Vivi("Vivian", 100, 12);
	Vivi.set_name("Vivian");

	Player* Geralt = new Player("Geralt", 100, 100);
	Geralt->set_name("Geralt");
	

	delete Geralt;

	return 0;

}



