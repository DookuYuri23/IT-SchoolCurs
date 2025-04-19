#include <iostream>

using namespace std;

class Ceva {
public:
    int min;
    int max;
    int middle;

public:
    Ceva(int min) : min(min), max(INT_MAX), middle((min + max) / 2) {}
   Ceva(int min, int max) : min(min), max(max), middle((min + max) / 2) {}
    Ceva(int min, int max, int middle) : min(min), max(max), middle(middle) {}
    int getMin() const { return min; }
    int getMax() const { return max; }
    int getMiddle() const { return middle; }
};

int main() {
    Ceva tht1(5);
    Ceva tht2(6, 12);
    Ceva tht3(3, 7, 5);

    cout << "THT1 min=" << tht1.getMin() << " max=" << tht1.getMax() << " middle=" << tht1.getMiddle() << endl;
    cout << "THT2 min=" << tht2.getMin() << " max=" << tht2.getMax() << " middle=" << tht2.getMiddle() << endl;
    cout << "THT3 min=" << tht3.getMin() << " max=" << tht3.getMax() << " middle=" << tht3.getMiddle() << endl;

    return 0;
}