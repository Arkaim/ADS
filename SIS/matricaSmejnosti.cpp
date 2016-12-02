// http://informatics.mccme.ru//mod/statements/view3.php?id=359&chapterid=463#1

#include <iostream>
using namespace std;
int n, x, cnt;

int main(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> x;
            if(x == 1)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}
