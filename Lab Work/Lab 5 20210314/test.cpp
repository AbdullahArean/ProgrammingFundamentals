//12
//12
//12
#include <stdio.h>
#include <stdlib.h>
int mn, nn, my, ny;
bool flag = 1;
int noki[101][101] = {0}, yeamin[101][101] = {0}, result[101][101] = {0};

void TransPose()
{
    for (int i = 0; i < mn; i++)
    {
        for (int j = 0; j < nn; j++)
        {
            result[i][j] = noki[i][j];
        }
    }
    int k = 0, l = 0;
    for (int j = 0; j < nn; j++)
    {
        for (int i = 0; i < mn; i++)
        {
            int temp = result[i][j];
            noki[k][l++] = temp;
        }
        l = 0;
        k++;
    }
}
void rowreverse()
{
    for (int i = 0; i < mn; i++)
    {
        for (int j = 0; j < nn; j++)
        {
            result[i][j] = noki[i][j];
        }
    }
    for (int i = 0; i < mn; i++)
    {
        for (int j = nn - 1, k = 0; j >= 0; j--)
        {
            noki[i][k++] = result[i][j];
        }
    }
}
void rotation(int x)
{
    for (int i = 0; i < x; i++)
    {
        TransPose();
        rowreverse();
    }
    for (int i = 0; i < mn; i++)
    {
        for (int j = 0; j < nn; j++)
        {
            printf("%d ", noki[i][j]);
            if (j != (nn - 1))
                printf(" ");
        }
        if (i == (mn - 1) && flag == 0)
            continue;
        else
            printf("\n");
    }
}
void ADD()
{
    scanf("%d %d", &my, &ny);
    for (int i = 0; i < my; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            scanf("%d", &yeamin[i][j]);
        }
    }
    if (mn != my || nn != ny)
    {
        printf("Invalid Operation!\n");
        return;
    }
    else
    {
        for (int i = 0; i < my; i++)
        {
            for (int j = 0; j < ny; j++)
            {
                noki[i][j] = noki[i][j] + yeamin[i][j];
                printf("%d ", noki[i][j]);
                if (j != (ny - 1))
                    printf(" ");
            }
            if (i == (my - 1) && flag == 0)
                continue;
            else
                printf("\n");
        }
    }
}
void SUB()
{
    scanf("%d %d", &my, &ny);
    for (int i = 0; i < my; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            scanf("%d", &yeamin[i][j]);
        }
    }
    if (mn != my || nn != ny)
    {
        printf("Invalid Operation!\n");
        return;
    }
    else
    {
        for (int i = 0; i < my; i++)
        {
            for (int j = 0; j < ny; j++)
            {
                noki[i][j] = noki[i][j] - yeamin[i][j];
                printf("%d ", noki[i][j]);
                if (j != (ny - 1))
                    printf(" ");
            }
            if (i == (my - 1) && flag == 0)
                continue;
            else
                printf("\n");
        }
    }
}
void MUL()
{
    scanf("%d %d", &my, &ny);
    for (int i = 0; i < my; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            scanf("%d", &yeamin[i][j]);
        }
    }
    if (nn != my)
    {
        printf("Invalid Operation!\n");
        return;
    }
    else
    {
        for (int i = 0; i < mn; i++)
        {
            for (int j = 0; j < ny; j++)
            {
                //printf("Executed\n");
                result[i][j] = 0;
                for (int k = 0; k < my; k++)
                    result[i][j] += noki[i][k] * yeamin[k][j];
            }
        }
        nn = ny;
        for (int i = 0; i < mn; i++)
        {
            for (int j = 0; j < nn; j++)
            {
                noki[i][j] = result[i][j];
                printf("%d ", noki[i][j]);
                if (j != (nn - 1))
                    printf(" ");
            }
            if (i == (mn - 1) && flag == 0)
                continue;
            else
                printf("\n");
        }
    }
}
int main()
{
    scanf("%d %d", &mn, &nn);
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        if (t == 1)
            flag = 0;
        char str[20], g1, g2;
        scanf("%s\n", str);

        if (str[0] == 'A')
        {
            ADD();
        }
        else if (str[0] == 'S')
        {
            SUB();
        }
        else if (str[0] == 'M')
        {
            MUL();
        }
        if (str[0] == 'R')
        {
            //printf("Executed\n");
            char str2[20];
            int x;
            scanf("%s %d", str2, &x);
            if (str2[0] == 'C')
            {
                x = x % 4;
                rotation(x);
            }
            else
            {
                x = x % 4;
                if (x != 0)
                {
                    x = 4 - x;
                }
                rotation(x);
            }
        }
        if (t != 1)
            continue;
        else
            printf("\n");
    }
}
