#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int arr[100];
void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
int main () {
	int n;
	int l;
	cin>>n;
	cin>>l;
	long double ras=0;
	int max = 0;
	int arr [n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	quickSort (arr,0, n-1);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<' ';
		cout<<endl;
 
	for(int i=0;i<=n-1;i++)
		if (i==0) {
			ras = arr[i];
		}
		else if(arr[i+1]-arr[i]>ras) {

			ras=(arr[i+1]-arr[i]);
			ras = ras/2;
		}else if( i == (n-1) && l - arr[i] > ras ) {
			ras = l- arr[i];
		}



		// if (i==0) {
		// 	max = arr [i];
		// }
		// // else if (max < arr[i+1]- arr[i] ) {
		// // 	max = arr[i+1]- arr[i];
		// // }
		// // else if (i == n && max < l -arr[i]) {
		// // 	max = l - arr[i];
		// // }
	
	cout<<ras;
	return 0;
}