#include <iostream>
#include <string>

using namespace std;

int main (void)
{
  string football;
  int i, counter = 1;
  bool dangerous = false;

  cin >> football;

  for (i = 0; i < football.size(); ++i)
  {
    if (counter >= 7)
    {
      dangerous = true;

      break;
    }
    if (football[i + 1] == football[i]) ++counter;
    else counter = 1;
  }

  if (dangerous) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}