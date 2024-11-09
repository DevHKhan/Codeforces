#include <iostream>

using namespace std;

int main (void)
{
  long long int n, m, factored, p1, p2, tcounter = 0, thcounter = 0;

  cin >> n >> m;

  if (m % n != 0)
  {
    cout << "-1\n";

    return 0;
  }

  factored = m / n;

  while (true)
  {
    if (factored % 2 == 0) p1 = 
}