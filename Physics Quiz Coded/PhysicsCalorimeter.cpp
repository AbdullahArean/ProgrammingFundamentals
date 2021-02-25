#include<stdio.h>
#define max 100
int main()
{	double nom=0, dem=0, tf,mf,tif;
	double mg[max], c[max], te[max];
	int t;
	scanf("%d",&t);
	printf("Give Final Temp, SubstanceMass, Substance temperature\n");
	scanf("%lf %lf %lf",&tf,&mf,&tif);
	for (int i=0;i<t; i++)
	{	printf("Mass(kg) Late.(jkgc) tempini\n");
		scanf("%lf %lf %lf",&mg[i],&c[i],&te[i]);
		te[i]=tf-te[i];
	}
	
	for (int i=0;i<t; i++)
	{
		nom += (mg[i])*(c[i])*(te[i]);
	}
	printf("%lf\n",(-1)*(nom/(mf*(tf-tif))));
}
