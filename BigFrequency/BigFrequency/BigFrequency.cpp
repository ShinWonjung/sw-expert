#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int* result = new int[t];
	for (int i = 0; i < t; i++) {
		int test_case;
		cin >> test_case;
		int arr[1000]{ 0, };
		int score[1000];
		for (int j = 0; j < 1000; j++) cin >> score[j];
		for (int j = 0; j < 1000; j++) arr[score[j]]++;
		int max = 0;
		int _max = 0;
		for (int j = 0; j < 1000; j++) {
			if (arr[j] >= max) {
				max = arr[j];
				_max = j;
			}
		}
		result[i] = _max;
	}
	for (int i = 0; i < t; i++) cout << '#' << i + 1 << ' ' << result[i] << "\n";
	delete[] result;
	return 0;
}