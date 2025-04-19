#include <iostream>
#include <string>
#include <vector>
#include <ostream>
#include <cstring>
#include <fstream>
#include <memory>

//abstract classes as interfaces
class I_printable {
	friend std::ostream& operator<<(std::ostream& os, const I_printable& obj);
public:
	virtual void print(std::ostream& os)const = 0;


};

class Account {

	friend std::ostream& operator<<(std::ostream& os, const Account& acc);
public:
	virtual void withdraw(double amount) {
		std::cout << "Account display" << std::endl;

	}
	virtual void print(std::ostream& os)const override {
		os << "Account display";
	}
	virtual ~Account() {
		std::cout << "Destructor Account::withdraw" << std::endl;

	}
};
std::ostream& operator<<(std::ostream& os, const Account& acc) {
	os << "Account display";
	return os;

}

class Checking:public Account {
	friend std::ostream& operator<<(std::ostream& os, const Checking& acc);
public:
	virtual void withdraw(double amount) {
		std::cout << "Account display" << std::endl;

	}
	virtual void print(std::ostream& os)const override {
		os << "Account display";
	}
	virtual ~Checking() {
		std::cout << "Destructor Checking::withdraw" << std::endl;

	}
};







int main() {

	Account a;
	std::cout << a << std::endl;
	Checking c;
	std::cout << c << std::endl;
	Saving s;
	std::cout << s << std::endl;




	return 0;


}





