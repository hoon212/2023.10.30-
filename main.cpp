#include <iostream>
#include <map>

using namespace std;

int main()
{
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
	for (int i = 0; i <10 ; ++i)
	{
		for (int j = 0; j <10; ++j)
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
	return 0;
}
