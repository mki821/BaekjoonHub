#include <iostream>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n;
	int dp[1001];

	cin >> n;

	int key = n % 4;

	if (key == 0) cout << "CY";
	else if (key == 1) cout << "SK";
	else if (key == 2) cout << "CY";
	else cout << "SK";
}