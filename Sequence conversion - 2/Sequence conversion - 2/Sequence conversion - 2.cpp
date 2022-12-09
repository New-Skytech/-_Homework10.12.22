#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main() 
{
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int cur = 1, max = 0, minn = 0, n = 0;

    fin >> n;

    vector<int> a(n), s(n);

    for (int i = 0; i < n; i++) {
        fin >> a[i];
        s[i] = a[i];
    }
    sort(s.begin(), s.end());
    s.push_back(-1000);
    for (int i = 0; i < n; i++) {
        if (s[i] != s[i + 1]) {
            if (cur > max) {
                max = cur;
                minn = s[i];
            }
            cur = 1;
        }
        else cur++;
    }
    for (int i = 0; i < n; i++)
        if (a[i] != minn)
            fout << a[i] << ' ';
    for (int i = 0; i < max; i++) fout << minn << ' ';
    return 0;
    fout.close();
    fin.close();
}