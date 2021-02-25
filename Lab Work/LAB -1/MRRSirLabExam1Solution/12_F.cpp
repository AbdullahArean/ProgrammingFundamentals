//12
//12
//12
#include<stdio.h>
void printnumberstarl(int n, int i);
int inttoarray(long long int n, int arr[])
{
	int i=0;
	while(n>0)
	{
	arr[i]= n%10;
	n=n/10;
	i++;
	}
	return i;
}
void printnumberstar(int n)
{
	int arr[15];
	int len= inttoarray(n,arr);

	for(int i=0;i<5; i++)
	{
		printf(" ");
		for(int k=len-1; k>=0;k--)
		{
			printnumberstarl(arr[k],i);
			if(k!=0) printf(" ");
		}
		
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
