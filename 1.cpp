#include <iostream>
#include <cstring>

using namespace std;

int main() {
		string s;
		cin >> s;
		if (isupper(s[0]) && isupper(s[4]) && isupper(s[5]) && isdigit(s[1]) && isdigit(s[2]) && isdigit(s[3]))
				cout << "Yes";
		else
				cout << "No";
		return 0;
}
