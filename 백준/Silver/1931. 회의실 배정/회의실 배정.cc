#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n;

	cin >> n;

	vector<pair<int, int>> vec;

	for (int i = 0, a, b; i < n; ++i) {
		cin >> a >> b;

		vec.push_back({ a, b });
	}

	sort(vec.begin(), vec.end());
	vec.reserve(vec.size());

	int cnt = 0;
	int i = n - 1;
	int last_start = 1e8;
	while (i >= 0) {
		pair<int, int> temp = vec[i--];
		if (last_start >= temp.second) {
			last_start = temp.first;
			++cnt;
		}
	}

	cout << cnt;
}