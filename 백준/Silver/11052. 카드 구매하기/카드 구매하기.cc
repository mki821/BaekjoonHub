#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int arr[1001], dp[1001] = { 0 };

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			dp[i] = max(dp[i], dp[i - j] + arr[j]);
		}
	}

	cout << dp[n];
}