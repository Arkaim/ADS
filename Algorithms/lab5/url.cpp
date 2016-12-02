#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void prefixKMP(string T, int f[]){
    int m = T.length();
    int k;
    f[0] = -1;
    for(int i = 1; i<m; i++){
        k=f[i-1];
        while(k>=0){
            if(T[k] == T[i-1]){
                break;
            } else{
                k = f[k];
            }
        }
        f[i] = k+1;
    }
}

bool KMPcheck(string T, string S){
    int m = T.length();
    int n = S.length();
    int tmp[m];
    int z = 0;

    prefixKMP(T, tmp);
    int i=0;
    int k=0;
    while(i<n){
        if(k==-1){
            i++;
            k=0;
        }

        else if(S[i]==T[k]){
            i++;
            k++;
            if(k==m){
            return 1;
            }
        } else{
            k = tmp[k];
        }
    }
    return 0;
}

int main(){
	string S, T;
	cin>>S>>T;

	std::transform(S.begin(), S.end(), S.begin(),(int (*)(int))tolower);
	std::transform(T.begin(), T.end(), T.begin(),(int (*)(int))tolower);


	if(KMPcheck(S,T)||KMPcheck(T,S)){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;;
	}

}
