//12
//12
//12
#include<stdio.h>
#include <stdint.h>


int main()
{
    int32_t m,n;
    int32_t arr[1001][1001];
    scanf("%d %d",&m, &n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("%d",arr[i][j]);
            if(i!=(m-1)) printf(" ");
        }
        printf("\n");
    }
    return 0;

}