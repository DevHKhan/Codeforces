#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int average (int arr[], int size)
{
  int index;
  int sum = 0;

  for (index = 0; index < size; ++index) sum += arr[index];

  return round((float) sum / (float) size);
}

int main (void)
{
  int n, index, counter = 0;

  cin >> n;

  int grades[n];

  for (index = 0; index < n; ++index) cin >> grades[index];

  sort(grades, grades + n);

  for (index = 0; index < n; ++index)
  {
    if (average(grades, n) >= 4.5) break;

    if (grades[index] != 5)
    {
      grades[index] = 5;
      ++counter;
    }
  }

  cout << counter << "\n";

  return 0;
}