//çift mi tek mi uygulaması
#include<iostream>
using namespace std;

int main()
{
	long long sayi;
	cout << "bir sayi girin " << endl;
	cin >> sayi;
	if (sayi % 2 == 0)
	{
		cout << sayi << " sayisi cifttir." << endl;
	}
	else
	{
		cout << sayi << " sayisi tektir." << endl;
	}
	return 0;
}