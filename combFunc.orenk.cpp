
#include <iostream>
using namespace std;

int fact( int a)
{
	if (a >= 0)
	{
		int count = 1;
		for (int k = 1; k <= a; k++)
		{
			count = count * k;
		}
		return count; 
	}
	else
	{
		cout << "gecersiz sayi girdinizz." << endl;		
	}
	
}

int comb(int x, int y)
{
	if (x >= y || x >= 0 || y >= 0)
	{
		int sonuc;
		sonuc = fact(x) / (fact(y) * fact(x - y));
		return sonuc;
	}
	else
	{
		cout << " gecersiz sayi girdiniz. " << endl;
	}
	
}
int main()
{
	int a; 
	int k;
	int t;
	cout << " bir sayi girin. " << endl;
	cin >> a;
	cout << " bir sayi girin. " << endl;
	cin >> k;
	cout << " bir sayi girin. " << endl;
	cin >> t;
	cout << fact(a) << endl;
	cout << comb(k, t) << endl;
	return 0;
}
