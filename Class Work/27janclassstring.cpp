#include<stdio.h>

int strlen(char x[])
{
	int count=0;
	int i=0;
	while(x[i]!='\0') {count++;i++;}
	return count;
}

void strcpy(char x[], char y[])
{
	int len= strlen(x);
	for(int i=0; i<len;i++)\
	{
		y[i]=x[i];
	}
}
void strcpyn(char x[], char y[], int n, int m)
{


	int len= strlen(x);
	if(m>len) {y[0]= '\0'; return;}
	int j=0;
	for(int i=m; i<n && i<len;i++)\
	{
		y[j]=x[i];
		j++;
		if(x[i]=='\0') break;
	}
}

void strCat(char x[], char y[], char z[])
{
	int n= strlen(x);
	int m= strlen(y);
	int i=0, j=0, k=0;
	for(i; i<n;i++){ z[k]= x[i]; k++;}
	for(j; j<m+1; j++){ z[k] = y[j]; k++;}

}

void strRev(char x[])//Did not worked
{
	int len= strlen(x);
	printf("%d",len);
	int i=0;
	int bound = len/2;
	for(int i=0; i< bound ; i++)
	{
		char temp;
		temp= x[i];
		x[i]= x[len-i];
		x[len-1] = temp;
	}
}

int strcmp(char x[], char y[])
{
	int n= strlen(x);
	int m = strlen(y);
	int i=0;
	while(i<n || i<m)
	{
		if(x[i]> y[i]) return 3;
		if(y[i]>x[i]) return 2;
		i++;
	}
	return 1;
}//Make it more efficient without using string length
/*
int fs( char x[], char c)
{
	for(int i=0; x[i]!='\0'; i++)
	{
		if(x[i]==c) return i;
	}
	return -1;
}

int fs2( char x[], char c)
{
	int count=0
	for(int i=0; x[i]!='\0'; i++)
	{
		if(x[i]==c) count++
	}
	return count;
}
*/
int fs3( char x[], char y[])
{
	int i=0;
	int j=0;
	for(i; x[i]!='\0'; i++)
	{
		if(x[i]==y[j])
		{
			bool flag=0;
			for(int j=0; y[j]!='\0';j++)
			{
				if(x[i]==y[j]) i++;
				else
				{
					flag= 1; break;
				}
			}
			if(flag==0) return 1;
		}
	}
	return 0;
}
/*
Substring:
Prefix= Righthand Trim+ 1st character theke shuru hoy
Suffix = Lefthand Trim + last character theke shesh hoy
Subsequence:
Sequence maintain kore given string in the string! Not necessary they are  together! But in string we will get them!
*/
int main()
{
	int a, b;
	char x[100], y[100], z[100];
	int arr[] = {2,3,5};
	scanf("%s",x);
	//strRev(x);
	sscanf(arr,"%d %d", &a,&b);
	printf("%d %d\n", a,b);
}
//Learn Strtok
