/**Bismillahir Rahmanir Rahim.**/

#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>

#include <fstream>
#include <sstream>
#include <iomanip>
#include <utility>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <functional>
#include <numeric>
#include <bitset>
#include <complex>
#include <ctime>
#include <climits>

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(0);
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)

#define IntArrayInput(intarray, n) \
                                   \
    for (int i = 0; i < (n); ++i)  \
        scanf("%d", &intarray[i]);
#define Vectorinput(v1, n)      \
    for (int i = 0; i < n; i++) \
    {                           \
        int temp;               \
        scanf("%d", &temp);     \
        v1.push_back(temp);     \
    }
#define IntArrayOutput(intarray, n) \
    for (int i = 0; i < (n); ++i)   \
    {                               \
        printf("%d ", intarray[i]); \
    }                               \
    printf("\n");
#define testcase     \
    int t;           \
    scanf("%d", &t); \
    while (t--)

typedef long double ld;
//typedef long long ll;

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

using namespace std;
const int maxn = 1e5 + 7;
typedef long long LL;

//All the variables declared Globally
int t;//Number of testcase
int n, m; //Number of plank and number of painter
int a[maxn], b[maxn], c[maxn];//arrays previous color dream color, paint color of painter
queue<int> pos[maxn]; //Position
int Ans[maxn];//answer of where painter will start work


int main() // main function
{
    scanf("%d", &t); //scanning in number of testcases
    while (t--)
    {
        scanf("%d%d", &n, &m); //input of n, m;
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &b[i]);
            if (a[i] != b[i]) //if two color is not same do the following
                pos[b[i]].push(i);
        }
        for (int i = 1; i <= m; i++)
            scanf("%d", &c[i]);

        bool flag = 1;

        for (int i = 1; i <= m; i++)
        {
            if (!pos[c[i]].empty())
                Ans[i] = pos[c[i]].front(), pos[c[i]].pop();
            else
                Ans[i] = 0;
        }

        if (!Ans[m])
            for (int j = 1; j <= n; j++)
                if (b[j] == c[m])
                {
                    Ans[m] = j;
                    break;
                }
        for (int i = m - 1; i >= 1; i--)
            if (!Ans[i])
                Ans[i] = Ans[m];

        if (!Ans[m])
            flag = 0;
        for (int i = 1; i <= n; i++)
            if (pos[i].size())
            {
                flag = 0;
                break;
            }

        puts(flag ? "YES" : "NO");
        if (flag)
        {
            for (int i = 1; i <= m; i++)
                printf("%d ", Ans[i]);
            puts("");
        }

        for (int i = 1; i <= n; i++)
            while (!pos[i].empty())
                pos[i].pop();
    }
    return 0;
}
