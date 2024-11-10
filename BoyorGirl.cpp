#include <iostream>
#include <string>

using namespace std;

int main (void)
{
  string s; cin >> s;
  int used[s.size()];
  int i, j, DistinctChars = 0;

  for (i = 0; i < s.size(); ++i) used[i] = 1;

  for (i = 0; i < s.size() - 1; ++i)
    for (j = i + 1; j < s.size(); ++j)
      if (s[i] == s[j]) ++used[i];

  for (i = 0; i < s.size(); ++i) if (used[i] == 1) ++DistinctChars;

  if (DistinctChars % 2 == 0) cout << "CHAT WITH HER!\n";
  else cout << "IGNORE HIM!\n";

  return 0;
}
