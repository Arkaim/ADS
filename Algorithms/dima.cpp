#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
int N,A[100001],B[100001];
vector<pair<int,int> > P;

void solve() {
    int f,i,j,k,l, x,y;
    
    cin>>N;
    FOR(i,N){
        cin>>A[i];
        if(A[i]!=0) P.push_back(make_pair(A[i],i));
        else {
            sort(P.begin(),P.end());
            FOR(j,3) {
                if(!P.empty()) {
                    B[P.back().second]=1;
                    P.pop_back();
                }
            }
            P.clear();
        }
    }
    
    j=0;
    FOR(i,N) {
        if(A[i]==0) {
            _P("%d",j);
            if(j==3) _P(" popStack popQueue popFront");
            else if(j==2) _P(" popStack popQueue");
            else if(j==1) _P(" popStack");
            _P("\n");
            j=0;
        }
        else if(B[i]) {
            if(j==0) _P("pushStack\n");
            if(j==1) _P("pushQueue\n");
            if(j==2) _P("pushFront\n");
            j++;
        }
        else{
            _P("pushBack\n");
        }
    }
}
