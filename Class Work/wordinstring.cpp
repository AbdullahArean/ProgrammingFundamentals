#include<stdio.h>
int main()
{
    int count=1;
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    int i=0;
    for(i; str[i]!='\0'; i++)
    {
    if( str[i]== ' ' && str[i+1]!= ' ') count++;
    
    }
    if(str[i-1]==' ') count--;
    if( str[0] ==' ') count--;
    if(str[0]=='\n') count--;
    printf("%d\n",count);
    fprintf(stdout, "String = %s", str);

   return 0;
}
