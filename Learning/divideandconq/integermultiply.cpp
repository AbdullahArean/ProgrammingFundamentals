#include<stdio.h>
//Not Running Good
int max( int a, int b)
{
	return a>b?a:b;
}
int size(int a)
{
	int count=0;
	while(a>0)
	{
		a=a/10;
		count++;
	}
	return count;
}
int power(int a, int b)
{
	int ans=1;
	for(int i=0;i<b;i++) ans = ans*a;
	return ans;
}
int multiply(int x, int y)
{
	int n=max(size(x), size(y));
	int mid= n/2;
	int po= power(10, mid);
	if(n==1) return x*y;
	int xl =x/po; 
	int xr = x% po;
	int yl =y/po;
	int yr =y% po;

	int p1= multiply(xl,yl);
	int p2= multiply(xr, yr);
	int p3= multiply(xl+xr, yl+yr);
	return p1*power(10,n)+(p3-p1-p2)*po+p2;
}
int main()
{
	printf("%d", multiply(10010, 345));
	return 0;
}
