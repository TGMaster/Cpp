#include <iostream>
using namespace std;
int main(){
			int i, j, n;

	printf("Enter value of n : ");
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		//Prints trailing spaces
		for (j = i; j<n; j++)
		{
			printf("  ");
		}

		//Prints hollow pyramid
		for (j = 1; j <= (2 * i - 1); j++)
		{
			if (j == 1 || j == (2 * i - 1))
			{
				printf("* ");
			}
			else if (i == n/2+1) {
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}

		printf("\n");
	}
	system("pause");
	return 0;
}
