#include <iostream>
using namespace std;

int funkcija(int broj, int low = 1, int high = 5) {
	if (broj < low) { return low; }
	else if (broj > high) { return high; }
	else { return broj; }
}

double funkcija(double broj, double low = 1.5, double high = 5.5) {
	if (broj < low) { return low; }
	else if (broj > high) { return high; }
	else { return broj; }
}

int main() {
	cout << funkcija(-1) << "\n";
	cout << funkcija(3) << "\n";
	cout << funkcija(7) << "\n";

	cout << funkcija(0.3) << "\n";
	cout << funkcija(2.3) << "\n";
	cout << funkcija(6.5) << "\n";

	return 0;
}