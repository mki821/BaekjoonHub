#include <iostream>
using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	int n;
	int dp[31] = { 1, 0, 3 };

	cin >> n;

	if (n % 2 == 1)
	{
		cout << 0;
		return 0;
	}

	for (int i = 4; i <= n; i += 2)
	{
		dp[i] = dp[i - 2] * 4 - dp[i - 4];
	}

	cout << dp[n];
}
