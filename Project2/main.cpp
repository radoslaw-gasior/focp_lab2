#include <iostream>

using namespace std;


bool is_prime(int number) {
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}

	}

	return true;
}

int read_int() {
	int n;

	cout << "Enter number for testing" << endl;
	cin >> n;

	return n;
}


int pow(int base, int power) {
	int res = 1;

	for (int i = 0; i < power; i++) {
		res *= base;
	}

	return res;
}



int main() {

	int base = read_int();
	int power = read_int();
	int result = pow(base, power);

	cout << "result is:" << result << endl;


	/*
	int number = read_int();
	
	if (is_prime(number)) {
		cout << "Number is prime" << endl;
	}
	else {
		cout << "Number isnt prime" << endl;
	}
	*/

	return 0;
}