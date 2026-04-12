// koko eating bananas (leetcode Q875)

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

  int piles[] = {3, 6, 7, 11};
  int n = sizeof(piles) / sizeof(int);
  int h = 8;

  int st = 0, end = 0, ans;
  long long sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += piles[i];
    end = max(end, piles[i]);
  }
  st = sum / h;
  if (st == 0)
    st = 1;

  while (st <= end)
  {
    int mid = st + (end - st) / 2;
    long long total_time = 0;

    for (int i = 0; i < n; i++)
    {
      total_time += piles[i] / mid;
      if (piles[i] % mid)
        total_time++;
    }

    if (total_time > h)
    {
      st = mid + 1;
    }
    else
    {
      ans = mid;
      end = mid - 1;
    }
  }

  cout << ans;

  return 0;
}