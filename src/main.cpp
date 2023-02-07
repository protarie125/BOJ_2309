#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using vi = vector<int>;

vi ss;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ss = vi(9);
	for (auto i = 0; i < 9; ++i) {
		cin >> ss[i];
	}

	sort(ss.begin(), ss.end());
	while (next_permutation(ss.begin(), ss.end())) {
		auto sum = int{ 0 };
		for (auto i = 0; i < 7; ++i) {
			sum += ss[i];
		}

		if (100 == sum) {
			for (auto i = 0; i < 7; ++i) {
				cout << ss[i] << '\n';
			}
			break;
		}
	}

	return 0;
}