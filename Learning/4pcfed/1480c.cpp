#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t n, r1, r2, m;
    std::cin >> n;
    int64_t l = 1, r = n;
    while (r - 1)
    {
        m = (1 + r) / 2;
        std::cout << "? " << m << '\n';
        std::cout.flush();
        std::cin >> r1;
        std::cout << "? " << m + 1 << '\n';
        std::cout.flush();
        std::cin >> r2;
        if (r2 > r1)
            r = m;
        else
            l = m + 1;
    }
    std::cout << "! " << l << '\n';
    return 0;
}


    #include <bits/stdc++.h>
     
    using namespace std;
     
    const int MAXN = 100010;
     
    int n;
    int a[MAXN];
     
    int query(int x)
    {
    	if (1 <= x && x <= n)
    	{
    		printf("? %d\n", x);
    		fflush(stdout);
    		scanf("%d", &a[x]);
    	}
    }
     
    int main()
    {
    	scanf("%d", &n);
    	a[0] = a[n + 1] = n + 1;
    	int L = 1, R = n;
    	while (L < R)
    	{
    		int m = (L + R) / 2;
    		query(m);
    		query(m + 1);
    		if (a[m] < a[m + 1])
    			R = m;
    		else
    			L = m + 1;
    	}
    	printf("! %d\n", L);
    	fflush(stdout);
    	return 0;
    }