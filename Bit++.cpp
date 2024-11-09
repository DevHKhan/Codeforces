#include <iostream>
#include <string>

using namespace std;

int main (void)
{
  int n, index, x = 0;
  bool add = false;

  cin >> n;

  string str[n];

  for (index = 0; index < n; ++index) cin >> str[index];
  for (index = 0; index < n; ++index)
  {
    if (str[index][1] == '+') ++x;
    else --x;
  }

  cout << x << "\n";

  return 0;
}