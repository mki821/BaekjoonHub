#include <iostream>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	short t;
	string input;

	cin >> t;

	while (t--)
	{
		cin >> input;

		cout << (input[0] - '0') + (input[2] - '0') << "\n";
	}
}