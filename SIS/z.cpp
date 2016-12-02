#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int cnta=0;
	int cntb=0;
	string a;
	cin>>a;
	for(int i=0; i<a.length(); i++){
		if(a[i] == ')'){
			cntb++;
		}else{
			cnta++;
		}
	}
	int answer = abs(cnta-cntb);
	cout<<answer;
	return 0;
}








