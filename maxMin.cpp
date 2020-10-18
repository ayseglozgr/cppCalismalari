#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
	if (a >= b && a >= c)
	{
		return a;
	}
	if (b > a && b >= c)
	{
		return b;
	}
	if (c > a && c > b)
	{
		return c;
	}
	
}
int main()
{
	int sayi1;
	int sayi2;
	int sayi3;
	cout << " enter a number : " << endl;
	cin >> sayi1;
	cin >> sayi2;
	cin >> sayi3;
	cout << max(sayi1, sayi2, sayi3) << endl;
	return 0;
}
