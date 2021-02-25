#include <stdio.h>

//Preprocessor for acos(), cos() function
#include <math.h> 

int main()
{
	//getting the output of pi
	double pi = acos(-1.00000);

	//Variable declaration
	int h, a, b;
	scanf("%d %d %d", &h, &a, &b);

	//Angle into radian
	double ar = (pi / 180.00) * a;
	double br = (pi / 180.00) * b;

	//Answer Calculation with Formula
	double ans = (0.50 * h * h * sin(ar + br)) / (cos(ar) * cos(br));

	//printing result
	printf("%.6lf\n", ans);

	return 0;
}
