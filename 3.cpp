
#include<iostream>
using namespace std;
int main() {
	int a, b, m=0;

	cout << "�� ���� �Է��϶�>>";
	cin >> a;
	cin >> b;

	if (a > b) {
		m = a;
	}
	if (b > a) {
		m = b;
	}
	cout << "ū �� = " << m;

	return 0;
}
