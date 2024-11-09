#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
  int matrix[5][5];
  int x, y, mx, my, counter = 0;

  for (x = 0; x < 5; ++x)
    for (y = 0; y < 5; ++y)
    {
      cin >> matrix[x][y];

      if (matrix[x][y] == 1)
      {
        mx = x;
        my = y;
      }
    }

  counter += (abs(mx - 2));
  counter += (abs(my - 2));

  cout << counter << "\n";
  
  return 0;
}