#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  int m;
  int res = 0;
  cin>>m>>n;
  for (int i; n != m; res++) {
    if (n % 2 == 1 || n < m)
      n++;
    else
      n /= 2;
  }
  cout<<res;
  return 0;
}
