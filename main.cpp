#include <iostream>

using namespace std;

int box[10][10] =
{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},
};

void print()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			box[j][i] = (box[j][i] == 0) ? 1 : 0;
			cout << box[j][i];
		}
		cout << endl;
	}
};
void chengenumber()
{
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (box[j][i] == 1)
			{
				cout << 0;
			}
			else if (box[j][i] == 0)
			{
				cout << 1;
			}
		}
		cout << endl;
	}
};

int main()
{
	print();
	chengenumber();

	return 0;
}