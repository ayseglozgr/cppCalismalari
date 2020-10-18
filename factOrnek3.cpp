#include<iostream>
using namespace std;
 
int main()
{
	int sayi;
	cout << " faktoriyel hesabi yapilacak sayi :  ";
	cin >> sayi;
	int sayac = 1;
	int dongu;
	for (dongu = 0; dongu < sayi; dongu++)
	{
		sayac = sayac * (dongu + 1);

	}
	cout << sayac;
	return 0;
}