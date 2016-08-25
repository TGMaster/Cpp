#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double x, y, size;
	printf("\nHow Big is Your Heart? (Enter <20):");
	cin >> size;
	for (x = 0; x<size; x++)
	{
		for (y = 0; y <= 4 * size; y++)
		{
			double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
			double dist2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));
			if (dist1 < size + 0.5 || dist2 < size + 0.5)
				printf("* "); //For 'a'
			else
				printf("  ");
		}
		printf("\n");
	}
	for (x = 1; x <= 2 * size; x++)
	{
		for (y = 0; y<x; y++)
			printf("  ");
		for (y = 0; y<4 * size + 1 - 2 * x; y++)
			printf("* "); //for 'V'
		printf("\n");
	}
	system("pause");
	return 0;
}
