#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[105]={0} , b[105]={0};
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            b[arr[i]]++;
        }
        sort(arr, arr+n);
        printf("%d\n",n-b[arr[0]]);
    }
    return 0;
}