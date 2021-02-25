//12
//12
//12

#include<stdio.h>

int main()
{
	
	int numisprime[1000005];
	int sum[100005]={0};
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
	;
	int sumi=0;
	for(int i=0; i <=1000005; i++)
	{
		if(numisprime[i] != -1)
		{
			sumi+=i;
		}
		sum[i]= sumi;
	}	
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int a, b;
	scanf("%d %d",&a, &b);
	if(a==1) a++;
	printf("%d\n", sum[b]-sum[a-1]);
	}
	return 0;
}

