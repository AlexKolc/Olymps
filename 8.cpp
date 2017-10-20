#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAXN = 2510;

int main() {
		int n, k;
		vector <int> points(MAXN);
		cin >> n >> k;
		for (int i = 0; i < n; i++)
				cin >> points[i];
		int kk = (points[n - 1] - points[0]) / k;
		int ans;
		while (1) {
				int x = 0, cnt = 0;
				for (int i = 1; i < n; i++)
						if (a[i] - a[x] == kk)
								x = i, cnt++;
				if (x == n - 1 && cnt <= k) {
						ans = kk;
						break;
				}
				kk++;
		}
		cout << ans;
		return 0;
}
