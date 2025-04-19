
#include <iostream>

using namespace std;



class Engine {
private:
	string type;
public:
	Engine(string type) :type(type) {}

	void start() {
		cout<<"motorul masinii" << type << "porneste" << endl;
	}



};

class Car {
	string model;
	Engine engine;
public:
	Car(string model, string engineType)
		:model(model), engine(engineType) {}

	void drive() {
		std::cout<<"Driving a" << model << "car"<<std::endl;
		engine.start();
	}

};