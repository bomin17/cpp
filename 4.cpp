
#include<iostream>
using namespace std;
int main() {
	float max;
	double numbers[5];


	cout << "5���� �Ǽ��� �Է��϶�>>";
	for (int i = 0; i < 5; i++) {
		cin >> numbers[i];
	}
	max = numbers[0];
	for (int j = 0; j < 5; j++) {
		if (numbers[j] > max) {
			max = numbers[j];
		}
	}

	cout << "���� ū �� = " << max;

	return 0;
}
