#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

string str;
int cnt = 0;
int strlen(string str) { 
      int i=0;
      while(str[i++]) ;
      return i-1;
};


void palindrom( string str) { 

        int word = 0;
        int left_index = 0;
        int right_index = strlen(str)-1;

        for ( int i = 0; i < strlen(str); i++) {
          if (str[left_index] == str[right_index]) {
            word ++;
          }
          left_index++;
          right_index--;
        if (word == strlen(str)) {
            cnt++;
        }
        }

};

void Split(string str){
  int count = strlen(str);
  for (int i = 0; i<=strlen(str); i++){
    for(int j = 0; j<=count; j++) {
      string splt = str.substr(i, j);
      palindrom(splt);
    }
    count--;
  }
}
int main() {
  string str;
  cin>>str;
  Split(str);
  cout<<cnt;
}

