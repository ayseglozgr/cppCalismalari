#include<iostream>
using namespace std;



int main()
{
	int a ;
	cout << "bir sayi giriniz : " << endl;
	cin >> a;

	int toplam = 0;
	for (int k = 0; k <= a; k++)
	
		toplam = toplam + k * k;
		cout << a<< "a kadar olan sayilarin kareleri toplami "<<toplam <<" dir"<< endl;
		return 0;
}