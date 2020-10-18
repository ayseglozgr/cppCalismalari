//ters eşkenar üçgen
#include <iostream>
using namespace std;

int main()
{
	int spaceCount, b, rowCount,starCount;
	cout << "b degeri" << endl;
	cin >> b;
	for (rowCount = 0; rowCount < b; rowCount++)
	{
		
		for (spaceCount = 0; spaceCount < rowCount; spaceCount++)
		{
			cout << " ";
		}
		for (starCount = 0; starCount < 2 * (b - rowCount) -1 ; starCount++)
		{
			cout << "*";

		}
		cout << endl;
	}
	return 0;
}