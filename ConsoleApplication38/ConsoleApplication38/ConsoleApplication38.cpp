#include <iostream>
#include <fstream>
#include <memory>

//Abstract class
class Animal {
public:
	virtual void sound() = 0;//pure virutal function
	virtual ~Animal() {}

	void eat() {              //concrete method(with implementation)

		std::cout << "manca" << std::endl;


	}





};
//derived class Dog
class Dog :public Animal {
public:
	void sound()override {
		std::cout << "HAM HAM" << std::endl;


	}

};

class Cat :public Animal {
public:
	void sound()override {
		std::cout << "MEOW" << std::endl;

	}


};

int main() {

	Dog dog;
	dog.sound();
	dog.eat();


	Cat cat;
	cat.sound();
	cat.eat();


	
	return 0;
}

