#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int test;
	cin >> test;
	vector<int> arr;
	for (int t = 0; t < test; t++) {
		int n;
		cin >> n;
		//vector<int> arr;
		int cnt = 0;
		arr.push_back(-1);
		cnt++;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				if (j == 1 || j == i) arr.push_back(1);
				else {
					arr.push_back(arr[cnt - i - 1] + arr[cnt - i]);
				}
				cnt++;
			}
			arr.push_back(0);
			cnt++;
		}
	}
	int num = 1;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == 0) cout << "\n";
		else if (arr[i] == -1) {
			cout << "\n" << '#' << num++ << "\n";
		}
		else cout << arr[i] << ' ';
	}
	return 0;
}