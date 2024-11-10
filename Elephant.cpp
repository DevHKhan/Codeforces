#include <iostream>

using namespace std;

int main (void)
{
  int x, answer = 0; cin >> x;

  if (x <= 5) ++answer;
  else
  {
    answer += x / 5;

    if (x % 5 != 0) ++answer;
  }

  cout << answer << "\n";

  return 0;
}
