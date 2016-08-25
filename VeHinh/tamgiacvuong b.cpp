#include "iostream"
using namespace std;
int main()
{
	int i, n, k, j;
	printf("Nhap n: "); cin >> n;
	for (i = n; i > 0; i--)
	{
		printf("\n");
		for (j = i - 1; j > 0; j--)
			printf(" ");
		for (k = i - j - 1; k < n; k++)
			printf("*");
	}
	return 0;
}

   *
  **
 ***
****
