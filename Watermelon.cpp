#include <iostream>

using namespace std;

int main (void)
{
  int w;

  cin >> w;

  if (w == 2) 
  {
    cout << "NO" << "\n";

    return 0;
  }
  
  if (w % 2 == 0) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}