//12
//12
//12
#include<stdio.h>

int main()
{
	
	int numisprime[1000005];
	int a, b;
	scanf("%d %d",&a, &b);
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
	if(a==1) a++;
	for(int i=a; i <=b; i++)
	{
		if(numisprime[i] != -1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}

