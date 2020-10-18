#include <iostream>
using namespace std;

int main()
{
	int gun;
	cin >> gun;
	int ay;
	cin >> ay;
	int yil;
	cin >> yil;
	if (gun < 0 || gun > 31)
	{
		cout << " gun bilgisi yanlis yazildi!" << endl;
	}
	if (ay < 0 || ay > 12)
	{
		cout << " ay bilgisi yanlis yazildi!" << endl;
	}
	else
	{
		cout << ay << "/" << gun << "/" << yil << endl;
		cout << yil << "/" << ay << "/" << gun << endl;
	}
	return 0;
}

