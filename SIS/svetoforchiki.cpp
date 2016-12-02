#include <iostream>
#include <vector>

using namespace std;
int n, m, x, y;
vector<int> v[110];

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; ++i){
        cin >> x >> y;
        x--;
        y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for (int i = 0; i < n; ++i){
        cout << v[i].size() << " ";
    }

    return 0;
}
