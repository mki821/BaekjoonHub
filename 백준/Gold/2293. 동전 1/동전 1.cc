#include <iostream>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, k;
	int arr[101], dp[10001];

	cin >> n >> k;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	dp[0] = 1;
	for (int i = 1; i <= k; ++i)
	{
		dp[i] = 0;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = arr[i]; j <= k; ++j)
		{
			dp[j] += dp[j - arr[i]];
		}
	}

	cout << dp[k];
}