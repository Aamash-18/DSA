#include <bits/stdc++.h>
using namespace std;

// This is the algorithm used in Quick Sort for putting pivot element at its correct postion
// so that all element to its left are less than it and all elements to its right greater than it...

int main()
{
    int arr[5] = {23, 1, 10, 5, 11};
    int sizee = sizeof(arr) / sizeof(arr[0]);
    int pivot = arr[4];
    int i = -1;
    for (int j = 0; j < sizee; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << i;
    return 0;
}
