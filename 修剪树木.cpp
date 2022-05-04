/*#include<iostream>
#include<cstring>
using namespace std;
int n;
int h[10001];
int m[10001];
int flag;
int main() {
	cin >> n;
	memset(h, 0, sizeof(h));
	memset(m, 0, sizeof(m));
	int index = 1;
	flag = 0;
	for (int k = 0; k < 3 * n; k++) {
		for (int i = 1; i <= n; i++) {
			h[i]++;
			m[i] = max(h[i], m[i]);
		}
		h[index] = 0;
		if (index == 1) {
			flag = 0;
		}
		if (index == n) {
			flag = 1;
		}
		if (flag == 0) {
			index++;
		}
		else {
			index--;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << m[i] << endl;
	}
	return 0;

}*/
/*#include <iostream>

using namespace std;
typedef long long LL;

const int N = 1e4 + 10;

int a[N], n;

int main()
{
	cin >> n;
	for (int i = 1; i <= (n + 1) / 2; i++) {
		a[i] = (n - i) * 2;
		a[n - i + 1] = a[i];
	}

	for (int i = 1; i <= n; i++) {
		cout << a[i];
		if (i != n) cout << "\n";
	}

	return */