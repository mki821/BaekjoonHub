#include <iostream>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n;

	cin >> n;

	if (n % 2 == 0) cout << "CY";
	else cout << "SK";
}