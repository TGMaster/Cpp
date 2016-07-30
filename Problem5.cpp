#include <iostream>
int main() {
	int n, sum=0;
	do {
		printf("Enter an integer: ");
		std::cin >> n;
		if (n % 2 == 0) {
			sum += n*n;
		}
		if (n % 2 != 0) {
			sum += n*n*n;
		}
	} while (n != 0);
	printf("Sum is: %d\n", sum);
	system("pause");
}
