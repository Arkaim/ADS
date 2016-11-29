#include <fstream>
int main() {
    using namespace std;
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    int **a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
            in >> a[i][j];
    }
    int *src = new int[n]; for (int i = 0; i < n; i++) src[i] = 0;
    int *des = new int[n]; for (int i = 0; i < n; i++) des[i] = 0;
    int csrc = 0, cdes = 0;
    int f1, f2;
    for (int i = 0; i < n; i++) {
        f1 = f2 = 0;
        for (int j = 0; j < n; j++) // sum of line
            f1 += a[i][j];
        for (int j = 0; j < n; j++)
            f2 += a[j][i];
        if (f1 == 0) {
            cdes++;
            des[i] = i + 1;
        }
        if (f2 == 0) {
            csrc++;
            src[i] = i + 1;
        }
    }
    out << csrc;
    for (int i = 0; i < n; i++)
        if (src[i] != 0) out << ' ' << src[i];
    out << endl << cdes;
    for (int i = 0; i < n; i++)
        if (des[i] != 0) out << ' ' << des[i];
    in.close();
    out.close();
    for (int i = 0; i < n; i++)
        delete [] a[i];
    delete [] a;
    return 0;
}
