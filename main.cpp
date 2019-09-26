#include <iostream>

int main() {
	int num_of_val = 0;
	std::cin >> num_of_val;

	unsigned long long int prev_val = 0;
	unsigned long long int cur_val = 1;

	if(num_of_val == 0) {
		std::cout << 0 << std::endl;
		return 0;
	}

	for(int i = 1; i < num_of_val; i++) {
		unsigned long long int tmp = cur_val;
		cur_val += prev_val;
		prev_val = tmp;
	}

	std::cout << cur_val << std::endl;
	return 0;
}