#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("INPUT.txt");
	ofstream fout;
	fout.open("OUTPUT.txt");
	int tranzaction, count;

	fin >> tranzaction;

	if (tranzaction % 100 == 0)
	{
		count = tranzaction / 100;
	}
	else
	{
		count = tranzaction / 100 + 1;
	}

	if (tranzaction % 100 > count * 7)
	{
		if (tranzaction % 100 > (count + 1) * 7)
		{
			cout << (tranzaction - count * 7);
		}
		else
		{
			cout << (tranzaction - (count - 1) * 7);
		}
	}
	else
	{
		if (tranzaction % 100 > (count * 7))
		{
			cout << tranzaction - (count - 1) * 7;
		}
		else
		{
			cout << ((count - 1) * 100);
		}
	}
	fout.close();
	fin.close();
}
