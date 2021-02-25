#include<stdio.h>

int strlen(char s[])
{
    int count=0, i=0;
    while(s[i]!='\0')
    {
     printf("%c\n",s[i]);
    count++;
    i++;
  
  }
    return count;
}
int main()
{

   char str[5];
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);
   printf("The entered string of length %d: %s",strlen(str),str);

   return 0;
}
