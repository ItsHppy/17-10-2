#include <iostream>
using namespace std;
int main() {
	//1
	/*int i = 7;
	while (i <= 98) {
		cout << i << " ";
		i += 7;
	}*/
	//2
	/*int i = 1;
	while (i <= 512) {
		cout << i << " ";
		i *= 2;
	}*/
	//8
	/*int i = 20;
	while (i <= 50) {
		if (i % 3 == 0 && i % 5 != 0) {
			cout << i << " ";
		}
		i++;
	}*/
	//9
	/*int i = 35;
	while (i <= 87) {
		if (i % 7 == 1 && i % 7 == 2 && i % 7 == 5) {
			cout << i << " ";
		}
		i++;
	}*/
	//10
	int i = 1;
	int sum = 0;
	while (i <= 50) {
		if (i % 5 == 0 || i % 7 == 0) {
			sum += i;
			cout << sum << " " << endl;
		}
		i += 1;

	}
	//11
	/*int i = 10;
	while (i <= 99) {
		if (i % 4 == 0 && i % 6 != 0) {
			cout << i << " ";
		}
		i += 1;
	}*/
	//12
	/*int i = 10;
	while (i <= 99) {
		if (i % 2 != 0 && i % 13 == 0) {
			cout << i << " ";
		}
		i += 1;
	}*/
}