#include<stdio.h>
#include<string.h>
//Two String Comparison
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

//String copy
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

//Length of String
int strlen(char *s)
{
    int i = 0, count = 0;
    while (s[i++] != '\0')
        count++;

    return count;
}
void wordadd(int *c,char stri4[][5],char arr[])
{
    int r=0;
    while(r<4)  //creating new word
    {
        stri4[*c][r+1]=arr[r];
        r++;
    }
    stri4[*c][0]=1;
    ++*c; //increasing the number of word
}
int strcpyt(char c[],char ch[][5],int number)//fstring copy function
{
    int i;
    for(i=1; i<5; i++) ch[number][i-1]=c[i];
    return 0;
}
int partition(char arr[], char stri4[][5],int *c,int *m)
{
    int j,r=0;
    if(*c==0) //for first block
    {
        *m=1;
        ++*c;
        while(r<4) //building of a new word
        {
            stri4[0][r+1]=arr[r];
            r++;
        }
        stri4[0][0]=1;//number of repeatation+1;
        return 0;
    }

    //if it is not the first word
    for(j=0; j<*c; j++)
    {
        if(arr[0]==stri4[j][1]&&arr[1]==stri4[j][2]&&arr[2]==stri4[j][3]&&arr[3]==stri4[j][4])
        {
            stri4[j][0]++;
            if(stri4[j][0]>*m) //if it is the word that mostly repeated?
            {
                *m=stri4[j][0];
            }
            return 0;
        }
    }

    wordadd(c,stri4,arr);//if the current word is not repeated then we have to creat a new word with
    return 0;

}
//Merge Sort Implementation
//Merge function of Merging splitted array
void merge(char arr[][5], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    char  L[n1][5], R[n2][5];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        strcpy(L[i],arr[l + i]);
    for (j = 0; j < n2; j++)
        strcpy(R[j],arr[m + 1 + j]);

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if ((strcmp(L[i], R[j]) == -1) || (strcmp(L[i], R[j]) == 0))
        {
            strcpy(arr[k], L[i]);
            i++;
        }
        else
        {
            strcpy(arr[k], R[j]);
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        strcpy(arr[k], L[i]);
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        strcpy(arr[k], R[j]);
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
//MergeSort
void mergeSort(char arr[][5], int l, int r)
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


int main()
{
    int l=0;
    char s[100001];
    char stri4[100001][5],stri4f[100001][5];
    memset(stri4,0,sizeof(stri4));
    memset(stri4f,0,sizeof(stri4f));
    scanf("%s",s);
    int len=strlen(s);

    int stri4n=0, maxrep=0; //stri4 is count of possible string and maxrep is count of maximum frequency

    for(int i=3; i<len; i++)
    {
       partition(s+i-3,stri4,&stri4n,&maxrep);
    }



    for(int i=0; i<stri4n; i++) //seperating the words who are mostly repeated in ch array ;
    {
        if(stri4[i][0]==maxrep)
        {
            strcpy(stri4[i],stri4f[l]);
            l++;
            // number variable is containg the total maximum repeatition word number;
        }
    }
    //mergeSort(stri4f,0,l-1);
    for(int i=0; i<l;i++)
    {
        puts(stri4f[i]);
    }
return 0;
}