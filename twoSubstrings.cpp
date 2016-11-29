#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	string srt;
	int x, y, a[999], b[999];
	cin >> srt;

	for (int i = 1; i < srt.size(); i++) {
		if (srt[i] == 'B' && srt[i - 1] == 'A')
			a[++x] = i;
		else if (srt[i] == 'A' && srt[i - 1] == 'B')
			b[++y] = i;
  }

	if ((abs(a[1] - b[y]) > 1 || abs(a[x] - b[1]) > 1) && x > 0 && y > 0)
		cout << "YES";
	else
		cout << "NO";
}
