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
	int max = 0, temp, counti, array[128];
	if (arg > 1)
	{
		for (int i = 1; i < arg; i++)
		{
			array[i] = atoi(str[i]);
		}
		for (int i = 0; array[i] != 0; i++)
		{
			counti++;
			if (max < atoi(str[i])) {
				max = array[i];
			}
		}
		shiftToEnd(array, counti, max);
		for (int i = 1; i < (counti-1); i++)
			printf("%d ",array[i]);
		printf("\n");
	}
}
