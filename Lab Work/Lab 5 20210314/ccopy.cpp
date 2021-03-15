#include <stdio.h>
int arr[11] = {0};
void p(int *str, int i)
{
    for (int j = 0; j < i; j++)
    {
        printf("%d ", str[j]);
    }
    printf("\n");
    return;
}
int And(int a, int b)
{
    if (a == 0 && b == 0)
        return 0;
    else if (a == 0 && b == 1)
        return 0;
    else if (a == 1 && b == 0)
        return 0;
    else
        return 1;
}
int Or(int a, int b)
{

    if (a == 0 && b == 1)
        return 1;
    else if (a == 1 && b == 0)
        return 1;
    else if (a == 1 && b == 1)
        return 1;
    else
        return 0;
}
int Not(int a)
{
    if (a == 0)
        return 1;
    else
        return 0;
}
void calc(int *str, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if(*(str + i) == 4)
        {
            *(str + i) = -1;
        if (*(str + i + 1))
            *(str + i + 1) = 0;
        else
            *(str + i + 1) = 1;

        i++;
        }
        
    }
    p(str,end+1);
    for (int i = start; i <= end; i++)
    {

        if (*(str + i) == 2)
        {
            int b = 1, u = 1;
            while (*(str + i - b) == -1)
            {
                b++;
            }
            while (*(str + i +u) == -1)
            {
                u++;
            }
            *(str + i + u) = And(*(str + i - b), *(str + i + u));
            *(str + i - b) = -1;
            *(str + i) = -1;
        }
        if (*(str + i) == 3)
        {
            int b = 1, u = 1;
            while (*(str + i - b) == -1)
            {
                b++;
            }
            while (*(str + i +u) == -1)
            {
                u++;
            }
            *(str + i + u) = Or(*(str + i - b), *(str + i + u));
            *(str + i - b) = -1;
            *(str + i) = -1;
        }
    }
}
void FinalCalc(int *str, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if(*(str + i) == 6)
        {int d=0;
        while(*(str+i+d)!=9)
        {
            d++;
        }
        *(str + i)=-1;
        *(str + i+d)=-1;
        FinalCalc(str,i,i+d);
        i=i+d;
        }
    }
    calc(str,start, end);

}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
        scanf("%d", &arr[i]);
    int str[100001];
    int i = 0;
    char g;
    scanf("%c", &g);
    while (1)
    {
        char temp, g;
        scanf("%c", &temp);
        if (temp == '\n' || temp == '\0')
            break;
        else if (temp >= 'A' && temp <= 'Z')
        {
            str[i++] = arr[temp - 'A'];
        }
        else if (temp == '.')
        {
            str[i++] = 2;
        }
        else if (temp == '+')
        {
            str[i++] = 3;
        }
        else if (temp == '~')
        {
            str[i++] = 4;
        }
        else if (temp == '(')
        {
            str[i++] = 6;
        }
        else if (temp == ')')
        {
            str[i++] = 9;
        }
    }
    FinalCalc(str, 0, i - 1);
    int len=i;
    // for (int j = 0; j < i; j++)
    // {
    //     printf("%d ", str[j]);
    // }
    // printf("\n");
    p(str,len);
}