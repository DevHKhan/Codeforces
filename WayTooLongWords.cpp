#include <iostream>
#include <string>

using namespace std;

int main (void)
{
  int n, index;

  cin >> n;

  string str[n];

  for (index = 0; index < n; ++index) cin >> str[index];
  for (index = 0; index < n; ++index)
  {
    if (str[index].size() <= 10) cout << str[index] << "\n";
    else cout << str[index][0] << str[index].size() - 2 << str[index][str[index].size() - 1] << "\n";
  }
}