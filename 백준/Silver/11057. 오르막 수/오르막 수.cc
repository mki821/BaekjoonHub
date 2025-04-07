#include <iostream>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n;

	cin >> n;

	int sum = 0;
	int dp[1001][10];

	for (int i = 0; i <= 9; ++i)
	{
		dp[1][i] = 1;
	}

	for (int i = 2; i <= n; ++i)
	{
		dp[i][0] = dp[i - 1][0] % 10007;

		for (int j = 1; j <= 9; ++j)
		{
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 10007;
		}
	}

	for (int i = 0; i <= 9; ++i)
	{
		sum += dp[n][i];
		sum %= 10007;
	}

	cout << sum;
}