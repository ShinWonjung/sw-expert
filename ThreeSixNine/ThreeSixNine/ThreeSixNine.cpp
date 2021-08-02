#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int three = 0;
		int num = i;
		while (1) {
			if (num % 10 == 0) num /= 10;
			else break;
		}
		while (1) {
			if (num == 0) break;
			if (num%10%3 == 0) {
				three++;
			}
			num /= 10;
		}
		if (three == 0) cout << i;
		else {
			for (int j = 0; j < three; j++) cout << '-';
		}
		cout << ' ';
	}
	return 0;
}