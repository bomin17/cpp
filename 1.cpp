
#include<iostream>
using namespace std;
int main() {
	int i, j, p=0;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			p++;
			cout << p << "\t";
		}
		cout << "\n";
	}
	return 0;
}
