#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(int& tc) {
	int l, r;
	cin >> l >> r;
	int max_size = 1;
	while ((l << max_size) <= r) {
		max_size++;
	}
	int ans2 = (r / (1 << max_size - 1) - l + 1);
	if (max_size > 1) {
		ans2 += (max_size - 1) * max(0, (r / (1 << (max_size - 2)) / 3 - l + 1));
	}
	cout << max_size << " " << ans2 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
