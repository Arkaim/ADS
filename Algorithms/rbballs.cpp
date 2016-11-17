#include <stack>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str;
	stack<char> st;
	int counter = 0;
	cin>>str;
	for (int i = str.size() - 1; i >= 0; i--)
	{
		if (str[i] == 'R')
			counter++;
		st.push(str[i]);
	}
	
	int ans = 0;
	
	while(!st.empty())
	{
		if(st.top() == 'R')
		{
			st.pop();
		}
		else if (st.top() == 'B')
		{
			ans++;
			st.pop();
			st.push('R');
			while(st.size() != n)
			{
				st.push('B');
			}
		}
	}
	cout<<ans<<endl;


	return 0;
}