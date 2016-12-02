// http://informatics.mccme.ru/moodle/mod/statements/view.php?id=259#1

#include <iostream>

using namespace std;
int n, cnt, x;
int main(){
	cin >> n;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			cin >> x;
			if(x == 1){
				cnt++;
			}
		}
	}
	cout << cnt / 2;
	return 0;
}
