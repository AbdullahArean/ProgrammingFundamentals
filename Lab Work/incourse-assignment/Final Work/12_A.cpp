#include <stdio.h>

//Preprocessor for acos(), cos() function
#include <math.h> 

int main()
{
	//getting the output of pi
	double pi = acos(-1.00000);

	//Variable declaration
	long long int h, a, b;
	scanf("%lld %lld %lld", &h, &a, &b);

	//Angle into radian
	double ar = (pi / 180.00) * a;
	double br = (pi / 180.00) * b;

	//Answer Calculation with Formula
	long double ans = (0.50 * h * h * sin(ar + br)) / (cos(ar) * cos(br));

	//printing result
	printf("%.6Lf\n", ans);

	//Succesful execution of program returns 0
	return 0;
}
