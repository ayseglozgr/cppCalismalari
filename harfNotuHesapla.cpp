#include <iostream>
using namespace std;

int main()
{
	int sinavNotu;
	cout << "enter your exam note which is between 0 and 100. " << endl;
	cin >> sinavNotu;
	if (sinavNotu < 0 || sinavNotu > 100)
	{
		cout << " you entered wrong !" << endl;
	}
	else
	{
		if (sinavNotu <= 100 && sinavNotu >= 90)
		{
			cout << "your note is A. " << endl;
		}
		else if (sinavNotu >= 80 && sinavNotu < 90)
		{
			cout << "your note is B. " << endl;
		}
		else if (sinavNotu >= 70 && sinavNotu < 80)
		{
			cout << "your note is C. " << endl;
		}
		else if (sinavNotu >= 0 && sinavNotu < 70)
		{
			cout << "your note is F. " << endl << "you failed." << endl;
		}
	}
	return 0;
}
