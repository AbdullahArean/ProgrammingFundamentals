#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v1;
    v1.reserve(100);
    int t,n;
    scanf("%d",&n);
    t=n;
    while(t--)
    {
        int temp;
        scanf("%d",&temp);
        v1.push_back(temp);
    }
    
    for(int i=0; i<n; i++)
    {
        printf("%d ",v1[i]);
        
    }
    printf("\n");
    sort(v1.begin(), v1.end());
    v1.pop_back();
    v1.clear();
    for(int i=0; i<v1.size(); i++)
    {
        printf("%d ",v1[i]);
        
    }
    
    return 0;
}