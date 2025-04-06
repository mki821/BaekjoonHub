#include <iostream>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int cnt = 0, sum = 0;
	string input;

	cin >> input;

	for (int i = 0; i < input.length(); ++i)
	{
		if (input[i] == '(')
		{
			++cnt;
		}
		else if (input[i] == ')')
		{
			--cnt;

			if (input[i - 1] == '(')
				sum += cnt;
			else ++sum;
		}
	}

	cout << sum;
}