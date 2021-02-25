//12
//12
//12
//12
//12
#include<stdio.h>

long long int solve(int a[], int t)
{
    long long int p= -10000001;
    long long int q= 0;

    for(int i=0; i<t; i++)
    {q+=a[i];
    
    if(p<q) p=q;
    if(q<0) q=0;
    }
    return p;
}

int main()
{
    int arr[1000006];
    
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%lld\n", solve(arr,t));
}