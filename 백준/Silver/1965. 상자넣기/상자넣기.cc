#include <iostream>
using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	int n, largest = 0;
	int arr[1001], dp[1001];

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= n; ++i)
	{
		dp[i] = 1;
		for (int j = 1; j <= i; ++j)
		{
			if (arr[i] > arr[j])
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		largest = max(dp[i], largest);
	}

	cout << largest;
}
