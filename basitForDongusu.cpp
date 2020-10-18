#include <iostream>
using namespace std;
int main() {
	int s;
	cout << "sayi: ";
	cin >> s;
	for (int a = s; a >= 1; a--)
	{
		for (int k =1; k <= a; k++)
			cout << "o";
		cout << endl;


	}
	return 0;

}
