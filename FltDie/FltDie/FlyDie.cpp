//#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
//#include <cstdio>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	int test;
	cin >> test;
	for (int t = 0; t < test; t++) {
		int n, m;
		cin >> n >> m;
		int** arr = new int* [n];
		for (int i = 0; i < n; i++) {
			arr[i] = new int[n];
			for (int j = 0; j < n; j++) cin >> arr[i][j];
		}
		int max = 0;
		for (int i = 0; i <= n - m; i++) {
			for (int j = 0; j <= n - m; j++) {
				int sum = 0;
				for (int g = 0; g < m; g++) {
					for (int q = 0; q < m; q++) {
						sum += arr[i + g][j + q];
					}
				}
				if (sum > max) max = sum;
			}
		}
		cout << '#' << t + 1 << ' ' << max << "\n";
	}
	return 0;
}