#include <iostream>
using namespace std;
int main()
{
	int n, j, i;
	cout << "Nhap vao so n :";
	cin >> n;
	n = (n | 1);//cho n luon la so le
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			if (j - 1 != n / 2 - i + 1 && i + n / 2 != j && i != j + n / 2 && j - n / 2 != n - i + 1) printf("  ");
			else printf("* ");
			printf("\n");
	}
	return 0;
}
