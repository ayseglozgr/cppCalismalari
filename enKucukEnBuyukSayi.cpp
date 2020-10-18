#include <iostream>
using namespace std;


int main()
{

	cout << "lutfen 5 sayi giriniz" << endl;
	int a[5];

	for (int i = 0; i < 5; i++) {

		cin >> a[i]; 
	}

	int eb = a[0];
	int ek = a[0];
	
	int toplam = a[0];

	for (int i = 1; i < 5; i++) {
		toplam += a[i]; 

		if (eb < a[i]) {
			eb = a[i];
		} 
		if (ek > a[i]) {
			ek = a[i];
		}

	}
	cout << "en buyuk deger:" << toplam - ek << endl;
	cout << "en kucuk deger:" << toplam - eb << endl;
	return 0;
}
