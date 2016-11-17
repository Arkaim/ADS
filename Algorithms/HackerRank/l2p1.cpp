#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int N;
	int arr[N];
	//int count = 0;
	cout<<"How many elements?";
	cin>>N;
	cout<<"Input elements";
	for(int i = 0; i<N; i++) {
		cin>>arr[i];
	}
	int tmp = N;
	int del = (rand() % tmp)+ 1;

		for (int i = del; i < tmp; ++i)
		{
			
			if (arr[i] == del) {
				for(int j=i; j<(N-1); j++)
				{
					arr[j]=arr[j+1];
					count++;
				}
			}

		}
		tmp--;
	
			for(int i=0; i<(N-1); i++)
			{
				cout<<arr[i]<<" ";
			}
	
}
	
