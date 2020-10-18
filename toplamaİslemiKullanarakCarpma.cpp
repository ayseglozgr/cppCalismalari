#include<iostream>
using namespace std;

int main()
{
	int toplam = 0;

	int sayi1;
	cout << " ilk sayiyi girin :" << endl;
	cin >> sayi1;
	int sayi2;
	cout << " ikinci sayiyi girin : " << endl;
	cin >> sayi2;

	for (int a = 0; a < sayi1; a++)
	{
		toplam = sayi2 + toplam;
	}
	cout << toplam;
	return 0;
}