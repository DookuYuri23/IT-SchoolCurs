

#include <iostream>




using namespace std;

class Nush {
private:
    int x;
    int y;
public:
    void setX(int x) {
        this->x = x;

    }
    void setY(int y) {

        this->y = y;

    }
    void print() {

        cout << x * y;
    }


};
int main()
{
    Nush Obj1;
    int x = 10;
    int y = 20;
    Obj1.setX(x);
    Obj1.setY(y);
    Obj1.print();

    
}

