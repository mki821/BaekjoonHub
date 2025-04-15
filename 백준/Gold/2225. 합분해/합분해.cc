#include <iostream>
using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	int n, k;
	long long dp[201][201];

	cin >> n >> k;


	for (int i = 0; i <= k; ++i)
	{
		for (int j = 0; j <= n; ++j)
		{
			dp[i][j] = 0;
		}
	}
	dp[0][0] = 1;

	for (int i = 1; i <= k; ++i)
	{
		for (int j = 0; j <= n; ++j)
		{
			for (int l = 0; l <= j; ++l)
			{
				dp[i][j] += dp[i - 1][j - l];
				dp[i][j] %= 1000000000;
			}
		}
	}

	cout << dp[k][n];
}
