#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>

using namespace std;

const int MAXN = 2510;

int main() {
		int n, n1, n2;
		vector <int> num, num1, num2;
		cin >> n;
		if (n == 1) {
				cin >> n;
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
		} else {
				cin >> n1 >> n2;
				vector <int> num1, num2;
				while (n1 > 0) {
						num1.push_back(n1 % 2);
						n1 /= 2;
				}
				while (n2 > 0) {
						num2.push_back(n2 % 2);
						n2 /= 2;
				}
				while (num1.size() > num2.size())
						num2.push_back(0);
				while (num1.size() < num2.size())
						num1.push_back(0);
				for (int i = 0; i < num1.size(); i++)
						if (num1[i] == num2[i])
								num1[i] = num2[i] = (num1[i] + 1) % 2;
						else if (!num1[i] && num2[i])
								num1[i] = 1, num2[i] = 0;
						else
								num1[i] = 0, num2[i] = 1;
		}
		n1 = n2 = 0;
		for (int i = 0; i < num1.size(); i++) {
				n1 += (int)(pow(2.0, (double)i)) * num1[i];
				n2 += (int)(pow(2.0, (double)i)) * num2[i];
		}
		cout << n1 << ' ' << n2;
		return 0;
}
