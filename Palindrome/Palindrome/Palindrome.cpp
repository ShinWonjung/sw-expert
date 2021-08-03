#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin >> test;
	for (int t = 0; t < test; t++) {
		string s;
		cin >> s;
		int size = s.length();
		for (int i = 0; i < size / 2; i++) {
			if (s[i] != s[size - 1 - i]) {
				size = -1;
				break;
			}
		}
		if (size == -1) cout << '#' << t + 1 << ' ' << '0' << "\n";
		else cout << '#' << t + 1 << ' ' << '1' << "\n";;
	}
	return 0;
}