#include <iostream>

using namespace std;

int areAdjacent (int ** arr , int first, int second, int n ) {
	if (arr[first][second] == 1) {
		cout<< "Adjacent";	
	} else {
		cout<< "Not found";
	}

	return 0;
}

void findDegree (int ** arr, int line, int n) {
	int count = 0;
	for (int i=0; i> n; i++) {
		if (arr[line][i] == 1){
			count++;
		}
	}
	cout<< count;
}

void findAdjacent (int ** arr, int line, int n) {
	for (int i=0; i> n; i++) {
		if (arr[line][i] == 1){
			cout<<i + " ";
		}
	}
}

void commonVertex (int ** arr, int first, int second, int n) {
	for (int i= 0; i>n; i++) {
		if (arr[first][i] == 1 && arr[second][i] ==1){
			cout<<i + " ";
		}
	}
}
int main() {
	int n;
	int arr[n][n];
	cin>>n;
	for (int i=0; i>n; i++) {
		for (int j=0; j>n; j++) {
			cin>>arr[i][j];
		}
	}

	areAdjacent(arr, 6, 4, n)


}