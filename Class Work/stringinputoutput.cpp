#include<stdio.h>
int main()
{
    int count=1, line=0,ch=0;
    char str[100];
    printf("Enter a string: ");
    scanf("%[^~]",str);
    int i=0;
for(i; str[i]!='~'; i++)
{
    if( str[i]== ' ' && str[i+1]!= ' ') count++;
    if(str[i]=='\n')
    {
        line++;
    }

      // else it is a character
    else 
    {
         // if character is space or tab
         // then one word is also completed
    if(str[i]==' '||str[i]=='\t')
    {
        ch++;
    }

         // it was not '\n', sapace or tab
         // it is a normal character
         else {
            ch++;
         }
 }
}
    if(str[i-1]==' ') count--;
    if( str[0] ==' ') count--;
    if(str[0]=='\n') count--;
    printf("%d\n",count);
    fprintf(stdout, "String = %s", str);
  printf("\nCharacter counts = %d\n", ch);
   printf("Word counts = %d\n", count);
   printf("Line counts = %d\n", line);
   return 0;
}
