#include<iostream>
#include<cstring>
#include<cstdio>
#define d 256                
using namespace std;
void search(char * txt, char * pat, int q) {
  int m = strlen(pat);
  int n = strlen(txt);

  int i, j;
  int p = 0; 
  int t = 0; 
  int h = 1; 

  for (i = 0; i < m - 1; i++) {
    h = (d * h) % q;
  }

  for (i = 0; i < m; i++) {
    p = (d * p + pat[i]) % q;
    t = (d * t + txt[i]) % q;
  }

  for (i = 0; i <= n - m; i++) {
    if (t == p) {
      for (j = 0; j < m; j++) {
        if (txt[i + j] != pat[j]) {
          break;
        }
      }
      if (j == m) cout << i << " " << endl;
    }
    if (i < n - m) {
      t = (d * (t - txt[i] * h) + txt[i + m]) % q;


      if (t < 0)
        t = (t + q);
    }
  }
}

int main() {
  char a[500], b[500];
  gets(a);
  gets(b);
  int q = 13; 
  search(a, b, q);
  return 0;
}