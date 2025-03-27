#include <bits/stdc++.h>

using namespace std;

int partition(int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = -1;
    for (int j = low; j <= high; j++)
    {
        if (arr[j] <= pivot)
        {
            if (i == -1)
                i = low;
            else
            {
                i++;
            }
            swap(arr[i], arr[j]);
        }
    }
    return i;
}

void quicksort(int *arr, int low, int high)
{
    if (low >= high)
        return;
    int pivot = arr[high];
    int pp = partition(arr, low, high);
    quicksort(arr, low, pp - 1);
    quicksort(arr, pp + 1, high);
}

int main()
{
    int arr[] = {100, 50, 75, 20, 89, 1, 67};
    int sizee = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, sizee - 1);
    for (int i = 0; i < sizee; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
