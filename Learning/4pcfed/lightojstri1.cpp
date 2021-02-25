#include<iostream>

#include<cstring>

using namespace std;
int solve(char a[], char b[])
{
    int count=0;
    int i=0;
    int al= strlen(a);
    int bl= strlen(b);

    while(i<al)
    {
        if(a[i]==b[0])
        {
            bool flag=1;
            for(int j=1; j<bl; j++)
            {
                if(a[i+j]!=b[j]) {flag=0; break;}
            }
            if(flag){ count++; i+=bl;}
        }
        else i++;
    }
    return count;
}
int main()
{
    int t;
    
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {   char target[1000006], given[1000006];
       // scanf("%s %s",target, given);
        fgets(target,1000006, stdin);
        fgets(given, 1000006,stdin);
        int fre= solve(target, given);
        printf("Case %d: %d\n",i+1,fre);

    }
    return 0;
}