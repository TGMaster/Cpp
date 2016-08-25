#include <iostream>
using namespace std;

int main() {
	int a[100][100];
	int n, i, j;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap i, j: ";
	cin >> i >> j;
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			cout << "Nhap a[" << x << "][" << y << "]: ";
			cin >> a[x][y];
		}
	}

	cout << "Ma tran da xu ly" << endl;
	for (int x = 0; x < n; x++) {
		if (x == (i - 1))
			continue;
		for (int y = 0; y < n; y++) {
			if (y == (j - 1))
				continue;
			cout << a[x][y] << " ";
		}
		cout << endl;
	}
	return 0;
}
