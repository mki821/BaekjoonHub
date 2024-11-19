#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, k;

	cin >> n >> k;

	vector<int> vec(n);

	for (int i = 0; i < n; ++i) {
		cin >> vec[i];
	}

	int cnt = 0;

	while (k > 0) {
		for (int i = n - 1; i >= 0; --i) {
			if (k >= vec[i]) {
				++cnt;
				k -= vec[i];
				break;
			}
		}
	}

	cout << cnt;
}