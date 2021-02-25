#include<stdio.h>
void swap(int a, int b)
{
	int temp= a;
	a=b;
	b= temp;
}

void bubblesort(int arr[], int n)//Function for implementing bubble sort
{

	for(int i=0; i<n-1; i++)//Outer Loop
	{
		bool flag= false;//to make it more efficient
		for(int j=0; j<n-1-i; j++) //inner loop
		{
			if(arr[j]>arr[j+1])//Comparison
			{	//Swapping
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			//	printf("ran\n");
				flag= true;
			}

		}
		if(!flag) return;
	}
}
void insertionsort(int arr[], int n)//Function for implementing insertion sort
{
	for(int i=1; i<n; i++)
	{
		int temp = arr[i];
		int  j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]= temp;
	}
}

void selectionsort(int arr[], int n) //Function for implementing selection sort
{
	for(int i=0; i<n-1; i++)
	{
		int temp=arr[i], ref=i;
		for(int j=i; j<n; j++)
		{
			if(arr[j]<temp) {temp= arr[j];ref=j;}
		}
		int temp2 = arr[i];
		arr[i] = temp;
		arr[ref] = temp2;
	}

}
int partition( int arr[], int lb, int ub)
{
	int pivot = arr[lb];
	int start = lb;
	int end = ub;
	while(start < end)
	{
		while(arr[start]<= pivot) start++;
		while( arr[end] > pivot) end--;
		if(start<end) swap(arr[start], arr[end]);
	}
	swap(arr[lb], arr[end]);
	return end;
}
void quicksort(int arr[], int lb, int ub) //Function for implementing quick sort
{
	if(lb<ub)
	{
		int loc= partition(arr, lb, ub);
		quicksort(arr, lb, loc-1);
		quicksort(arr, loc+1, ub);
	}
}
void merge(int arr, int lb, int mb,int ub)
{
	
} 
int main()
{
	int arr[100], n;//Initializing
	scanf("%d",&n);//Input

	for(int i=0; i<n; i++)//Array Input
	{
		scanf("%d",&arr[i]);
	}

	//selectionsort(arr,n);//Calling function
	quicksort(arr, 0,n-1);
	for(int i=0; i<n; i++)//Giving Output
	{
		printf("%d ",arr[i]);
	}

	printf("\nProgram Successfully Executed! Thank You! Arean You can do it, keep it up!\n");

	return 0;//Program Successfully executed
}

