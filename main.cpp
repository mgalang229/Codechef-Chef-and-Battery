#include <bits/stdc++.h>
using namespace std;

/*

[n > 50]
51 - 50 = ceil(1 / 3) = 1
51 - 3(1) = 48 => 50 - 48 = 2 / 2 = 1

ans: 2

--------------------

[n < 50]
50 - 23 = ceil(27 / 2) = 14
23 + 2(14) = 51 - 3(1) = 48 + 2 = 50 => +2 operations

ans: 16

--------------------

100 - 50 = 50 => ceil(50 / 3) = 17
100 - 3(17) = 49 => 50 - 49 = ceil(1 / 2) = 1
=> 49 + 2(1) = 51 - 3 = 48 + 2 = 50

ans: 20

--------------------

78 - 50 = ceil(28 / 3) = 10
78 - 3(10) = 48 => 48+ 2 = 50

ans: 11

--------------------

50 - 47 = ceil(3 / 2) = 2
47 + 2(2) = 51 => 51 - 3(1) = 48 + 2 = 50

ans: 4

*/

void test_case(int& tc) {
	int n;
	cin >> n;
	int ans = 0;
	if (n > 50) {
		ans = ((n - 50) + 3 - 1) / 3;
		int diff = 50 - (n - 3 * ans);
		if (diff == 2)
			ans++;
		else if (diff == 1)
			ans += 3;
	} else {
		ans = ((50 - n) + 2 - 1) / 2;
		if (n + 2 * ans != 50)
			ans += 2;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
		test_case(tc);
}
