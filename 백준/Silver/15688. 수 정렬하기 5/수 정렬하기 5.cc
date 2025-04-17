#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(false);

	int n;
	vector<int> vec;

	cin >> n;

	for (int i = 0, input; i < n; ++i)
	{
		cin >> input;
		vec.push_back(input);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < n; ++i)
	{
		cout << vec[i] << "\n";
	}
}
