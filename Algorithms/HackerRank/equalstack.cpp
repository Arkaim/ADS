#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;
ll ma=-999,mi=1000000000000;
ll n1,n2,n3,i,j,ii,in=-1,cnt,sum1,sum2,sum3,k,m,ss1,ss2,ss3;
map<ll,ll>mapp;
vector<ll>vi1,vi2,vi3;
ll x,y,l,r;
pair<ll,char>p[26];
string s,s1,s2;
ll a[10000];
int main(){
    ios_base::sync_with_stdio(0);
    cin>>n1>>n2>>n3;
    for(i=0;i<n1;i++){
        cin>>k;
        vi1.push_back(k);
        sum1+=k;
    }
    for(i=0;i<n2;i++){
        cin>>k;
        vi2.push_back(k);
        sum2+=k;
    }
    for(i=0;i<n3;i++){
        cin>>k;
        vi3.push_back(k);
        sum3+=k;
    }
    if(sum1==sum2 && sum3==sum1){
        cout<<sum1;
        return 0;
    }
    for(i=0;i<n1;i++){
            ss1+=vi1[i];
            for(j=0;j<n2;j++){
                ss2+=vi2[j];
                if(sum1-ss1>sum2-ss2){
                    ss2=0;
                    break;
                }
                if(sum1-ss1==sum2-ss2){
                    for(ii=0;ii<n3;ii++){
                        ss3+=vi3[ii];
                        if(sum1-ss1>sum3-ss3){
                            ss3=0;
                            break;
                        }
                        if(sum1-ss1==sum3-ss3){
                            cout<<sum1-ss1;
                            return 0;
                        }
                    }
                }
            }
    }
}