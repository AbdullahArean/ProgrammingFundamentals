//12
//12

#include<stdio.h>

int main()
{
	
	int numisprime[1000005];
	for(int i = 1; i < 1000001; i++)
	{
		numisprime[i] = i;
	}
	
	for(int i = 2; i*i < 1000001; i++)
	{
		if(numisprime[i] != -1)
		{
			for(int j = 2*i; j <1000001 ; j += i)
				numisprime[j] = -1;
		}
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int a, b;
	scanf("%d %d",&a, &b);
	if(a==1) a++;
	int sum=0;
	for(int i=a; i <=b; i++)
	{
		if(numisprime[i] != -1)
		{
			sum+=i;
		}
	}
	printf("%d\n", sum);
	}
	return 0;
}

