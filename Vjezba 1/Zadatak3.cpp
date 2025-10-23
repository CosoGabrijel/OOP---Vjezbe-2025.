#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string s;
	(getline(cin,s));
	for (char &x : s) {
		if (isalpha(x))
		{
			x = toupper(x);
		}
		else if (isdigit(x)) {
			x = '*';
		}
		else if (x == ' ' || x == '\t') {
			x = '_';
		}
	}

	cout << "String: " << s << endl;
	return 0;
}