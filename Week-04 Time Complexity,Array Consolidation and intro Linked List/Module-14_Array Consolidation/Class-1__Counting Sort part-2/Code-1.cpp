#include <bits/stdc++.h>
using namespace std;
// Counting Sort Part 2
void printArray(int array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
}
int main()
{

  int size;
  cin >> size;

  int array[size];
  for (int i = 0; i < size; i++)
  {
    cin >> array[i];
  }
  cout << "Before Sort: ";
  printArray(array, size);

  // step-1:Finding Max
  int max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (array[i] > max)
      max = array[i];
  }

  // step-2: Initialization of 'Count' Array
  int count[max + 1];
  for (int i = 0; i <= max; i++)
  {
    count[i] = 0;
  }

  // step-3:Frequency Calculation
  for (int i = 0; i < size; i++)
  {
    count[array[i]]++;
  }

  // step-4:PrefixSum / Cumulative sum Calculation
  for (int i = 1; i <= max; i++)
  {
    count[i] += count[i - 1];
  }

  // step-5:Final Array--->Backward Traversal of Basic Array
  int final[size];
  for (int i = size - 1; i >= 0; i--)
  {
    count[array[i]]--;
    int k = count[array[i]];
    final[k] = array[i];
  }

  cout << "After Sort: ";
  printArray(final, size);

  return 0;
}

// Input:
/*
8
1 2 5 9 2 5 5 4

*/