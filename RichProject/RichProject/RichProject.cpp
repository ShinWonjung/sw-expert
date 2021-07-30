#include <iostream>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	long* money = new long[t] {0, };
	int** arr = new int* [t];

	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int i = 0; i < t; i++) arr[i] = new int[n]; //arr[t][n] 생성
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		} //매일의 가격 입력

		int max = arr[i][0];
		int _max = 0, _fir = 0;
		while (1) {
			if (n == _max + 1) break;
			for (int j = _fir; j < n; j++) {
				if (arr[i][j] > max) {
					max = arr[i][j];
					_max = j;
				}
			}
			int day = 0, sum = 0;
			for (int j = _fir; j < _max; j++) {
				sum += arr[i][j];
				day++;
			}
			money[i] += arr[i][_max] * day - sum;
			_fir = _max + 1;
			max = 0;
		}
		delete[] arr[i];
	}
	for (int i = 0; i < t; i++) cout << '#' << i + 1 << ' ' << money[i] << "\n";

	//for (int i = 0; i < t; i++) delete[] arr[i];
	delete[] arr;
	delete[] money;

	return 0;
}