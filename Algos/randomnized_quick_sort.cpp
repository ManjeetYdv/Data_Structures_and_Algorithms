#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int l, int m)
{
    int pivot = arr[m];
    int i = l - 1;

    for (int j = l; j < m; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i + 1], arr[m]);
    return i + 1;
}

int Random_partition(int arr[], int p, int q)
{

    srand(time(0));
    int random = p + rand() % (q - p);
    swap(arr[random], arr[q]);
    return partition(arr, p, q);
}

void quicksort(int arr[], int p, int q)
{
    if (p < q)
    {
        int pi = Random_partition(arr, p, q);
        quicksort(arr, p, pi - 1);
        quicksort(arr, pi + 1, q);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
