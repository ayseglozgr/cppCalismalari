//yildizla eşkenar dörtgen

#include <iostream>
using namespace std;

int main()
{
	int k;
	cout << " eskenar dörgen icin kenar uzunlugu : " << endl;
	cin >> k;
	int t;

	for (t = 0; t < k; t++)
	{
		int spaceCount;
		for (spaceCount = 0; spaceCount < t ; spaceCount++)
		{
			cout << " ";
		}
		int starCount;

		for (starCount = 0; starCount < k; starCount++)
		{
			cout << "*";
		}
		cout << endl; 
	}
	return 0;
}
