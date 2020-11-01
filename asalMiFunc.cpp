#include <iostream>
using namespace std;

bool asalMi(int a)
{
	int k;
	for (k = 2; k <= a/2; k++){
		if (a % k == 0){
			return false;
		}else{
			return true;
		}
	}
}
int main(){
	int y;
	cout << " enter a number : " << endl;
	cin >> y;
	if (asalMi(y) == true){
		cout << " asal " << endl;
	}else{
	cout << " asal degil " << endl;
	}
	}

