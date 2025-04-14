#include <iostream>
using namespace std;

int dp[1000001] = { 0, 1, 2, 3, 5 };

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n;

	cin >> n;

	for (int i = 5; i <= n; ++i)
	{
		dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;
	}

	cout << dp[n];
}