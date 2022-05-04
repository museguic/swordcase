/*#include<iostream>
using namespace std;
int arr[105], f[105][105];
const int inf = 0x3f3f3f3f;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        for (int len = 2; len <= n; len++) {
            for (int i = 1; i + len - 1 <= n; i++) {
                f[i][i + len - 1] = inf;
                for (int j = i; j <= i + len - 1; j++) {
                    int cost = (len - 1) * arr[j];
                    if (j > i) cost += f[i][j - 1];
                    if (j < i + len - 1) cost += f[j + 1][i + len - 1];
                    f[i][i + len - 1] = min(f[i][i + len - 1], cost);
                }
            }
        }
        cout << f[1][n] << endl;
    }
    return 0;
}*/