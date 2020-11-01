#include< iostream>
using namespace std;

int main()
{
	int a;
	double	toplam = 0;
	double ort;
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ". number: " << endl;
		cin >> a;
		toplam += a;
	}
	ort = toplam / 10;
	cout << ort;
	return 0;
}
