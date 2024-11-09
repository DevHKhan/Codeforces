#include <iostream>

using namespace std;

int main (void)
{
  string a, b; cin >> a >> b;
  int i, out = 0;

  for (i = 0; a[i] != '\0'; ++i)
  {
    a[i] = tolower(a[i]);
    b[i] = tolower(b[i]);
  }

  for (i = 0; a[i] != '\0'; ++i)
  {
    if (a[i] < b[i])
    {
      out = -1;

      break;
    }

    if (a[i] > b[i])
    {
      out = 1;

      break;
    }
  }

  cout << out << "\n";

  return 0;
}
