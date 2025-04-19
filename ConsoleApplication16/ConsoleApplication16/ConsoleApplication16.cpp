
#include <iostream> 
using namespace std;


void sum(int* vec, int l)
{
	int i, suma = 0;
	for (i = 0; i < l; i++)
		suma = suma + *(array + i);
	cout << "suma" << suma;
}
 
int main()
{
	
	int vec[] = { 2, 4, -6, 5, 8, -1 };
	sum(vec, 6);
	return 0;
}
