#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5] = {23, 1, 10, 5, 2};
    int sizee = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < sizee; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    for (int i = 0; i < sizee; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
