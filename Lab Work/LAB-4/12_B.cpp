//12
//12
//12
//12
//12
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
    int arr[1006];
    long long int ans = 0;
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }

    //printf("Original array\n");
    //display(arr, t);

    mergeSort(arr, 0, t - 1);
    //printf("Sorted array\n");
    //display(arr, t);
    int target2 = upper_bound(arr, t, 0);
    int target1 = lower_bound(arr, t, 0);
    //printf(" ");
    if (target1 == 0 && target2 == t)
    {
        for (int i = 0; i < t; i++)
        {
            printf("%d", arr[i]);
             if(i!=t-1) printf(" ");
        }
    }
    else if (target2 == 0)
    {
        for (int i = target1; i < t; i++)
        {
            printf("%d", arr[i]);
            if(i!=t-1) printf(" ");
        }
    }

    else if (target2 == t)
    {
        int temp = target1;
        if (target1 % 2 == 1)
        {
            temp--;
        }
        for (int i = 0; i < temp; i++)
        {
            printf("%d", arr[i]);
            if(i!=t-1) printf(" ");
        }
    }
    else
    {
        int temp = target1;
        if (target1 % 2 == 1)
        {
            temp--;
        }
        for (int i = 0; i < temp; i++)
        {
            printf("%d ", arr[i]);
            //if(i!=temp-1) printf(" ");
        }
        for (int i = target2; i < t; i++)
        {
            printf("%d", arr[i]);
            if(i!=t-1) printf(" ");
        }
    }
    printf("\n");
    return 0;
    
}