#include<stdio.h>

int power(int a, int n)
{
	if(n==0) return 1;
	if(n==1) return a;
	else
	{
	int R= power(a,n/2);
	if(n%2==0) return  R*R;
	else return R*a*R;
	} 
}
long long int bigmod(long long a, long long p,long long int m)
{
	if(p==0) return 1;
	if(p%2)// if power is odd
	{
		return ( (a%m) * (bigmod(a,p-1,m)) )%m;
	} 
	else
	{
		long long c= bigmod(a, p/2 , m);
		return ( (c%m)*(c%m))%m;
	}
} 
int main()
{
	long long int a, p,m;
	//printf("%d\n", power(2,3));
	scanf("%lld %lld %lld",&a, &p, &m);
	printf("%lld\n", bigmod(a,p,m));
	return 0; 
}
