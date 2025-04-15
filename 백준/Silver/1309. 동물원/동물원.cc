#include <iostream>
using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	int n;
	int dp[100001] = { 1, 3 };

	cin >> n;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = (dp[i - 1] * 2 + dp[i - 2]) % 9901;
	}

	cout << dp[n];
}
