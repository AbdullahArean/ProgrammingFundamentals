//12
//12
#include<stdio.h>
typedef struct Word{
    char word[101];
}Word;
int strlen(char x[])
{
	int count=0;
	int i=0;
	while(x[i]!='\0') {count++;i++;}
	return count;
}

int main()
{
    struct Word arr[101];
    char str[100000];
    scanf("%[^\n]",str);
    int l= strlen(str);
    bool flag =false;
    int j=0, k=0;
    for(int i=0; i<l; i++)
    {
        if(str[i]>66 && str[i]<91 && str[i]>96 && str[i]<123) 
        {
            if(!flag && j!=0) k=0;
            arr[j].word[k]= str[i]; k++; flag= true;
        }
        if(j!=0) j++; flag= false;
    }
    printf("run %s",arr[1].word);
    return 0;
}