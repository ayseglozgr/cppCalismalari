#include<iostream>
using namespace std;
int main()
{
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	int eb = a[0];
	int k;
	for (k = 0; k < 5; k++)
	{
		if (eb > a[k])
			eb = a[k];
			cout << "en buyuk sayi : " << eb << endl;

	}


}