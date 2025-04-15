#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001], dp[10001];

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	int n, k;

	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	dp[0] = 0;
	for (int i = 1; i <= k; ++i)
	{
		dp[i] = 10001;
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = arr[i]; j <= k; ++j)
		{
			dp[j] = min(dp[j], dp[j - arr[i]] + 1);
		}
	}

	if (dp[k] == 10001)
	{
		cout << -1;
	}
	else
	{
		cout << dp[k];
	}
}
