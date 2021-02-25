#include<stdio.h>
#include<string.h>
struct Point2D{
	double x;
	double y;
};
struct Student{
	int id;
	char name[100];

};
void Strcpy(char a[], char b[])
{
	int i=0;
	do 
	{
	a[i]= b[i];
	i++;
	}while(b[i]!='\0');
}
int main()
{
   	puts("Hello");
	struct Point2D a;
	//scanf("%lf %lf", &a.x, &a.y);
	//printf("%lf %lf\n", a.x,a.y);
	struct Student s;

	s.id = 365;
	strcpy(s.name, "Blank");
	//s.name = "Blank"

	printf("%d %s\n", s.id, s.name);
	return 0;
}
/*
Point (x,y)
Student(id, name)





*/
