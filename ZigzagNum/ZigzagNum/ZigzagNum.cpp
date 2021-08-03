#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin >> test;
	for (int t = 0; t < test; t++) {
		int n;
		cin >> n;
		int result = 0;
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 1) result += i;
			else result -= i;
		}
		cout << '#' << t + 1 << ' ' << result << "\n";
	}
	return 0;
}