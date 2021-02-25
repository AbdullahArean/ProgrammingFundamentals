#include <stdio.h>

typedef long long ll;
int len = 0;

//Structure Declaration
typedef struct String4
{
    char s[5];
} String4;
struct String4 sarray[10001];

//String Compare
int strcmp(char *a, char *b)
{
    for (int i = 0; i < 4; i++)
    {
        if (a[i] < b[i])
            return -1;
        else if (a[i] > b[i])
            return 1;
    }
    return 0;
}

//String Copy
void strcpy(char *a, char *b)
{
    int i = 0;
    while (1)
    {
        char temp = a[i];
        a[i] = b[i];
        b[i] = temp;
        if (a[i] == '\0')
            break;
        i++;
    }
    return;
}

//String Length
int strlen(char *s)
{
    int i = 0, count = 0;
    while (s[i++] != '\0')
        count++;

    return count;
}

//Start copying string from t to 4 length
void strcpyt(char *smain, char *scopy, int t)
{
    int j = 0;
    for (int i = t; i < t + 4; i++)
    {
        scopy[j++] = smain[i];
    }
    scopy[j] = '\0';
}

//Searching for upperbound in Array
int binarys_ub(struct String4 arr[], int N, char *X)
{
    int mid;

    int low = 0;
    int high = N;

    while (low < high)
    {

        mid = low + (high - low) / 2;
        //if(strcmp(X,arr[mid].s)==0) return 1;

        if (strcmp(X, arr[mid].s) == 1)
        {
            low = mid + 1;
        }
        else if (strcmp(X, arr[mid].s) == 0)
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
//Searching For Lower Bound in Array
int binarys_lb(struct String4 arr[], int N, char *X)
{
    int mid;

    int low = 0;
    int high = N;

    while (low < high)
    {

        mid = low + (high - low) / 2;
        //if(strcmp(X,arr[mid].s)==0) return 1;

        if (strcmp(X, arr[mid].s) == -1)
        {
            high = mid;
        }
        else if (strcmp(X, arr[mid].s) == 0)
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

//Merge Sort Code
//Modified for special structure
void merge(struct String4 arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    struct String4 L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        strcpy(L[i].s, arr[l + i].s);
    for (j = 0; j < n2; j++)
        strcpy(R[j].s, arr[m + 1 + j].s);

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (((strcmp(L[i].s, R[j].s) == 0) || strcmp(L[i].s, R[j].s) == -1))
        {
            strcpy(arr[k].s, L[i].s);
            i++;
        }
        else
        {
            strcpy(arr[k].s, R[j].s);
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        strcpy(arr[k].s, L[i].s);
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        strcpy(arr[k].s, R[j].s);
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(struct String4 arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

//Main Function
int main()
{
    int n = 0;
    //struct String4 sarray[1000001];
    char str[10001], s1[5];
    scanf("%s", str);
    int len = strlen(str);
    while (n <= len - 4)
    {
        strcpyt(str, sarray[n].s, n);
        n++;
    }
    mergeSort(sarray, 0, len - 4);

    int occ[10001][2];//array to keep 
    int max=-1;
    int ct=0;
    for (int i = 0; i < len - 3; )
    {
        int ub = binarys_ub(sarray, len - 3, sarray[i].s);//upperbound
        int lb = binarys_lb(sarray, len - 3, sarray[i].s);//lower bound
        occ[ct][0]=lb;
        occ[ct][1]=(ub-lb);
        ct++;
        i=ub;
        if(max<(ub-lb)) max=(ub-lb);
        else continue;
        
    }

    //Printing Elements with higher frequency
    for (int i = 0; i < ct && (occ[i][1]==max);i++ )
    {
        printf("%s\n",sarray[occ[i][0]].s);
        
    }
    return 0;
}