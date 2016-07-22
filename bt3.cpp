#include <iostream>
#include <cmath>
int main() {
	while (1) {
		double R, n, p;
		printf("Nhap ban kinh: ");
		std::cin >> R;
		printf("Nhap n canh: ");
		std::cin >> n;
		if (R <= 0 || n < 3) return -1;
		double a = abs(R * 2 * sin(180 / n));
		p = a*n;
		printf("Chu vi la: %.2f\n", p);
	}
	system("pause");
}
