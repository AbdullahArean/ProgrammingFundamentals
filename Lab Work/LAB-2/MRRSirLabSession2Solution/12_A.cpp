//12
//12
//12
//12
#include<stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	int mid = (num-1)/2;
	for( int i=0; i<mid; i++)
	{
		for(int j=0; j<num; j++)
		{
			if(j==mid) printf("$");
			else if( j== mid+i) printf("$");
			else if(j== mid -i)printf("$");
			else printf("_");
		}
		printf("\n");
	}
	for( int j=0; j< num; j++) printf("$");
	printf("\n");
	for( int i=mid-1; i>=0; i--)
	{
		for(int j=0; j<num; j++)
		{
			if(j==mid) printf("$");
			else if( j== mid+i) printf("$");
			else if(j== mid -i)printf("$");
			else printf("_");
		}
		printf("\n");
	}

return 0;
}

