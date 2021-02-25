#include<iostream>
#include<algorithm>
typedef struct student{
    int id;
    char token;
} student;
using namespace std;
bool myComparestruct(student a, student b)
{
    return a.id<b.id;
}
bool myCompare(int a, int b)
{
    return a<b;
}
void ArrayOutput(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return ;
}

int main()
{
    int a[] = {4, 5, 6,3 ,2, 1,8,9};
    int n= sizeof(a)/sizeof(a[0]);
    sort(a, a+n, myCompare);
    ArrayOutput(a,n);

    //Sorting Structure
    struct student stu[3];
    stu[0].id = 2;
    stu[0].token='b';
    stu[1].id = 1;
    stu[1].token='a';
    stu[2].id = 3;
    stu[2].token='c';
    sort(stu, stu+3, myComparestruct);
    for(int i=0; i<3; i++)
    {
        printf("%d %c\n", stu[i].id, stu[i].token);
    }
    
    

    return 0;
}