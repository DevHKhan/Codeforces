#include <iostream>

using namespace std;

int main (void)
{
  long long int n;
  int k, i;

  cin >> n >> k;

  for (i = 0; i < k; ++i)
  {
    if (n % 10 == 0) n /= 10;
    else --n;
  }

  cout << n << "\n";

  return 0;
}
