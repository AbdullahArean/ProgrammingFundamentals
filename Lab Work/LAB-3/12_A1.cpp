//12
//12
//12
//12
 #include<stdio.h>
int main()
{
    char str[25];
    fgets(str,25,stdin);
    if(str[0]=='2' && str[1]=='1')
    {
        printf("International Mother Language Day!\n");
    }
    else
        printf("I don't care!\n");
    return 0;
} 