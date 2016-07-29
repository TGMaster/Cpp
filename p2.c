#include <stdio.h>
#include <stdlib.h>

void shiftToEnd(int arr[], int n, int max)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] != max && arr[i] != 0)
			arr[count++] = arr[i];
	while (count < n)
		arr[count++] = max;
}

void main(int arg, char *str[])
{
	int max = 0, temp, i, array[128];
	if (arg > 1)
	{
		for (int i = 1; i < arg; i++)
		{
			max = (max < atoi(str[i])) ? atoi(str[i]) : max;
			array[i] = atoi(str[i]);
		}
		shiftToEnd(array, i, max);
		for (int j = 1; i < i; j++)
			printf("%d ",array[j]);
		printf("\n");
	}
}
