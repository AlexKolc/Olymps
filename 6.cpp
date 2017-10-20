#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>

using namespace std;

const int MAXN = 1001;
int n, m, u, v, k;
vector <int> graph[MAXN], used(MAXN, 0);


void dfs(int key) {
		used[key] = 1;
		for (int i = 0; i < n; i++)
				if (graph[key][i])
						if (!used[i])
								dfs(i);
}

int main() {
		cin >> n >> m >> v >> u;
		for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
						graph[i].push_back(0);
		for (int x, y, i = 0; i < m; i++) {
				cin >> x >> y;
				x--, y--;
				graph[x][y] = graph[y][x] = 1;
		}
		cin >> k;
		for (int city, i = 0; i < k; i++) {
				cin >> city;
				for (int i = 0; i < n; i++)
						graph[i][city - 1] = graph[city - 1][i] = 0;
		}
		dfs(v - 1);
		if (used[u - 1])
				cout << "YES";
		else
				cout << "NO";
		return 0;
}
