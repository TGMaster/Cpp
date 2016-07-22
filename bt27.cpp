#include <iostream>
#include <cstdlib>
int main() {
	while (1) {
		int n;
		std::cin >> n;
		char number[256];
		itoa(n*n, number, 10);
		for (int i = 0; number[i] != 0; i++) {
			if (number[i] == '3')
				printf("Xuat hien so 3 trong n^2!\n");
		}
		itoa(n, number, 10);
		std::cout << "So dao nguoc la: ";
		for (signed int i = strlen(number) - 1; i >= 0; i--) {
			std::cout << (char)number[i];
		}
		char b = number[0];
		number[0] = number[strlen(number) - 1];
		number[strlen(number) - 1] = b;
		std::cout << "\nSo cuoi cung la: " << number << std::endl;
	}
	system("pause");
}
