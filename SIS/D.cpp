#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;



int main()
{
    int s[500],a[500], sum[500];
    int n;
    cin>>n;
    {
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            sum[i]=sum[i-1]+a[i];
        }
        a[n+1]=-1;
        int ans=-1,temp;
        int top=0,l,r;
        for(int i=1;i<=n+1;i++)
        {
            while(top!=0 && a[s[top]]>a[i])
            {
                temp=a[s[top]]*(sum[i-1]-sum[s[top-1]]);
                if(ans<temp)
                {
                    ans=temp;
                    l=s[top-1]+1;
                    r=i-1;
                }
                top--;
            }
            top++;
            s[top]=i;
        }
        cout<<ans<<endl;;
        cout<<l<<" "<<r<<endl;

    }
    return 0;
}
