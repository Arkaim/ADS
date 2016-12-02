// http://informatics.mccme.ru//mod/statements/view3.php?id=359&chapterid=466#1

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

#define pb push_back

int n, x;

vector<int> v[150];

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            scanf("%d", &x);
            if(x == 1)
                v[i].pb(j);
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < v[i].size(); ++j){
            printf("%d %d\n", i + 1, v[i][j] + 1);
        }
    }
    return 0;
}
