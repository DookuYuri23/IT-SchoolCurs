#include <iostream>
#include <vector>

using namespace std;

int main() {

	int* int_ptr{nullptr};
	double* double_ptr{nullptr};
	char* char_ptr{nullptr};
	string* string_ptr{nullptr};



	int* int_ptr{};
	double number{ 100.7 };
	int num{ 10 };


	int_ptr = &num;//OK
	int_ptr = &number;// COMPILER ERROR

	int_ptr = nullptr;
	cout << num;
	cout << sizeof num;
	cout << &num;

	double h_temp{ 100.5 };
	double l_temp{ 30.2 };
	double* temp_ptr;
	temp_ptr = &h_temp;
	temp + ptr = &l_temp;
}