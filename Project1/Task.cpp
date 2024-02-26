#include <iostream>

using namespace std;

string the_lucky_number(int);



int main() {

	int number;


	cout << "Input number: ";
	cin >> number;

	cout << "Result - " << the_lucky_number(number);

	return 0;
}