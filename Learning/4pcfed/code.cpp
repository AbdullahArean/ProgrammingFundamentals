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
    scanf("%d", &n);               \
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
// typedef vector<int> vi;
// typedef vector<ld> vd;
// typedef vector<ll> vl;
 
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
 
const int MAXN = 1e5 + 3;
 
int main()
{
    fastio;
    testcase
    {
        int x, y, py=0, my=0, px=0, mx=0;
       
        char s[10005];
        scanf("%d %d", &x, &y);
        scanf("%s", s);
        //int len = strlen(s);
        //printf("%d\n",len);
        int i=0;
        while (s[i]!='\0')
        {
            if (s[i] == 'U')
                py++;
            else if (s[i] == 'D')
                my--;
            else if (s[i] == 'R')
                px++;
            else if (s[i] == 'L')
                mx--;
            i++;
        }
 
       
       if(x<=px&&x>=mx&&y<=py&&y>=my){puts("YES");}
		else{puts("NO");}
    }
}