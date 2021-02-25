//12
//12
//12
//12
//12
#include <stdio.h>
int bstr[5], len = 0;

void doii(int x)
{
    if (x == 0)
    {
        for (int i = 0; i < len; i++)
        {
            printf("%d", bstr[i]);
        }
    }
    else if (x % 2 != 0)
    {
        for (int i = 0; i < len; i++)
        {
            if (bstr[i] == 1)
                doii(x - 1);
            else
                printf("%d", bstr[i]);
        }
    }
    else if (x % 2 == 0)
    {
        for (int i = 0; i < len; i++)
        {
            if (bstr[i] == 0)
                doii(x - 1);
            else
                printf("%d", bstr[i]);
        }
    }
}
void problemsolve()
{
    int x = 3;
    while (1)
    {
        char temp;
        scanf("%c", &temp);
        if (temp == ' ')
            break;
        else if (temp == 48)
            bstr[len] = 0;
        else if (temp == 49)
            bstr[len] = 1;
        len++;
    }
    scanf("%d", &x);
    //   for(int i=0; i<len;i++) { printf("%d", bstr[i]);}
    //   printf("\n%d",x);
    doii(x);
}
int main()
{
    problemsolve();

    printf("\n");

    return 0;
}
