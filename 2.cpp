#include <iostream>

using namespace std;

int main() {
		int n;
		cin >> n;
		int answer = 1 + (n - 1) / 3 * 2 + (n - 1) % 3;
		cout << answer;
		return 0;
}
