#include <iostream>
#include <fstream>
#include <string>
#include<vector>

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

	cout << "How many numbers?" << endl;

	int numbers = read_int();

	vector<int> values;

	for (int i=0; i < numbers; i++) {
		int  temp = read_int();
		values.push_back(temp);
	}

	ofstream file;
	file.open("values.txt");	//file.open("values.txt", ios_base::app); for adding to file

	for (int i = 0; i < numbers; i++) {
		file << values[i]<<"\n";
	}

	file.close();

	vector<int>read_values;

	ifstream newfile("values.txt");

	if (newfile.is_open()) {

		string line;

		while (getline(newfile, line)) {
			read_values.push_back(stoi(line));	//converting string to int
		}
		newfile.close();
	}
	else {
		cout << "There was a problem" << endl;
	}

	float sum = 0;

	for (int i = 0; i < numbers; i++) {
		sum += read_values[i];
	}

	float mean = sum / numbers;
	cout << "mean=" << mean << endl;

	/*
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
*/

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