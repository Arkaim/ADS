#include <iostream>
#include <algorithm>
using namespace std;
int partition(int *a, int s, int e)
{
	int i;
	int j;
	int t;
	i = s - 1;
	for (j = s; j < e; j++) {
		if (a[j] < a[e]) {
			i++;
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	i++;
	t = a[i];
	a[i] = a[e];
	a[e] = t;
	return i;
}
void quicksort(int *a, int s, int e)
{
	int k;
	if (s < e) {
		k = partition(a, s, e);
		quicksort(a, s, k - 1);
		quicksort(a, k + 1, e);
	}
}
int main()
{
    int n, m, l, r, type;
    int v[100002];
    int u[100002];
    int i;
    unsigned long long int sum;
    unsigned long long int sum1[100002];
    unsigned long long int sum2[100002];
    int j;
    cin >> n;
    v[0] = 0;
    u[0] = 0;
    for (i = 1; i <= n; i++) {
            cin >> v[i];        
    }
    for (i = 1; i <= n; i++) {
            u[i] = v[i];        
    }
    
    cin >> m;
    
    sort(u, u + n);
    sum1[0] = 0;
    sum2[0] = 0;
    for (i = 1; i <= n; i++) {
            sum1[i] = sum1[i - 1] + v[i];
            sum2[i] = sum2[i - 1] + u[i];
    }
    
    for (i = 0; i < m; i++) {
        cin >> type >> l >> r;   
        if (type == 1) {
                for (j = l -1; j < r; j++) {
                        sum = sum1[r] - sum1[l - 1];
                }
        } else if (type == 2) {
                for (j = l - 1; j < r; j++) {
                        sum = sum2[r] - sum2[l - 1];       
                }
        }     
        cout << sum << endl;
}
return 0;
}
