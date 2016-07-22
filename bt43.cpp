#include <iostream>
int main() {
	while (1) {
		int n;
		double a=1, b=1;
		std::cin >> n;
		if (n <= 0) return -1;
		if (n % 2 == 0) {
			for (int i = 1; i <= n / 2; i++) {
				a = a*2*i / (2 * i - 1);
				b = b*2*i / (2 * i + 1);
			}
		} else {
			for (int i = 1; i <= n / 2; i++) {
				a = a*2*i / (2 * i + 1);
			}
			for (int j = 1; j <= n / 2 + 1; j++) {
				b = b * 2 * j / (2 * j - 1);
			}
		}
		std::cout << "Ket Qua: " << a*b <<std::endl;
	}
	system("pause");
}
