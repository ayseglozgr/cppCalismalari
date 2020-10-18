#include<iostream>
using namespace std;


int main()
{
	int a, b, c;
	cout << "birinci sayiyi giriniz " << endl;
		cin >> a;
		cout << "ikinci sayiyi giriniz " << endl;
		cin >> b;
		cout << "ucuncu sayiyi giriniz " << endl;
			cin >> c;
			if (a < c && b < a || a>c&& b>a) {
				cout << "ilk sayi, ikinci ve ücüncü sayi arasındadır.";
			}
			else
				cout << "ilk sayi digerlerinin arasinda degildir."<<endl;
			if (a > b && a > c)
				cout << "ilk sayi en buyuktur.";
			
			return 0;
}