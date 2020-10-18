#include<iostream>
using namespace std;

int main()
{
	float a;
	float q = 1.6;
	int toplam = 0;
	int carpim = 1;
	int count = 0;
	float ort;
	cout << " enter a number : " << endl;
	cout << " enter q for exit " << endl;
	while(true)
	{
		cin >> a;
		if (a == q)
		{
			break;
		}
		else 
		{
			toplam += a;
			carpim += a;
			count++;
		}
		
	}
	ort = toplam / count;
	cout << "toplam: " << toplam << endl;
	cout << "carpim: " << carpim << endl;
	cout << "ortalama : " << ort << endl;
	return 0;
}