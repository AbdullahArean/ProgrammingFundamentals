//12
//12
#include<stdio.h>

int inttoarray(long long int n, int arr[])
{
	int i=0;
	while(n>0)
	{
	arr[i]= n%10;
	n=n/10;
	i++;
	}
	return i;
}
void bubblesort(int arr[], int n)
{

	for(int i=0; i<n-1; i++)
	{
		bool flag= false;
		for(int j=0; j<n-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{	
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			
				flag= true;
			}

		}
		if(!flag) return;
	}
}
void print1(int n, int arr[])
{
	for(int i=(n-1); i>=0;i--) 
		{	
		printf("%d",arr[i]);
		}

}
void print2(int n, int arr[])
{
	int arr2[15];
	for(int i=0; i<n; i++){
		arr2[i]=arr[i];
	}
	
	for(int k=0; k<n; k++)
	{
		if(arr2[k]!=0) {
			int temp= arr2[k];
			arr2[k]=arr2[0];
			arr2[0]= temp;
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",arr2[i]);
	}

}
int main()
{
	int arr[15], arr2[15];
	long long int num;
	scanf("%lld",&num);
	if(num>=0)
	{
		int n= inttoarray(num, arr);
		bubblesort(arr,n);
		printf("Maximum = ");
		print1(n,arr);
		printf("\nMinimum = ");
		print2(n,arr);
		printf("\n");
	}
	else
	{
		num = num * (-1);
		int n= inttoarray(num, arr);
		bubblesort(arr,n);
		printf("Maximum = -");
		print2(n,arr);
		printf("\nMinimum = -");
		print1(n,arr);
		printf("\n");


	}
	
	

		
	

	
	//int n= inttoarray(11223223, arr);
	//for(int i=0; i<n; i++) printf("%d",arr[i]);
	return 0;
}