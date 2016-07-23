#include <iostream>
int main() {
	while (1) {
		int n;
		std::cin >> n;
		double x[256];
		for (int i = 0; i < n; i++) {
			std::cin >> x[i];
		}
		float max = x[0], min = x[0];
		for (int i = 0; i < n; i++) {
			max = (max < x[i]) ? x[i] : max;
			min = (min > x[i]) ? x[i] : min;
		}
		std::cout << "[" << min << " , " << max << "]" << std::endl;
	}
	system("pause");
}
