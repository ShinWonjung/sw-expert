#include <iostream>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int N;
        cin >> N;

        cout << "#" << i << '\n';

        int d[12] = { 0, };
        int past[12] = { 0, };
        past[1] = 1;
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= j; k++) {
                d[k] = past[k - 1] + past[k];
            }
            for (int k = 1; k <= j; k++) {
                past[k] = d[k];
                cout << d[k] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}