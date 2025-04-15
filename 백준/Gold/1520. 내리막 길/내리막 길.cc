#include <iostream>
using namespace std;

int m, n;
int map[501][501], dp[501][501];
bool visited[501][501];

const short dirX[4] = { 1, 0, -1, 0 };
const short dirY[4] = { 0, 1, 0, -1 };

int dfs(short x, short y)
{
	if (x == n - 1 && y == m - 1) return 1;
	if (visited[y][x]) return dp[y][x];

	visited[y][x] = true;
	dp[y][x] = 0;

	for (int i = 0; i < 4; ++i)
	{	
		int xx = x + dirX[i];
		int yy = y + dirY[i];

		if (xx >= 0 && yy >= 0 && xx < n && yy < m)
		{
			if (map[y][x] > map[yy][xx])
			{
				dp[y][x] += dfs(xx, yy);
			}
		}
	}

	return dp[y][x];
}

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	cin >> m >> n;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> map[i][j];
		}
	}

	cout << dfs(0, 0);
}
