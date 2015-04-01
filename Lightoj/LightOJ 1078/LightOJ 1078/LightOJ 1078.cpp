#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int t;
	int x, y;

	while (cin >> t)
	{
		for (int i = 1; i <= t; i++)
		{
			cin >> x >> y;
			int mod = 0, count = 0;

			do
			{
				mod = (mod * 10 + y) % x;
				count++;
			} while (mod);

			cout << "Case " << i << ": " << count << endl;
		}
	}

	return 0;
}