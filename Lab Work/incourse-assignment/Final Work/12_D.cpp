#include <stdio.h>
//Structure declared
typedef struct Book
{
    int id, year;
    char title[30], genre[30], author[30], language[30];
} Book;

void merge(struct Book arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    struct Book L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i].id <= R[j].id)
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(struct Book arr[], int l, int r)
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

int strComp(char a[], char b[]) //comparing two string
{
    int i, j;
    for (i = 0, j = 0; a[i] || b[j]; i++, j++)
    {
        if (a[i] != b[j])
            return 0;
    }
    return 1;
}

int main()
{
    int N, T, i, j, n, y;
    char gen[30], tit[30], aut[30], lang[30];
    Book barray[10000], temp;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %s %s %s %s %d", &barray[i].id, barray[i].title, barray[i].genre, barray[i].author, barray[i].language, &barray[i].year);
    }
    mergeSort(barray, 0, N - 1);

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        if (n == 1)
        {
            scanf("%s", gen);
            for (i = 0; i < N; i++)
            {
                if (strComp(gen, barray[i].genre))
                    printf("%d %s %s %s %s %d\n", barray[i].id, barray[i].title, barray[i].genre, barray[i].author, barray[i].language, barray[i].year);
            }
        }
        else if (n == 2)
        {
            scanf("%d", &y);
            for (i = 0; i < N; i++)
            {
                if (y == barray[i].year)
                    printf("%d %s %s %s %s %d\n", barray[i].id, barray[i].title, barray[i].genre, barray[i].author, barray[i].language, barray[i].year);
            }
        }
        else if (n == 3)
        {
            scanf("%s", tit);
            for (i = 0; i < N; i++)
            {
                if (strComp(tit, barray[i].title))
                    printf("%d %s %s %s %s %d\n", barray[i].id, barray[i].title, barray[i].genre, barray[i].author, barray[i].language, barray[i].year);
            }
        }
        else if (n == 4)
        {
            scanf("%s", aut);
            for (i = 0; i < N; i++)
            {
                if (strComp(aut, barray[i].author))
                    printf("%d %s %s %s %s %d\n", barray[i].id, barray[i].title, barray[i].genre, barray[i].author, barray[i].language, barray[i].year);
            }
        }
        else if (n == 5)
        {
            scanf("%s", lang);
            for (i = 0; i < N; i++)
            {
                if (strComp(lang, barray[i].language))
                    printf("%d %s %s %s %s %d\n", barray[i].id, barray[i].title, barray[i].genre, barray[i].author, barray[i].language, barray[i].year);
            }
        }
        else if (n == 6)
        {
            scanf("%s %s", aut, lang);
            for (i = 0; i < N; i++)
            {
                if (strComp(aut, barray[i].author) && strComp(lang, barray[i].language))
                    printf("%d %s %s %s %s %d\n", barray[i].id, barray[i].title, barray[i].genre, barray[i].author, barray[i].language, barray[i].year);
            }
        }
        else if (n == 7)
        {
            scanf("%s %s", aut, tit);
            for (i = 0; i < N; i++)
            {
                if (strComp(aut, barray[i].author) && strComp(tit, barray[i].title))
                    printf("%d %s %s %s %s %d\n", barray[i].id, barray[i].title, barray[i].genre, barray[i].author, barray[i].language, barray[i].year);
            }
        }
        else if (n == 8)
        {
            scanf("%s %s", aut, gen);
            for (i = 0; i < N; i++)
            {
                if (strComp(aut, barray[i].author) && strComp(gen, barray[i].genre))
                    printf("%d %s %s %s %s %d\n", barray[i].id, barray[i].title, barray[i].genre, barray[i].author, barray[i].language, barray[i].year);
            }
        }
        else if (n == 9)
        {
            scanf("%s %s", gen, lang);
            for (i = 0; i < N; i++)
            {
                if (strComp(gen, barray[i].genre) && strComp(lang, barray[i].language))
                    printf("%d %s %s %s %s %d\n", barray[i].id, barray[i].title, barray[i].genre, barray[i].author, barray[i].language, barray[i].year);
            }
        }
    }

    return 0;
}
