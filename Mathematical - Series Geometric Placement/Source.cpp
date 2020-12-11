//Prompt

//Given the A and R; the first term and common ratio of a GP series. Find the Nth term of the series

#include <iostream>

#define PAUSE std::cout << "\n\n"; system("pause");


int main() {

	int A;
	int R;
	int N;

	std::cin >> A;
	std::cin >> R;
	std::cin >> N;

	int G = A;

	std::cout << "The GP Series: ";

	for (; N > 0; N--) {
		std::cout << G << " ";
		G *= R;
	}


	PAUSE;
	return 0;
}