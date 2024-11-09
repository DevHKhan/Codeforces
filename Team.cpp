#include <iostream>

using namespace std;

int main (void)
{
  int n, index, counter = 0;

  cin >> n;

  int arr[n][3];
  
  for (index = 0; index < n; ++index) cin >> arr[index][0] >> arr[index][1] >> arr[index][2];
  for (index = 0; index < n; ++index)
  {
    if (arr[index][0] + arr[index][1] + arr[index][2] >= 2) ++counter;
  }

  cout << counter << "\n";

  return 0;
}