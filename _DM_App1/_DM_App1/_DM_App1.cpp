#include <iostream>

using namespace std;

int main() {
	int buff = 0;
	int Array[8] = { 4, 11, 18, 0, 10, 3, 5, 9 };
	while (1) {
		for (int i = 0; i < 8; i++) {
			if (Array[i] < Array[i + 1]) {
				buff = Array[i];
				Array[i] = Array[i + 1];
				Array[i + 1] = buff;
			}
			for (int j = 0; j < 8; j++) {
				cout << Array[j] << ' ';
			}
			cout << '\n';
		}
	}
}