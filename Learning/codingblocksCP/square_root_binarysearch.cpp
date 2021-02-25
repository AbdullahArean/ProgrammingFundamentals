#include <iostream>
#include <algorithm>
#include<cmath>

using namespace std;
double square_root_binarysearch(double num)
{
    double lb = 0.0;
    double ub = num / 2.0;
    int count=0;
    while (lb <= ub)
    {
        count++;
        double mid = lb + (ub - lb) / 2.0;
        if (fabs(num -mid * mid*mid * mid)<= 1e-9)
            return mid;
        else if (num < mid * mid*mid*mid) // just multiplied one more mid to get cube, you can multiply more to get more
            ub = mid - 1e-8;
        else
            lb = mid + 1e-8;
    }
    printf("%d\n", count);
    return lb - 1e-8;
}

int main()
{
    double num;
    scanf("%lf", &num);
    printf("%lf\n", square_root_binarysearch(num));
    return 0;
}