#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int** result = new int*[t];
	for (int i = 0; i < t; i++) {
		int n, max;
		cin >> n;
		result[i] = new int[n * n];
		int** arr = new int*[n];
		for (int j = 0; j < n; j++) arr[j] = new int[n] {0};
		max = n - 1;
		int j = 0;
		int num = 0;
		while (1) {
			for (int g = j; g <= max; g++) {
				arr[j][g] = ++num;
			}
			if (n % 2 == 1 && arr[n / 2][n / 2] != 0) break;
			for (int g = j + 1; g <= max; g++) {
				arr[g][max] = ++num;
			}
			for (int g = max - 1; g >= j; g--) {
				arr[max][g] = ++num;
			}
			if (n % 2 == 0 && arr[n / 2 - 1][n / 2] != 0) break;
			for (int g = max - 1; g > j; g--) {
				arr[g][j] = ++num;
			}
			j++;
			max--;
		}
		num = 0;
		for (int g = 0; g < n; g++) {
			for (int p = 0; p < n; p++) {
				result[i][num] = arr[g][p];
				num++;
			}
		}
		for (int g = 0; g < n; g++) delete[] arr[g];
		delete[] arr;
	}

	for (int i = 0; i < t; i++) {
		cout << '#' << i + 1 << "\n";
		int s = 0;
		while (1) {
			if (result[i][s] != s+1) {
				break;
			}
			s++;
		}
		int num = 0;
		for (int j = 0; j < s; j++) {
			for (int g = 0; g < s; g++) {
				cout << result[i][num] << ' ';
				num++;
			}
			cout << "\n";
		}
		delete[] result[i];
	}
	delete[] result;
	return 0;
}