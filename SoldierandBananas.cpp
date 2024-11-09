#include <iostream>

using namespace std;

int main (void)
{
  long long int k, n, w;
  long long int cost = 0, index;

  cin >> k >> n >> w;

  for (index = 1; index <= w; ++index) cost += (index * k);

  if (n >= cost) cout << "0\n";
  else cout << cost - n << "\n";

  return 0;
}