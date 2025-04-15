#include <iostream>
using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	int n, m;
	int dp[41] = { 1, 1, 2 }, fix[41];

	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		cin >> fix[i];
	}

	for (int i = 3; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	int output = 1;
	int start = 0, end;

	for (int i = 0; i < m; ++i)
	{
		end = fix[i];
		output *= dp[end - start - 1];
		start = end;
	}

	output *= dp[n - start];

	cout << output;
}
