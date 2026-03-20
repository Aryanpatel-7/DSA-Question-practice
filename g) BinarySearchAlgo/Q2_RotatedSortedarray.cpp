// search in rotated sorted array (leetcode Q33)
#include <iostream>
using namespace std;

int Search(int A[], int target, int size)
{
  int st = 0, end = size - 1;

  while (st <= end)
  {
    int mid = st + (end - st) / 2;
    if (A[mid] == target)
    {
      return mid;
    }
    if (A[st] <= A[mid])
    {

      if (A[st] <= target && target <= A[mid])
      {
        end = mid - 1;
      }
      else
      {
        st = mid + 1;
      }
    }
    else
    { // right sort
      if (A[mid] <= target && target <= A[end])
      {
        st = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    }
  }

  return -1;
}

int main()
{
  int arr[] = {3, 4, 5, 6, 7, 0, 1, 2};
  int target = 0;
  int size = sizeof(arr) / sizeof(int);

  cout << Search(arr, target, size);
  return 0;
}