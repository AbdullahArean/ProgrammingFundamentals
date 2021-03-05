//12
//12
//12
#include<stdio.h>
int arr[1000006], num;
void printarr()
{
    for( int i=0; i<num; i++) {printf("%d", arr[i]); if(i!= num-1) printf(" ");}
}
void inc(int n)
{
    for( int i=0; i<num; i++) arr[i]+=n;
}
void dec(int n)
{
    for( int i=0; i<num; i++) arr[i]-=n;
}
int main()
{
    int t;
	scanf("%d", &num);
	for( int i=0; i<num; i++) scanf("%d", &arr[i]);
	scanf("%d", &t);
    int count=0;
    while(t>=count)
    {
        
        char com;
        scanf("%c",&com);
        if(com=='\n') count++;
        else if(com=='P') {printarr(); printf("\n");}
        else if(com=='I') { int temp; scanf("%d",&temp); inc(temp);}
        else if(com=='D') { int temp; scanf("%d",&temp); dec(temp);}
    }
	

return 0;
}

