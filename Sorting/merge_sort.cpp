#include <bits/stdc++.h>

using namespace std;

void merge(int *arr, int left, int mid, int right)
{
    int arr1[mid - left + 1];
    int size1 = mid - left + 1;
    int arr2[right - mid];
    int size2 = right - mid;
    for (int i = 0; i < size1; i++)
    {
        arr1[i] = arr[left + i];
        arr2[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = left;
    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < size1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void merge_sort(int *arr, int left, int right)
{
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main()
{
    int arr[5] = {23, 1, 10, 5, 2};
    int sizee = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, 0, sizee - 1);
    for (int i = 0; i < sizee; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
