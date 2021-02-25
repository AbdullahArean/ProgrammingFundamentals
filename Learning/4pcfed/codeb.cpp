/**Bismillahir Rahmanir Rahim.**/

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <utility>
#include <vector>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>
#include <bitset>
#include <complex>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
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

#pragma GCC optimize("O3")
#pragma GCC target("sse4")

typedef long double ld;
typedef long long ll;

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

int T, n, m, h[110];
int pla()
{
    for (int i = 1; i < n; i++)
        if (h[i] < h[i + 1])
        {
            h[i]++;
            return i;
        }
    return -1;
}
int main()
{
    testcase
    {
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; i++)
            scanf("%d", &h[i]);
        int res = 0;
        while (m-- && res != -1)
            res = pla();
        printf("%d\n", res);
    }
    return 0;
}