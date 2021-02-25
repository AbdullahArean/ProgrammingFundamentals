//problem 3
#include<stdio.h>
#define max 100
int main()
{	double nom=0, dem=0;
	double mg[max], c[max], te[max];
	int t;
	scanf("%d",&t);
	for (int i=0;i<t; i++)
	{
		scanf("%lf %lf %lf",&mg[i],&c[i],&te[i]);
	}
	
	for (int i=0;i<t; i++)
	{
		dem  += (mg[i])*(c[i]);
		nom += (mg[i])*(c[i])*(te[i]);
	}
	printf("%lf\n",nom/dem);
}
