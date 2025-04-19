

#include <iostream>



using namespace std;
int main()
{
    int score{ 10 }; //declarare variabila
    //double dscore{ 100.1 };

    int* score_ptr{ nullptr }; //declarare pointer
    score_ptr = &score;//atribuire

    cout << "valoarea:" << score << endl;
    cout << "valoarea lui score_ptr:" << *score_ptr << endl;
    cout << "addresa of score" << &score << endl;



    *score_ptr = 200;
    cout << "valoarea:" << score << endl;
    cout << "valoarea lui score_ptr:" << *score_ptr << endl;
    cout << "address of score" << &score << endl;



    double h{ 10.2 };
    double l{ 2.2 };

    double* t_ptr{ &h };
    cout << *t_ptr << endl;

   

    t_ptr = &l;
    cout << *t_ptr << endl;


    string nume{ "Dorel" };

    string* string_ptr{ &nume };
    cout << *string_ptr<<endl;
    nume = "Alex";
    cout << *string_ptr << endl;
}