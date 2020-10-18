#include<iostream>
using namespace std;

int main()
{
	int sayac = 1;
	int faktoriyel = 1;
	int n;
	cout << " n degerini girin." << endl;
	cin >> n;
	while (sayac < n)
	{
		sayac++;
		faktoriyel = sayac * faktoriyel;
	}
	cout << faktoriyel << endl;
	return 0;
}