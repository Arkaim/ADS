// http://informatics.mccme.ru/moodle/mod/statements/view3.php?id=359&chapterid=470#1

#include <iostream>
using namespace std;

int a[150][150], n;

int main(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        int cnt = 0;
        for(int j = 0; j < n; ++j){
            int x;
            cin >> x;
            cnt += x;
        }
        cout << cnt << endl;
    }
    return 0;
}
