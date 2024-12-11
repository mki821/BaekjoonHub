#include <iostream>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n;
	int nums[10001];

    for(int i = 0; i < 10001; ++i)
        nums[i] = 0;

	cin >> n;

	for (int i = 0, input; i < n; ++i) {
		cin >> input;

		++nums[input];
	}

	for (int i = 1; i < 10001; ++i) {
		for (int j = 0; j < nums[i]; ++j) {
			cout << i << '\n';
		}
	}
}