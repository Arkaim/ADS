#include <iostream>
#include <algorithm>


using namespace std;

struct dragon {
	int s;
	int y;
};
bool cmp (const dragon& left, const dragon& right) {
	return left.s < right.s;
}
int main() {
	int playerS, n;
	cin >> playerS >> n;
	dragon d [1000];
	for (int i = 0; i < n; i++) {
		cin>>d[i].s >> d[i].y;
	}
	sort (d, d+n, cmp);

	int boss = d[n-1].s;
	for (int i = 0; i < n && playerS <= boss; i++) {
		if(playerS > d[i].s) {
			playerS += d[i].y;
		}
		else {
			break;
		}
	}
	if(playerS>boss) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
