#include<iostream>
using namespace std;

int main() {

	int number, reverse = 0;
	cout << "Sayıyı Gir : ";
	cin >> number;

	while (true)
	{
		if (number == 0)
		{
			break;
		}
		reverse = reverse * 10;
		reverse = reverse + number % 10;
		number = number / 10;
	}


	cout << "Sayının Ters Çevrilmiş Hali :  " << reverse;
	return 0;

}