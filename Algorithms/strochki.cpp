#include <iostream>
#include <string>
using namespace std;
string s1, s2;
int n;
bool equal(int l) {
	for (int i = 0; i < n; i++) {
		if (s1[i] != s2[(l + i) % n]) {
			return false;
		}
	}
	return true;
}
int main()
{
	int min = -1;
	cin >> s1;
	n = s1.length();
	cin >> s2;
	for (int i = n - 1; i >= 0; i--) {
		if (equal(i)) {
			min = i;
		}
	}
	cout << min;
}