//12
//12
//12
//12
//12
#include<stdio.h>
typedef struct student
{
    int id;
    char name[25];
    int num[5];
    int totaln;
}student;
void bubblesort(struct student arr[], int n)//Function for implementing bubble sort
{

	for(int i=0; i<n-1; i++)//Outer Loop
	{
		bool flag= false;//to make it more efficient
		for(int j=0; j<n-1-i; j++) //inner loop
		{
            if(arr[j].totaln==arr[j+1].totaln)
            {
                if(arr[j].id,arr[j+1].id)
                {
                    struct student temp = arr[j];
                //printf("Run");
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			//	printf("ran\n");
				flag= true;
                }
            }
			else if(arr[j].totaln>arr[j+1].totaln)//Comparison
			{	//Swapping
				struct student temp = arr[j];
                //printf("Run");
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			//	printf("ran\n");
				flag= true;
			}

		}
		if(!flag) return;
	}
}

int main()
{
    struct student arr[1005];
    int t;
    char c;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d ",&arr[i].id);
       	scanf("%[^\n]",arr[i].name);
		//printf("%s", arr[i].name);
        int total=0;
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&arr[i].num[j]);
            total +=arr[i].num[j];
        }
        arr[i].totaln = total;
        

    }
    bubblesort(arr,t);
    int j=1;
    for(int i=t-1; i>=0; i--)
    {
        
        printf("%5d%5d %-20s%5d",j,arr[i].id,arr[i].name,arr[i].totaln);
        for (int j = 0; j < 5; j++)
        {
            printf("%5d",arr[i].num[j]);
            
        }
    j++;
    printf("\n");
        

    }

    return 0;

}
/*
3
1254
Steve Rogers
79 85 92 49 63
5421
Bruce Wayne
89 57 67 95 71
1234
Mr or Mrs BCS
100 100 100 100 100
*/
    // 1 1234 Mr or Mrs BCS         500  100  100  100  100  100
    // 2 5421 Bruce Wayne           379   89   57   67   95   71
    // 3 1254 Steve Rogers          368   79   85   92   49   63

    // 1 1234 r or Mrs BCS          500  100  100  100  100  100
    // 2 5421 ruce Wayne            379   89   57   67   95   71
    // 3 1254 teve Rogers           368   79   85   92   49   63
