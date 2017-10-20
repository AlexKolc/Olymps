#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>

using namespace std;

const int MAXN = 2510;

int main() {
		int n, n1, n2;
		cin >> n >> n;
		vector <int> num, num1, num2;
		int nn = n;
		while (nn > 0) {
				num.push_back(nn % 2);
				nn /= 2;
		}
		int fl = 0;
		for (int i = 0; i < num.size(); i++) {
				if (num[i] == 0) {
						num1.push_back(1);
						num2.push_back(1);
				} else {
						if (!fl) {
								num1.push_back(1);
								num2.push_back(0);
						} else {
								num1.push_back(0);
								num2.push_back(1);
						}
						fl = (fl + 1) % 2;
				}
		}
		n1 = n2 = 0;
		for (int i = 0; i < num.size(); i++) {
				n1 += (int)(pow(2.0, (double)i)) * num1[i];
				n2 += (int)(pow(2.0, (double)i)) * num2[i];
		}
		cout << n1 << ' ' << n2;
		return 0;
}
