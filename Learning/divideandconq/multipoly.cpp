#include<stdio.h>

void inputarray(int arr[], int n)
{
	for(int k=0; k<n; k++) scanf("%d", &arr[k]);
}
void outputarray(int arr[], int n)
{
	for(int l=0; l<n; l++) printf("%d ", arr[l]);
}

void multipolynaive()
{

	int A[100], B[100], product[1000];
	int n;
	scanf("%d",&n);
	inputarray(A,n);
	inputarray(B,n);
	for(int i=0; i<(2*n-1);i++) product[i] = 0;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			product[i+j]= product[i+j]+ A[i]*B[j];
		}
	}
	outputarray(product,2*n-1);
	printf("\n");

}
void multipolydc()
{
	if(n==1) R[0] 
}
int main()
{
	
	int A[100], B[100], product[1000];
	int n;
	scanf("%d",&n);
	inputarray(A,n);
	inputarray(B,n);
	for(int i=0; i<(2*n-1);i++) product[i] = 0;
	
	multipolydc(A,B,n,0,0);

	return 0;
}
