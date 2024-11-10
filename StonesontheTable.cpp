#include <iostream>

using namespace std;

int main (void)
{
  int i, n, answer = 0; cin >> n;
  string s; cin >> s;

  for (i = 0; i < n; ++i) if (s[i] == s[i + 1]) ++answer;

  cout << answer << "\n";

  return 0;
}
