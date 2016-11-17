#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

static int RabinKarp (string p, string t) {
	int M = p.length();
	int N = t.length();
	int dM = 1, h1 = 0, h2 = 0;
	int q = 17111997;
	int d = 256;

	for (int j = 1; j< M; j++) {
		dM = (d * dM) % q;
	}

	for (int j = 0; j < M; j++) {
		h1= (h1*d +p.at(j)) %q;
		h1= (h2*d +p.at(j)) %q;
	}

	if (h1 == h2) {
		return (j - M);
	}

	for (int i = M; i<N; i++) {
		h2 = (h2 - t.at(i-M)) % q;
		h2 = (h2*d + t.at(i)) % q;

		if (h1 == h2)
		{
			return i-M;
		}

	}

	return -1;
}
int main(int argc, char const *argv[])
{
	string f = "ababababaaca";
	string b = "aba";
	int p = RabinKarp(f,b);
	cout<<p;
	return 0;
}