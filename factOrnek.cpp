
#include <iostream>
using namespace std;
int fact(int a)
{
	
	int carpim = 1;
	for (int k = 1; k <= a; k++) {
    carpim *= k;
	}
	return carpim;
}

int main()
{
	int m;
	cout << "bir sayi giriniz" << endl;
	cin >> m;
	
	cout << fact(m) << endl;
	return 0;
}
