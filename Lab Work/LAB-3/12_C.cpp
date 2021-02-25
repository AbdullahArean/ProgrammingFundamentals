//12
//12
#include<stdio.h>
int bstr[5];
int len=0;
int inttoarray(int n, int bstr[])
{
	int i=0;
	while(n>0)
	{
	bstr[i]= n%10;
	n=n/10;
	i++;
	}
	return i;
}
void whattodo(int x){
    if(x==0) 
    {for(int i=0; i<len;i++) {printf("%d",bstr[i]);}}
    else if(x%2!=0) {
        for(int i=0; i<len;i++)
        {
            if(bstr[i]==1) whattodo(x-1);
            else printf("%d",bstr[i]);
        }
    }
    else if(x%2==0) 
    {
        for(int i=0; i<len;i++)
        {
            if(bstr[i]==0) whattodo(x-1);
            else printf("%d",bstr[i]);
        }
    }
}
int main()
{
    int in,x;
    scanf("%d %d", &in,&x);
    len= inttoarray(in,bstr);
    whattodo(x);
    printf("\n");
    return 0;
}