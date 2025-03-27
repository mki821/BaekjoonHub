#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n;
	vector<int> vec;

	cin >> n;

	if (n == 0) {
		cout << 0;
		return 0;
	}

	for (int i = 0, input; i < n; ++i) {
		cin >> input;
		vec.push_back(input);
	}

	sort(vec.begin(), vec.end());

	int exclude = round(n * 0.15f);
	long long sum = 0;

	for (int i = exclude; i < n - exclude; ++i)
		sum += vec[i];

	cout << round((float)sum / (n - exclude * 2));
}