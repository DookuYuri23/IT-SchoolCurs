
#include <iostream>

class Base {
public:
	void say_hello()const {
		std::cout << "Hello base class object" << std::endl;


	}


};

class Derived :public Base {
public:
	void say_hello()const {
		std::cout << "Hello derived class object" << std::endl;


	}



};

void greetings(const Base& obj) {
	std::cout << "Greetings";
	obj.say_hello();



}

int main() {

	Base b;
	b.say_hello();

	Derived d;
	d.say_hello();

	greetings(b);
	greetings(d);

	Base* ptr = new Derived();//putem sa i atribuim o adresa  a oricarui base object,Derived este un base adress 
	ptr->say_hello();                //static polimorfism

	std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();//smart pointer
	ptr1->say_hello();//dynamic pointer

	delete ptr;
	return 0;
}


class Account {
public:
	void withdraw(double amount) {
		std::cout << "In Account::withdraw" << std::endl;


	}



};

class Checking :public Account {
public:
void withdraw(double amount) {
	std::cout << "In Checking::withdraw" << std::endl;


	}



};

class Trust :public Account {
public:
	virtual void withdraw(double amount) {
		std::cout << "In Trust::draw"<< std::endl;


	}

};

class Saving :public Account {
public:
	virtual void withdraw(double amount) {
		std::cout << "In Saving::withdraw" << std::endl;

	}

};

int main() {

	std::cout << "\n======Pointers======" << std::endl;
	Account* p1 = new Account();
	Account* p2 = new Checking();
	Account* p3 = new Trust();
	Account* p4 = new Saving();

	p1->withdraw(1000);
	p2->withdraw(1000);
	p3->withdraw(1000);
	p4->withdraw(1000);
	
	
	
	delete p1, p2, p3, p4;

	return 0;
}