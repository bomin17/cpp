
#include<iostream>
using namespace std;
int main() {
	int a, b, m=0;

	cout << "두 수를 입력하라>>";
	cin >> a;
	cin >> b;

	if (a > b) {
		m = a;
	}
	if (b > a) {
		m = b;
	}
	cout << "큰 수 = " << m;

	return 0;
}
