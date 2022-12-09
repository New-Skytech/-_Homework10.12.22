#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

void Print(int* mas, int n) {
    int o = 0;
    int i = 99;
    if (mas[201]) {
        while (i >= 0 and o < n) {
            if (mas[i] > 0) {
                if (i >= 100) {
                    for (int j = mas[i]; j > 0; j--) {
                        cout << i - 100 << endl;
                        o++;
                    }
                }
                else {
                    for (int j = mas[i]; j > 0; j--) {
                        cout << i * -1 - 1 << endl;
                        o++;
                    }

                }
            }
            --i;
        }
    }
    i = 100;
    while (i < 201 and o < n) {
        if (mas[i] > 0) {
            if (i >= 100) {
                for (int j = mas[i]; j > 0; j--) {
                    cout << i - 100 << endl;
                    o++;
                }
            }
            else {
                for (int j = mas[i]; j > 0; j--) {
                    cout << i * -1 - 1 << endl;
                    o++;
                }

            }
        }
        ++i;
    }
}

int main() {
    int n;
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    fin >> n;

    int* mas = new int[202] { 0 };
    int i = 0, tr = 0, a;
    while (i < n) {
        fin >> a;
        if (a >= 0) {
            a += 100;
            mas[a]++;
        }
        else {
            mas[a * -1 - 1]++;
            tr = 1;
        }
        ++i;
    }
    mas[201] = tr;
    int o = 0;
    i = 99;
    if (mas[201]) {
        while (i >= 0 and o < n) {
            if (mas[i] > 0) {
                if (i >= 100) {
                    for (int j = mas[i]; j > 0; j--) {
                        fout << i - 100 << " ";
                        o++;
                    }
                }
                else {
                    for (int j = mas[i]; j > 0; j--) {
                        fout << i * -1 - 1 << " ";
                        o++;
                    }

                }
            }
            --i;
        }
    }
    i = 100;
    while (i < 201 and o < n) {
        if (mas[i] > 0) {
            if (i >= 100) {
                for (int j = mas[i]; j > 0; j--) {
                    fout << i - 100 << " ";
                    o++;
                }
            }
            else {
                for (int j = mas[i]; j > 0; j--) {
                    fout << i * -1 - 1 << " ";
                    o++;
                }

            }
        }
        ++i;
    }
}