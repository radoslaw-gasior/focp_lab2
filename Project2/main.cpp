#include <iostream>
#include <fstream>
#include <string>

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

int fibonacci_iter(int index) {
	int a = 0;
	int b = 1;

	if (index == 0 || index==1) {
		return index;
	}
	else {
		for (int i = 2; i < index; i++) {

			int temp = a + b;
			a = b;
			b = temp;
		}
		return b;
	}
}

int fibonacci_rec(int index) {
	if (index < 2) {
		return index;
	}

	return fibonacci_rec(index - 2) + fibonacci_rec(index - 1);
}

int main() {

	ofstream file;
	file.open("file.txt");
	
	file << "Hope it works\n";
	file << "Hope it works\n";
	file << "Hope it works\n";

	file.close();



	ifstream newfile("file.txt");

	if (newfile.is_open()) {
		//read

		string line;
		while (getline(newfile, line)) {
			cout << line << endl;
		}
		newfile.close();
	}
	else {
		cout << "There was a problem" << endl;
	}

	/*
	int index = read_int();
	int res = fibonacci_rec(index-1);
	cout << "result is:" << res << endl;
	*/


	/*
	int index = read_int();
	int res = fibonacci_iter(index);
	cout << "result is:" << res << endl;
	*/

	/*
	int base = read_int();
	int power = read_int();
	int result = pow(base, power);

	cout << "result is:" << result << endl;
	*/

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