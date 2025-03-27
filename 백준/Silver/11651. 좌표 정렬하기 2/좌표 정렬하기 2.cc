#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> xVec;
vector<int> yVec;

bool compare(int a, int b) {
	if (yVec[a] == yVec[b])
		return xVec[a] < xVec[b];
	return yVec[a] < yVec[b];
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n;

	cin >> n;

	vector<int> vec;

	for (int i = 0, x, y; i < n; ++i) {
		cin >> x >> y;
		vec.push_back(i);
		xVec.push_back(x);
		yVec.push_back(y);
	}

	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < n; ++i)
		cout << xVec[vec[i]] << " " << yVec[vec[i]] << "\n";
}