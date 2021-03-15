//12
//12
//12
#include<stdio.h>


long long int memory[50]={0};
long long int fact(int n)
{
    if(n==1) {
        memory[n]=1;
        return memory[n];

    }
    else if(n==2){
        memory[n]=2;
        return memory[n];

    }
    else if(memory[n]!=0) return memory[n];
    else{
        long long int ans= fact(n-1)*n;
        memory[n]=ans;
        return ans;
    }
}
void print(long long int n)
{
    printf("%lld! = ",n);
    for(int i=1; i<=n; i++)
    {
        printf("%d ",i);
        if(i!=n) printf("x ");
    }
    //printf("= \n");
    printf("= %lld\n",fact(n));
}

int main()
{
    long long int n;
    scanf("%lld",&n);
    for(int i=1; i<=n; i++)
    {
        print(i);
    }
    return 0;
}