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
	int number;

	cout << "Enter number fo testing" << endl;
	cin >> number;

	return number;
}


int main() {

	//prime testing function

	int number = read_int();

	if (is_prime(number)) {
		cout << "Number is prime" << endl;
	}
	else {
		cout << "Number isnt prime" << endl;
	}
	

	return 0;
}