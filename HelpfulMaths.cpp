#include <iostream>

using namespace std;

int main (void)
{
  string s, output = ""; cin >> s;
  int i;
  int OneCounter = 0, TwoCounter = 0, ThreeCounter = 0, PlusCounter;

  for (i = 0; s[i] != '\0'; ++i)
  {
    if (s[i] == '1') ++OneCounter;
    if (s[i] == '2') ++TwoCounter;
    if (s[i] == '3') ++ThreeCounter;
  }

  PlusCounter = OneCounter + TwoCounter + ThreeCounter - 1;

  for (i = 0; i < OneCounter; ++i, --PlusCounter)
  {
    output += "1";

    if (PlusCounter > 0) output += "+";
  }

  for (i = 0; i < TwoCounter; ++i, --PlusCounter)
  {
    output += "2";

    if (PlusCounter > 0) output += "+";
  }

  for (i = 0; i < ThreeCounter; ++i, --PlusCounter)
  {
    output += "3";

    if (PlusCounter > 0) output += "+";
  }

  cout << output << "\n";

  return 0;
}
