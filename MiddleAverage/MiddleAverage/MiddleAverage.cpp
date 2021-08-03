#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin >> test;
	for (int t = 0; t < test; t++) {
		int arr[10];
		int max = 0, min = 10000;
		int _max = 0, _min = 0;
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
			if (arr[i] > max) { max = arr[i]; _max = i; }
			else if (arr[i] < min) { min = arr[i]; _min = i; }
		}
		arr[_max] = 0;
		arr[_min] = 0;
		double result = 0;
		for (int i : arr) result += i;
		result /= 8.0;
		cout << fixed;
		cout.precision(0);
		cout << '#' << t + 1 << ' ';
		cout << result;
		cout << "\n";
	}
	return 0;
}