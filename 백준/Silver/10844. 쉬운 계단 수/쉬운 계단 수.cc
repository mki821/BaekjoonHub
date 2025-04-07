#include <iostream>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n;

	cin >> n;

	long long sum = 0;
	long long dp[101][10];

	dp[1][0] = 0;

	for (int i = 1; i <= 9; ++i)
	{
		dp[1][i] = 1;
	}

	for (int i = 2; i <= n; ++i)
	{
		dp[i][0] = dp[i - 1][1] % 1000000000;

		for (int j = 1; j <= 8; ++j)
		{
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		}

		dp[i][9] = dp[i - 1][8] % 1000000000;
	}

	for (int i = 0; i <= 9; ++i)
	{
		sum += dp[n][i];
		sum %= 1000000000;
	}

	cout << sum;
}