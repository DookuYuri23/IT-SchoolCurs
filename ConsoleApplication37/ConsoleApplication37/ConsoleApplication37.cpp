#include <iostream>
#include <string>
#include <vector>
#include <ostream>
#include <cstring>
#include <fstream>
#include <memory>

using namespace std;

class Base {
public:
	virtual ~Base() {
		cout << "Base destructor" << endl;
	}




};

class Derived :public Base {
public:
	~Derived() { //need to be virtual
		std::cout << "Base Derived" << std::endl;
	}

};
int main() {
	Base* ptr = new Derived();

	delete ptr;//this will call derive's destructor if ~Base is virtual,without a virtual destructor deleting a derived class object 
	//derived class object through a base class pointer leads to undefined behavior

	return 0;


}
