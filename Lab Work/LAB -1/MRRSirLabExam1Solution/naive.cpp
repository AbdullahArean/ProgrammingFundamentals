#include <stdio.h>
typedef long long ll;
int numisprime[10001] = {0};
//int solve1[1000]={0};
int count=0;
ll solve(int n)
{
    count++;
    //if(solve1[n]) return solve1[n];
    //else{
    ll ans = n * (n + 1) / 2;


    for (int i = 1; i < n; i++)
    {

        if (numisprime[i] != -1)
        {
            ans -= i;
            ans += solve(i);
        }
    }
    //solve1[n]=ans;
    return ans;
    //}
}
int main()
{
    numisprime[0] = -1;
    numisprime[1] = -1;
    for (int i = 2; i * i < 1000; i++)
    {
        if (numisprime[i] != -1)
        {
            for (int j = 2 * i; j < 1000; j += i)
                numisprime[j] = -1;
        }
    }
    int n;
    scanf("%d", &n);
    printf("%lld and Counted %d times\n", solve(n), count);
    return 0;
}