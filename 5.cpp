
#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int count = 0;
	char a[100];

	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	cin.getline(a, 100, '\n');

	for (int i = 0; i < 100; i++) {
		if (a[i] == 'x') {
			count++;
		}
	}
	cout << "x�� ������ " << count;

	return 0;
}
