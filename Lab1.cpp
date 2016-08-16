#include <iostream>

int main() {
	int a, b, c, pro, sum, min, max, n;
	printf("Please input a, b, c: ");
	std::cin >> a >> b >> c;
	if (a == 0 || b == 0 || c == 0) {
		min = 0;
	}
	sum = a + b + c;						// Sum
	pro = a * b * c;						// Product

	// Find max
	max = (a < b) ? b : a;
	max = (max < c) ? c : max;

	// Find max
	min = (a < b) ? a : b;
	min = (max < c) ? min : c;
	
	// Output
	printf("Maximum number = %i\n", max);
	printf("Minimum number = %i\n", min);
	printf("Products = %i\n", pro);
	printf("Sum = %i\n", sum);
	printf("Average = %.2f\n", (sum*1.0/3));
	system("pause");
	return 0;
}
