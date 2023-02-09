#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int array[], int n, int current)
{
    int largest = current;
    // left child = (2*i+1)
    int leftChild = 2 * current + 1;
    // right child = (2*i+2)
    int rightChild = 2 * current + 2;
    if (leftChild < n && array[leftChild] > array[largest])
    {
        largest = leftChild;
    }
    if (rightChild < n && array[rightChild] > array[largest])
    {
        largest = rightChild;
    }
    if (largest != current)
    {
        swap(array[current], array[largest]);
        heapify(array, n, largest);
    }
}

void printArray(int array[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Before Heapify: ";
    printArray(array, n);
    // Heapify

    int nonleafstart = (n / 2) - 1;
    for (int i = nonleafstart; i >= 0; i--)
    {
        heapify(array, n, i);
    }
    cout << "After Heapify: ";
    printArray(array, n);
    return 0;
}
/*
9
2 10 1 5 4 8 3 8 7
*/