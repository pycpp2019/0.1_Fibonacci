#include <iostream>

int main() {
	int num_of_val = 0;
	std::cin >> num_of_val;

	int prev_val = 0;
	int cur_val = 1;

	if(num_of_val == 0) {
		std::cout << 0 << std::endl;
		return 0;
	}

	for(int i = 1; i < num_of_val; i++) {
		int tmp = cur_val;
		cur_val += prev_val;
		prev_val = tmp;
	}

	std::cout << cur_val << std::endl;
	return 0;
}