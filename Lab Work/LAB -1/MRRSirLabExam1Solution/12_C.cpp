//12
//12
//12
//12
//12
//12
#include<stdio.h>
void printnumberstarl(int n, int i);
void printnumberstar(int n)
{
	

	for(int i=0;i<5; i++)
	{
		printf(" ");
		printnumberstarl(n,i);
		printf("\n");
	}
}
void printnumberstarl(int n, int i)
{
if(i==0)
{
	if(n==0)      {printf("*****"); return;}
	else if(n==1) {printf("    *"); return;}
	else if(n==2) {printf("*****"); return;}
	else if(n==3) {printf("*****"); return;}
	else if(n==4) {printf("*   *"); return;}
	else if(n==5) {printf("*****"); return;}
	else if(n==6) {printf("*****"); return;}
	else if(n==7) {printf("*****"); return;}
	else if(n==8) {printf("*****"); return;}
	else if(n==9) {printf("*****"); return;}
}
else if(i==1)
{
	if(n==0)      {printf("*   *"); return;}
	else if(n==1) {printf("    *"); return;}
	else if(n==2) {printf("    *"); return;}
	else if(n==3) {printf("    *"); return;}
	else if(n==4) {printf("*   *"); return;}
	else if(n==5) {printf("*    "); return;}
	else if(n==6) {printf("*    "); return;}
	else if(n==7) {printf("    *"); return;}
	else if(n==8) {printf("*   *"); return;}
	else if(n==9) {printf("*   *"); return;}
}
else if(i==2)
{
	if(n==0)      {printf("*   *"); return;}
	else if(n==1) {printf("    *"); return;}
	else if(n==2) {printf("*****"); return;}
	else if(n==3) {printf("*****"); return;}
	else if(n==4) {printf("*****"); return;}
	else if(n==5) {printf("*****"); return;}
	else if(n==6) {printf("*****"); return;}
	else if(n==7) {printf("    *"); return;}
	else if(n==8) {printf("*****"); return;}
	else if(n==9) {printf("*****"); return;}
}
else if(i==3)
{
	if(n==0)      {printf("*   *"); return;}
	else if(n==1) {printf("    *"); return;}
	else if(n==2) {printf("*    "); return;}
	else if(n==3) {printf("    *"); return;}
	else if(n==4) {printf("    *"); return;}
	else if(n==5) {printf("    *"); return;}
	else if(n==6) {printf("*   *"); return;}
	else if(n==7) {printf("    *"); return;}
	else if(n==8) {printf("*   *"); return;}
	else if(n==9) {printf("    *"); return;}
}
else if(i==4)
{
	if(n==0)      {printf("*****"); return;}
	else if(n==1) {printf("    *"); return;}
	else if(n==2) {printf("*****"); return;}
	else if(n==3) {printf("*****"); return;}
	else if(n==4) {printf("    *"); return;}
	else if(n==5) {printf("*****"); return;}
	else if(n==6) {printf("*****"); return;}
	else if(n==7) {printf("    *"); return;}
	else if(n==8) {printf("*****"); return;}
	else if(n==9) {printf("*****"); return;}
}
}

int main()
{
	int n;
	scanf("%d",&n);
	printnumberstar(n);
	return 0;
}
