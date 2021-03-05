//12
//12
//12
//12
//12
#include<stdio.h>

int main()
{
	char str[1000099];
	scanf("%s",str);
	int i=0;
	int count =0;
	while( str[i]!='\0')
	{
	if(i==0) {printf("%c",str[i]); count++;}
	else if( str[i]==str[i-1]) {count++;}
	else { printf("%d",count); printf("%c", str[i]); count=1;}
	i++;
	}
	printf("%d\n",count);


	return 0;
}
