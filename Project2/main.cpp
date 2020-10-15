#include <iostream>

using namespace std;

int main() {

	//prime testing function

	int number;

	cout << "Enter number fo testing" << endl;
	cin >> number;

	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			cout << "Number is not prime" << endl;
			return 0;
		}

	}

	cout << "Number is prime" << endl;

	return 0;
}