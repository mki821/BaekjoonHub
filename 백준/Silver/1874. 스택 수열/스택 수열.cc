#include <iostream>
#include <stack>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, cnt = 1;
	string output = "";
	stack<int> stk;

	cin >> n;

	for (int i = 0, input; i < n; ++i) {
		cin >> input;

		while (cnt <= input) {
			output += '+';
			stk.push(cnt);
			++cnt;
		}

		if (stk.top() == input) {
			output += '-';
			stk.pop();
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < output.length(); ++i)
		cout << output[i] << "\n";
}