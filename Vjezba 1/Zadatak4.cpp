#include <iostream>
using namespace std;

int& at(int niz[], int i) {
	return niz[i];
}

int main(){
	int c[5] = { 1,2,3,4,5 };
	for (int j = 0;j<5;j++) {
		cout << c[j] << ' ';
	}
	cout << '\n';
	at(c, 2) = at(c, 2) + 1;
	for (int j = 0; j < 5; j++) {
		cout << c[j] << ' ';
	}
	
	return 0;
}