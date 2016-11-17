#include <iostream>
#include <stack>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
  srand ( time(NULL) ); 
  int arrayNum[4] = {'1', '3', '7', '9'};
  
	for (int i=0; i<3; i++ ){
 		int RandIndex = rand() % 4;
 		int length = 4;
		for (int i = RandIndex; i < length; i++)
			arrayNum[RandIndex] = arrayNum[RandIndex+1];
			arrayNum[length-1] = 0;

	}
	for (int j=0; j<3; j++){
	cout<<arrayNum[j];	
	}
	

}
