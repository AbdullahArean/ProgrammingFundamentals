//Problem 15
#include<stdio.h>
#define max 100
int main()
{
	double p[max],v[max],t[max], nom=0, denom=0, denomp=0;
	int test;
	scanf("%d",&test);
	for(int i=0; i<test; i++)
	{
		scanf("%lf %lf %lf",&p[i],&v[i],&t[i]);
		nom+= p[i]*v[i];
		denomp+= v[i];
		denom+= p[i]*v[i]/t[i]; 
	}
	printf("T==%lf\n",nom/denom);
	printf("P==%lf\n", nom/denomp);
	return 0;
}
