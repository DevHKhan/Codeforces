#include <iostream>

using namespace std;

int main (void)
{
  unsigned long long int n, i; cin >> n;
  string N = to_string(n);
  int lucky = 0;
  bool NearlyLucky = true;

  for (i = 0; i < N.size(); ++i) if (N[i] == '4' || N[i] == '7') ++lucky;

  string LUCKY = to_string(lucky);

  for (i = 0; i < LUCKY.size() && NearlyLucky; ++i) if (LUCKY[i] != '4' && LUCKY[i] != '7') NearlyLucky = false;

  if (NearlyLucky) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}
