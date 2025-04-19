#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> a = { 5,3,1,7,8 };
int main()
{
    //afisare cu auto
    /*for (auto elem : a)
        cout << elem << " ";
    cout << "\n";*/

    for (int i = 0; i < a.size; ++i)
        cout << a[i] << " ";
    return 0;
}

