#include<iostream>
using namespace std;
int sum(short a[], int n) {
   int sum = 0;
   for (int i = 0; i < n; i++)
      sum += a[i];

   return sum;

}
int main() {
   int n1, n2, n3, w1, w2, w3, t1 = 0, t2 = 0, t3 = 0, maxi = 0;
   cin>>n1>>n2>>n3;
   short a[n1], b[n2], c[n3];
   for (int i = n1 - 1; i >= 0; i--)
      cin>> a[i];
   for (int i = n2 - 1; i >= 0; i--)
      cin>> b[i];З
   for (int i = n3 - 1; i >= 0; i--)
      cin>> c[i];
   w1 = sum(a, n1);
   w2 = sum(b, n2);
   w3 = sum(c, n3);
   cout<<w1<<" "<<w2<<" "<<w3<<" "<<endl;
   while (w1 != w2 || w1 != w3 || w2 != w3) {
      maxi = max(max(w1, w2), w3);
      if (w1 == maxi)
         w1 = sum(a, —n1);
      else if (w2 == maxi)
         w2 = sum(b, —n2);
      else if (w3 == maxi)
         w3 = sum(c, —n3);
   }
   cout<<w1;
   return 0;
}