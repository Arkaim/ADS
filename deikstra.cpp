#include <iostream>
using namespace std;
int main()
{
	int infinite=99999;
	int matrix[1000][1000];
	int n,s,f;
	cin>>n>>s>>f;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)	{
			cin>>matrix[i][j];
			if(matrix[i][j]==-1) {
				matrix[i][j]=infinite;
			}
		}
	for (int k=1; k<=n; ++k)
		for (int i=1; i<=n; ++i)
			for (int j=1; j<=n; ++j)
				if ( matrix[k][j] < infinite && matrix[i][k] < infinite) {
					matrix[i][j] = min (matrix[i][j], matrix[i][k] + matrix[k][j]);
				}
	if(matrix[s][f]==infinite)
		cout<<-1;
	else
		cout<<matrix[s][f];
	return 0;
}
