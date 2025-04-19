
#include <iostream>  
using namespace std;


void swap(int* x, int* y) {
  
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int x = 8, y = 98;
    cout << &x<<endl;
    cout << &y<<endl;
    cout << "inainte de swap x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "dupa x = " << x << ", y = " << y << endl;
    return 0;
}
