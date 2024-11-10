#include <iostream>

using namespace std;

int main (void)
{
  int years = 0, a, b; cin >> a >> b;

  while (a <= b)
  {
    ++years;
    a *= 3;
    b *= 2;
  }

  cout << years << "\n";

  return 0;
}
