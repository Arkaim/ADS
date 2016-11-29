#include <iostream>
#include <string>

using namespace std;

int main()
{
  int playersNear = 1;
  string str;
  cin>>str;
  for (int i = 1; i < str.length(); ++i)
    if (str[i] == str[i - 1]) {
      playersNear += 1;
      if (playersNear == 7) {
        cout << "YES";
        return 0;
      }
    }
    else
      playersNear = 1;
  cout << "NO";
  return 0;
}
