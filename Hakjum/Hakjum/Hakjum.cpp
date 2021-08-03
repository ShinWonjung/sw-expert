//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstdio>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin >> test;
	for (int t = 0; t < test; t++) {
		int n, k;
		cin >> n >> k;
		float* score = new float[n];
		for (int i = 0; i < n; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			score[i] = a * 0.35 + b * 0.45 + c * 0.2;
		}
		int* num = new int[n];
		for (int i = 0; i < n; i++) num[i] = i + 1;

		//for (int i = 0; i < n; i++) cout << i << ' ' << score[i] << "  " << num[i] << "\n";

		for (int i = 0; i < n; i++) {
			float max = 0;
			int _max = 0;
			for (int j = i; j <= n; j++) {
				if (score[j] > max) {
					max = score[j];
					_max = j;
				}
			}
			float temp = score[i];
			score[i] = max;
			score[_max] = temp;
			temp = num[i];
			num[i] = num[_max];
			num[_max] = temp;
		}
		//for (int i = 0; i < n; i++) cout << i << ' ' << score[i] << "  " << num[i] << "\n";

		for (int i = 0; i < n; i++) {
			if (num[i] == k) {
				k = i + 1;
				break;
			}
		}
		
		int cut = n / 10;
		int line = 0;
		int i = 0;
		while(k > line) {
			line += cut;
			i++;
		}
		switch (i) {
		case 1:cout << '#' << t + 1 << ' ' << "A+" << "\n"; break;
		case 2:cout << '#' << t + 1 << ' ' << "A0" << "\n"; break;
		case 3:cout << '#' << t + 1 << ' ' << "A-" << "\n"; break;
		case 4:cout << '#' << t + 1 << ' ' << "B+" << "\n"; break;
		case 5:cout << '#' << t + 1 << ' ' << "B0" << "\n"; break;
		case 6:cout << '#' << t + 1 << ' ' << "B-" << "\n"; break;
		case 7:cout << '#' << t + 1 << ' ' << "C+" << "\n"; break;
		case 8:cout << '#' << t + 1 << ' ' << "C0" << "\n"; break;
		case 9:cout << '#' << t + 1 << ' ' << "C-" << "\n"; break;
		case 10:cout << '#' << t + 1 << ' ' << "D0" << "\n"; break;
		}
		delete[] score;
		delete[] num;
	}
		return 0;
}