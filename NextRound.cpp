#include <iostream>

using namespace std;

int main (void)
{
  int n, k, index, counter = 0;

  cin >> n >> k;

  int scores[n];

  for (index = 0; index < n; ++index) cin >> scores[index];
  for (index = 0; index < n; ++index)
  {
    if (scores[index] >= scores[k - 1] && scores[index] > 0) ++counter;
  }

  cout << counter << "\n";

  return 0;
}