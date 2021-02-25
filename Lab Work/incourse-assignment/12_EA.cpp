#include<stdio.h>
#include<string.h>
int strLen(char s[])
{
    int i=0;
    while(s[i]!=0) i++;
    return i;
}
int wordadd(int *count,char c[][6],char i[])
{
    int r=0;
    while(r<4)  //creating new word
    {
        c[*count][r+1]=i[r];
        r++;
    }
    c[*count][0]=1;
    ++*count; //increasing the number of word
}

int partition(char i[], char c[][6],int *count,int *max)
{
    int j,r=0;
    if(*count==0) //for first block
    {
        *max=1;
        ++*count;
        while(r<4) //building of a new word
        {
            c[0][r+1]=i[r];
            r++;
        }
        c[0][0]=1;//number of repeatation+1;
        return 0;
    }

    //if it is not the first word
    for(j=0; j<*count; j++)
    {
        if(i[0]==c[j][1]&&i[1]==c[j][2]&&i[2]==c[j][3]&&i[3]==c[j][4])// cheaking a substring if it is a repeatation
        {
            c[j][0]++;
            if(c[j][0]>*max) //if it is the word that mostly repeated?
            {
                *max=c[j][0];
            }
            return 0;
        }
    }

    wordadd(count,c,i);//if the current word is not repeated then we have to creat a new word with
    return 0;

}

int strCmp(char c[],char s[])
{
    //printf("%s %s",c,s);
    int i,res=1;
    for(i=0; i<4; i++)
    {

        if(c[i]>s[i])
        {
            return -1;
        }
        else if(c[i]==s[i])
        {
            continue;

        }
        if(c[i]<s[i])
        {
         return 1;
        }



    }

}
int strCpy(char c[],char ch[][6],int number)//fstring copy function
{
    int i;
    for(i=1; i<5; i++) ch[number][i-1]=c[i];
    return 0;
}


int main()
{
    int i=0,j,n,count=0,flag=0,length=2,width=0,max=0,number=0,len;
    char s[200],c[800][6],ch[800][6];
    memset(c,0,sizeof(c));
    memset(ch,0,sizeof(ch));

    scanf("%s",&s);
    len=strLen(s);

    for(i=3; i<len; i++)
    {
       partition(s+i-3,c,&count,&max); // count= number of different 4 block word && max= maximam repeatation of a 4block word
    }



    for(i=0; i<count; i++) //seperating the words who are mostly repeated in ch array ;
    {
        if(c[i][0]==max)
        {
            strCpy(c[i],ch,number);
            number++;
            // number variable is containg the total maximum repeatition word number;
        }
    }

    //below codes are for sorting the desired words lexicographically

    int ar[number]; //declaring an array for helping to solve the words string's index
    for(i=0; i<number; i++) ar[i]=i;

    int q,w,T;
    for(i=1; i<number; i++)
    {
        T=strCmp(ch[ar[i-1]],ch[ar[i]]); //string comparism
        if(T==1) continue;


         //need to sort
         //sorting with the insertion sort idea
        else if(T==-1)
        {
            q=ar[i];
            w=i;
            while(T==-1&&i!=0)
            {
                ar[i] = ar[i-1];
                i--;
                if(i>0)
                T=strCmp(ch[ar[i-1]],ch[q]);
            }
            ar[i]=q;
            i=w;
        }

    }
    // sorting complete

    for(i=0; i<number; i++) printf("%s\n",ch[ar[i]]);//loop for printing array
    return 0;
}