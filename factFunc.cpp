#include<iostream>
using namespace std;

int faktoriyel(int sayi)
{
	int sayac = 1;

	for (int sonuc = 1; sonuc <= sayi; sonuc++)
	{
		sayac = sonuc * sayac;
	} 
	return sayac;

}

int main()
{
	int sayi1;

	cout << " enter a number which greater than 0." << endl;
		cin >> sayi1;

		cout << faktoriyel(sayi1) << endl;
		return 0;
}