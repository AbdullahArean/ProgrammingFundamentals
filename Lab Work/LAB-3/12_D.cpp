//12
//12
#include<stdio.h>

int strlen(char x[])
{
	int count=0;
	int i=0;
	while(x[i]!='\0') {count++;i++;}
	return count;
}

int main()
{
    char str[101][101];
    char stri[100000];
    scanf("%[^\n]",stri);
    int l= strlen(stri);
    int j=0, k=0;
    bool fl=0;
    for(int i=0; i<l; i++)
    {
        if(str[i]>66 && str[i]<91 && str[i]>96 && str[i]<123) 
        {   if(fl==0) k=0;
            stri[i]= str[j][k]; k++; fl=1;
        }
        if(j!=0) j++; fl=0;
        
    }
   
    return 0;
}