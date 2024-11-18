#include <iostream>

using namespace std;

int main (void)
{
  string s;
  int n, i; cin >> n >> s;
  int As = 0, Ds = 0;

  for (i = 0; i < n; ++i)
  {
    if (s[i] == 'A') ++As;
    else ++Ds;
  }

  if (As > Ds) cout << "Anton\n";
  else if (Ds > As) cout << "Danik\n";
  else cout << "Friendship\n";

  return 0;
}
