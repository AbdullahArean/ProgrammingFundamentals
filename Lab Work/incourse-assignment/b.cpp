#include <stdio.h>
#define MOD 1000000

typedef long long ll;
int len = 0;

typedef struct String4
{
    char s[5];
    int hash;
} String4;
int gethash(char *s)
{
    int p=31;
    return ((s[0]*p+s[1]*p*p+s[2]*p*p*p+s[3]*p*p*p*p))%MOD;
}
struct String4 sarray[1000000];

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

int strlen(char *s)
{
    int i = 0, count = 0;
    while (s[i++] != '\0')
        count++;

    return count;
}
void strcpyt(char *smain, char *scopy, int t)
{
    int j = 0;
    for (int i = t; i < t + 4; i++)
    {
        scopy[j++] = smain[i];
    }
    scopy[j] = '\0';
}
void getin(struct String4 a, struct String4 b)
{
    // char temp[5];
    // strcpy(temp,a.s);
    strcpy(a.s,b.s);
    // strcpy(b.s,temp);
    // int temp2=a.hash;
    a.hash = b.hash;
    // b.hash =temp2;

}
void merge(struct String4 arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    struct String4 L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        getin(L[i],arr[l + i]);
    for (j = 0; j < n2; j++)
        getin(R[j],arr[m + 1 + j]);
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i].hash <= R[j].hash) {
            getin(arr[k],L[i]);
            i++;
        }
        else {
            getin(arr[k],R[j]);
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        getin(arr[k],L[i]);
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        getin(arr[k],R[j]);
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(struct String4 arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}
int main()
{
    int n = 0;
    //int hashs[1000000];
    //struct String4 sarray[100];
    char str[100], s1[5];
    scanf("%s", str);
    int len = strlen(str);
    while (n <= len - 4)
    {
        strcpyt(str, sarray[n].s, n);
        sarray[n].hash= gethash(sarray[n].s);
        //printf("%d\n",);
        //hashs[n]=sarray[n].hash;
        n++;
    }
    sort(sarray,sarry+len-4);
    for (int i = 0; i < len - 3; i++)
    {
        // int ub= binarys_ub(sarray, len - 3, sarray[i].s);
        // int lb=binarys_lb(sarray, len - 3, sarray[i].s);
        // if ((ub-lb) > 1)
        // {
        //     printf("%s\n", sarray[i].s);
        //     i=ub;
        // }
        printf("%d\n", sarray[i].hash);
    }
    

    
}