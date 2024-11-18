#include <iostream>

using namespace std;

int main (void)
{
  string s, t; cin >> s >> t;
  bool reversed = true;
  int i;

  if (s.size() != t.size()) reversed = false;

  for (i = 0; i < s.size() && reversed; ++i) if (s[i] != t[t.size() - i - 1]) reversed = false;

  if (reversed) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}
