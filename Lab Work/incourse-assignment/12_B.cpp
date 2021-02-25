//12_B Solution of Abdullah Ibne Hanif Arean
#include <stdio.h>
typedef long long int ll;

//global declaration of prime number array
int numisprime[256] = {0};
//global declaration of memory array storing solve function result
ll memory[256] = {0};

//solve function to calculate answer
ll solve(int n)
{
    if (memory[n])
        return memory[n]; //checking already in memory array
    else
    {
        ll ans = n * (n + 1) / 2;

        for (int i = 1; i < n; i++)
        {

            if (numisprime[i] != -1)
            {
                ans -= i;
                if (memory[n])
                    ans += memory[n]; //checking already in memory array
                else
                    ans += solve(i);
            }
        }
        memory[n] = ans; // keeping answer in memory
        return ans;
    }
}
int main()
{
    //Making an array where prime numbered position will get 0 and others will get -1
    numisprime[0] = -1;
    numisprime[1] = -1;
    for (int i = 2; i * i < 255; i++)
    {
        if (numisprime[i] != -1)
        {
            for (int j = 2 * i; j < 255; j += i)
                numisprime[j] = -1;
        }
    }

    //getting input from user and output result
    int n;
    scanf("%d", &n);
    printf("%lld\n", solve(n));
    return 0;
}