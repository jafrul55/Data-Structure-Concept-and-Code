#include <bits/stdc++.h>
using namespace std;
// Bubble Sort
// Redundant Testing:
// Dynamic Technique:
// we can reduce more iteration
// optimize Buble sort:
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
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
    cout << endl;
    // Bubble sort Implementation:
    for (int i = 1; i < size; i++)
    {
        int flag = 0;
        cout << "iteration no: " << i << endl;

        for (int j = 0; j < size - i; j++) // size-i-1
        {
            if (array[j] > array[j + 1]) // Ascending Order(Small to Big)
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
            printArray(array, size);
            cout << endl;
        }

        cout << endl;
        if (flag == 0)
            break;
    }

    cout << "After Sort: ";
    printArray(array, size);
    cout << endl;

    return 0;
}
