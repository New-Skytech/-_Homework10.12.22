#include <iostream>
#include<fstream>
#include <set>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    string s, s1;
    int k = 0;
    fin >> s >> s1;
    set<string> a;
    for (int i = 0; i < s1.size(); ++i) {
        a.insert(s1.substr(s1.size() - i - 1) + s1.substr(0, s1.size() - i - 1));
    }
    for (auto i : a) {
        int pos = s.find(i);
        while (pos + 1) {
            ++k;
            pos = s.find(i, pos + 1);
        }
    }
    fout << k;
    fout.close();
    fin.close();
}