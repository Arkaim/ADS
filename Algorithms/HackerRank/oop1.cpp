#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
queue<int> qu;
void get_all_factors(int N)
{
	int i=2;
	int sqr  = sqrt((double)N)+1;
	while(true && i<sqr)
	{
		if(i==N || N==1) break;
		if(N %i==0)
			qu.push(N/i);
		i++;
	}
}
int main(){
 
int Q;
cin>>Q;
for(int i=0;i< Q;i++){
	int N, path=0;
	cin>>N;
 
	qu.push(N);
	qu.push(-1);
 
	while(!qu.empty())
	{
		int temp = qu.front();qu.pop();
		if(temp == -1)
		{
			path++;
			temp= qu.front(); qu.pop();
			qu.push(-1);
		}
 
		get_all_factors(temp);
	if(temp-1 ==0)
	{
	path++;
	break;	
	} 
	qu.push(temp-1);
 
	}
	cout<<path<<endl;
	//make queue clear
	qu= queue<int>();
}
	return 0;
}
