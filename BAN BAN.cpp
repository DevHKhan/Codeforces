#include <iostream>

using namespace std;

int main (void)
{
	int t, tc, x, ik, jk, o, moves_req; cin >> t; int arr[t];

	for (tc = 0; tc < t; ++tc) cin >> arr[tc];
	for (tc = 0; tc < t; ++tc)
	{
		if (arr[tc] == 1)
		{
			cout << 1 << "\n";
			cout << 1 << " " << 2 << "\n";

			continue;
		}

		ik = 1; jk = arr[tc] * 3;
		moves_req = arr[tc] % 2 == 0 ? arr[tc] / 2 : arr[tc] / 2 + 1; cout << moves_req << "\n";

		for (o = 0; o < moves_req; ++o)
		{
			cout << ik << " " << jk << "\n";

			ik += 3;
			jk -= 3;
		}
	}

	return 0;
}
