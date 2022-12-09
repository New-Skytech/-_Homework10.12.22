#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int N, K, fish;
    bool flag;
    fin >> N >> K;
    fish = N;
    while (true)
    {
        fish++;
        int temp = fish;
        flag = true;
        for (int i = 0; i < N; i++)
        {
            if ((temp - 1) % N == 0)
            {
                temp = temp - (temp - 1) / N - 1;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            fout << fish;
            break;
        }
    }
    fout.close();
    fin.close();
}
