#include <stdio.h>
#include <iostream>
#include <fstream>
#include <random>
using namespace std;

class Knuth {
	
public:
	ofstream f;
	static int k2(unsigned long long x);
	static int k3(unsigned long long x, ofstream &f);
	static int k4(unsigned long long x, ofstream &f);
	static int k5(unsigned long long x, ofstream &f);
	static int k6(unsigned long long x, ofstream &f);
	static int k7(unsigned long long x, ofstream &f);
	static int k8(unsigned long long x, ofstream &f);
	static int k9(unsigned long long x, ofstream &f);
	static int k10(unsigned long long x, ofstream &f);
	static int k11(unsigned long long x, ofstream &f);
	static int k12(unsigned long long x, ofstream &f);
};
int Knuth:: k2(unsigned long long x) {
	unsigned long long z;
	z = (x / 100000000) % 10;
	int pas;
	pas = z+3;
	//printf("pas: ");
	//cout<< pas;
	return pas;
}
int Knuth:: k3(unsigned long long x, ofstream &f) {
	if (x < 5 * 1000000000)
		x = x + 5 * 1000000000;
	cout << endl << x;
	//f << x << endl;
	Knuth::k4(x,f);
	return x;
}
int Knuth::k4(unsigned long long x, ofstream &f) {
	x = ((x * x) / 10000) % 10000000000;
	cout << endl << x;
	//f << x << endl;
	Knuth::k5(x,f);
	return x;
}
int Knuth::k5(unsigned long long x, ofstream &f) {
	x = (1001001001 * x) % 10000000000;
	cout << endl << x;
	//f << x << endl;
	Knuth::k6(x,f);
	return x;
}
int Knuth::k6(unsigned long long x, ofstream &f) {
	if (x < 100000000)
		x = x + 9814055677;
	else
		x = 10000000000 - x;
	cout << endl << x;
	//f << x << endl;
	Knuth::k7(x,f);
	return x;
}
int Knuth::k7(unsigned long long x, ofstream &f) {
	x = 100000 * (x % 100000) + x / 100000;
	cout << endl << x;
	//f << x << endl;
	Knuth::k8(x,f);
	return x;
}
int Knuth::k8(unsigned long long x, ofstream &f) {
	x = (1001001001 * x) % 10000000000;
	cout << endl << x;
	//f << x << endl;
	Knuth::k9(x,f);
	return x;
}
int Knuth::k9(unsigned long long x, ofstream &f) {
	int digit, i, new_nr=0;
	vector<int> digits;
	while (x > 0) {
		digit = x % 10;
		x /= 10;
		if (digit != 0) {
			digit--;
		}
		else
			digit = digit;
		digits.push_back(digit);
	}
	reverse(digits.begin(), digits.end());
	new_nr = digits[0] * 1000000000 + digits[1] * 100000000 + digits[2] * 10000000 + digits[3] * 1000000 + digits[4] * 100000 + digits[5] * 10000 + digits[6] * 1000 + digits[7] * 100 + digits[8] * 10 + digits[9];
	x = new_nr;
	cout << endl << x;
	//f << x << endl;
	Knuth::k10(x,f);
	return x;
	
}
int Knuth::k10(unsigned long long x, ofstream &f) {
	if (x < 100000)
		x = x * x + 99999;
	else
		x = x - 99999;
	cout << endl << x;
	//f << x << endl;
	Knuth::k11(x,f);
	return x;
}
int Knuth::k11(unsigned long long x, ofstream &f) {
	while (x < 1000000000)
		x = 10 * x;
	cout << endl << x;
	//f << x << endl;
	Knuth::k12(x,f);
	return x;
}
int Knuth::k12(unsigned long long x, ofstream &f) {
	x = (x * (x - 1) / 100000) % 10000000000;
	cout << endl << x;
	//f << x << endl;
	Knuth::k2(x);
	return x;
}

int main() {
	ofstream f("numere.txt");
	//f << x << endl;
	f.close();
	unsigned long long x;
	int y, counter=0;
	int dyn_step, stat_step;
	printf("Nr de start: ");
	std::cin >> x;
	cout << endl;
	while (counter < 100) {
		stat_step = Knuth::k2(x);
		switch (stat_step) {
		case 3:
			x = Knuth::k3(x, f);
			break;
		case 4:
			Knuth::k4(x, f);
			break;
		case 5:
			Knuth::k5(x, f);
			break;
		case 6:
			Knuth::k6(x, f);
			break;
		case 7:
			Knuth::k7(x, f);
			break;
		case 8:
			Knuth::k8(x, f);
			break;
		case 9:
			Knuth::k9(x, f);
			break;
		case 10:
			Knuth::k10(x, f);
			break;
		case 11:
			Knuth::k11(x, f);
			break;
		case 12:
			Knuth::k12(x, f);
			break;
		}
		counter++;
	}

}


