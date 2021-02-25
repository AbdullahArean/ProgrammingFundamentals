#include<iostream>
int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int j=0; j<testcase; j++)
    {
        long long int low=100000009;
        long long int n, sum=0;
        scanf("%lld",&n);
        for (int i = 0; i < n; i++)
        {
            long long int temp;
            scanf("%lld",&temp);
            low= (low<temp)?low:temp;
            sum+=temp;
        }
       if(sum==(low+((n*(n+1))/2))) printf("YES\n");
        else printf("NO\n");
        
    }
   return 0;

}