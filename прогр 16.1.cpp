#include <iostream>

using namespace std;
int main()
{
	int N, i, c, n;
	c = 0;
	cin >> N;
	int* a = new int[N];
	int* b = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	b[0] = a[0];
	for (i = 0; i < N; i++) {
		if (a[i] != a[i + 1]) {
			b[c] = a[i];
			c++;
		}
	}
	for (i = 0; i < c; i++) {
		cout << b[i] << " ";
	}
}