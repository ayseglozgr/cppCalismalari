#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << " pay degerini girin : " << endl;
	cin >> a;
	int b;
	cout << " payda degerini girin : " << endl;
	cin >> b;
	int k;
	
	for (k = a; k > 0; k--)
	{
		if (a % k == 0 && b % k == 0)
		{
			a /= k;
			b /= k;
		}
	}
	cout << a << "/" << b << endl;
	return 0;
}
