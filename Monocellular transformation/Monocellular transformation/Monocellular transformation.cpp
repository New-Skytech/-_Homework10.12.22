#include <iostream>
#include <fstream>

using namespace std;


int Max(int x, int y)
{
    if (x <= y)
    {
        return y;
    }
    else
    {
        return x;
    }
}

int Min(int x, int y)
{
    if (x >= y)
    {
        return y;
    }
    else
    {
        return x;
    }
}

int IsPrimal(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int NOD(int x, int y)
{
    int min = Min(x, y);
    int max = Max(x, y);
    if (max % min == 0)
    {
        return min;
    }
    for (int i = min / 2; i > 1; i--)
    {
        if (max % i == 0)
        {
            return i;
        }
    }
}



int main()
{
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int N, M, divN = 0, divM = 0;
    fin >> N >> M;
    int nod = NOD(N, M);
    N = N / nod;
    M = M / nod;
    for (int i = N; i > 1; i--)
    {
        while (N % i == 0 and IsPrimal(i))
        {
            N = N / i;
            divN++;
        }
    }
    for (int i = M; i > 1; i--)
    {
        while (M % i == 0 and IsPrimal(i))
        {
            M = M / i;
            divM++;
        }
    }
    fout << abs(divM - divN);
    fin.close();
    fout.close();
}