//12
//12
//12
#include<stdio.h>

int main()
{
    int arr[100005] = {0};
    int mat[1005][1005];
    int r, c;
    scanf("%d %d",&r, &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[(mat[i][j])]==1) mat[i][j]=-1;
            else arr[(mat[i][j])]=1;
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d",mat[i][j]);
            if(j!=c-1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}