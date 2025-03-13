
#include<iostream>
using namespace std;
int main() {
	float max;
	double numbers[5];


	cout << "5개의 실수를 입력하라>>";
	for (int i = 0; i < 5; i++) {
		cin >> numbers[i];
	}
	max = numbers[0];
	for (int j = 0; j < 5; j++) {
		if (numbers[j] > max) {
			max = numbers[j];
		}
	}

	cout << "제일 큰 수 = " << max;

	return 0;
}
