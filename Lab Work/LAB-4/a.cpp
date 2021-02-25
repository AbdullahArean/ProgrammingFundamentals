//12
//12
//12
//12
#include <stdio.h>

void merge(int arr[], int start, int mid, int end)
{

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int leftArr[len1], rightArr[len2];

    for (int i = 0; i < len1; i++)
        leftArr[i] = arr[start + i];
    for (int j = 0; j < len2; j++)
        rightArr[j] = arr[mid + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = start;

    while (i < len1 && j < len2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < len1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < len2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {

        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int upper_bound(int arr[], int N, int X)
{
    int mid;

    int low = 0;
    int high = N;

    while (low < high)
    {

        mid = low + (high - low) / 2;

        if (X >= arr[mid])
        {
            low = mid + 1;
        }

        else
        {
            high = mid;
        }
    }

    return low;
}

int lower_bound(int arr[], int N, int X)
{
    int mid;

    int low = 0;
    int high = N;

    while (low < high)
    {
        mid = low + (high - low) / 2;

        if (X <= arr[mid])
        {
            high = mid;
        }

        else
        {
            low = mid + 1;
        }
    }

    return low;
}
int main()
{
    int arr[1000006];
    long long int ans = 0;
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }

    // printf("Original array\n");
    // display(arr, t);

    mergeSort(arr, 0, t - 1);
    // printf("Sorted array\n");
    // display(arr, t);
    int target = upper_bound(arr, t, 0);
    if (target == t)
        ans = arr[0];
    else
    {
        for (int i = target; i < t; i++)
        {
            ans += arr[i];
        }
    }
    printf("%lld\n", ans);
}