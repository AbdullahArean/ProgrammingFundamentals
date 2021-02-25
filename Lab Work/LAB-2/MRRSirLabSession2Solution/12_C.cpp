//12
//12
//12
//12
//12
//12
#include<stdio.h>
#include<math.h>

typedef struct Point
{
double x,y;
}Point;
bool isPoly(int t, struct Point arr[]){
	double sumx=0;
	double sumy=0; //Getting sum
	for(int i=0; i<t-1; i++)
	{
	sumx += (arr[i+1].x- arr[i].x);
	sumy += (arr[i+1].y- arr[i].y);
	}
	sumx+= (arr[0].x-arr[t].x);
	sumy+= (arr[0].y-arr[t].y);
	if(sumx==0 && sumy==0) return 1;
	else return 0;

}
int main()
{
	int t;
	struct Point arr[101];
	scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
	scanf("%lf %lf", &arr[i].x, &arr[i].y);
	}
	if(isPoly(t,arr)) printf("No convex polygon possible\n");
	else printf("Convex polygon exists\n");
	return 0;
}
