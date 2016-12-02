#include <iostream>
#include <vector>

using namespace std;

vector<int> v[100100], comps[100100];
int used[100100];

int n, m, x, y, cnt;

void dfs(int val, int par){
    used[val] = 1;

    for(int i = 0; i < v[val].size(); ++i){
        if(v[val][i] != par){
            if(used[v[val][i]] != 0){
                used[v[val][i]]++;
            } else if(used[v[val][i]] == 0){
                dfs(v[val][i], val);
            }
        }
    }
}
int main(){
    cin >> n;

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> x;
            if(x == 1){
                v[i].push_back(j);
            }
        }
    }

    dfs(0, -1);

    for (int i = 0; i < n; ++i){
        if(used[i] > 1 || !used[i]){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
