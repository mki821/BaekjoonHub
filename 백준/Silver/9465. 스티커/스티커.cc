#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000001][2], dp[1000001][2];

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int t, n;

	cin >> t;

	while (t--)
	{
		cin >> n;

		for (int i = 0; i < 2; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				cin >> arr[j][i];
			}
		}

		dp[0][0] = dp[0][1] = 0;

		dp[1][0] = arr[1][0];
		dp[1][1] = arr[1][1];

		for (int i = 2; i <= n; ++i)
		{
			dp[i][0] = max(dp[i - 1][1], dp[i - 2][1]) + arr[i][0];
			dp[i][1] = max(dp[i - 1][0], dp[i - 2][0]) + arr[i][1];
		}

		cout << max(dp[n][0], dp[n][1]) << "\n";
	}
}