#include <iostream>

using namespace std;

int main (void)
{
  string s; cin >> s;
  int uppers = 0, lowers = 0, i;

  for (i = 0; i < s.size(); ++i)
  {
      if (isupper(s[i])) ++uppers;
      else ++lowers;
  }

  if (lowers >= uppers) for (i = 0; i < s.size(); ++i) s[i] = tolower(s[i]);
  else for (i = 0; i < s.size(); ++i) s[i] = toupper(s[i]);

  cout << s << "\n";

  return 0;
}
