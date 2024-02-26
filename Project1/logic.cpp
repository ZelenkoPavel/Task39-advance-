#include <iostream>

using namespace std;



string the_lucky_number(int number) {

	number = number < 0 ? -number : number;

	int num;

	while (number != 1) {
		num = number;

		int sum_of_squares = 0;

		while (num > 0) {
			sum_of_squares += pow(num % 10, 2);
			num /= 10;
		}

		if (sum_of_squares == 1) {
			return "This is a lucky number";
		}

		number = sum_of_squares;
	}

	return "This isn't a lucky number";
}