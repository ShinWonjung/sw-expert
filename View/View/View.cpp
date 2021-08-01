#include <iostream>
using namespace std;

int main()
{
	int t = 10;
	int result[10] = { 0, };
	for (int i = 0; i < t; i++) {
		int cas;
		cin >> cas;
		int* n = new int[cas + 4]{ 0, };
		for (int j = 2; j < cas + 2; j++) cin >> n[j];
		for (int j = 2; j < cas + 2; j++) {
			int left = -1, right = -1;
			if (n[j] > n[j - 1] && n[j] > n[j - 2]) 
				left = n[j - 1] >= n[j - 2] ? n[j - 1] : n[j - 2];
			if (n[j] > n[j + 1] && n[j] > n[j + 2])
				right = n[j + 1] >= n[j + 2] ? n[j + 1] : n[j + 2];
			if (left != -1 && right != -1) {
				result[i] += (n[j] - (left >= right ? left : right));
				j += 2;
			}
		}
		delete[] n;
	}
	for (int i = 0; i < t; i++) cout << '#' << i + 1 << ' ' << result[i] << "\n";

	return 0;
}