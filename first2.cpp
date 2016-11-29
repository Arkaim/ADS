#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a[10^5];
  string str;
  int len;
  cin >> str;
  len = str.length();
  int k=1;
  int num = 1;
  for(int i=0; i<len; i++)
  {
      a[0] = str[0]-'0';
      if(str[i]=='+') {
          a[k] = str[i+1]-'0';
          k++;
          num++;
      }
  }
  sort(a, a+k);
  for(int k=0; k<num; k++) {
      cout << a[k];
      if(k==(num-1)) {
          break;
      }
      cout <<"+";
  }
}
