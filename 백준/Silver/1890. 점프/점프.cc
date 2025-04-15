#include <iostream>
using namespace std;

int n;
int arr[101][101];
long long dp[101][101];
bool visited[101][101];

long long dfs(int x, int y)
{
	if (x == n - 1 && y == n - 1) return 1;
	if (visited[y][x]) return dp[y][x];

	visited[y][x] = true;

	int cur = arr[y][x];

	if (x + cur < n)
	{
		dp[y][x] += dfs(x + cur, y);
	}
	if (y + cur < n)
	{
		dp[y][x] += dfs(x, y + cur);
	}

	return dp[y][x];
}

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> arr[i][j];
		}
	}

	cout << dfs(0, 0);
}
