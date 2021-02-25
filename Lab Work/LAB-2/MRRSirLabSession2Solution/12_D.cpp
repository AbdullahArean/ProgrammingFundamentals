//12
//12
//12
//12
//12
#include<stdio.h>
int arr[8][9];
int res(int ides, int jdes);
int MAX(int a, int b)
{
  return a>b?a:b;
}
int isin(int a, int b)
{
  if(a>=0 && a<8)
    {
      if(b>=0 && b<8) return 1;
      else return 0;
    }
  else return 0;
}

int main()
{
   
    char tempc;
    int ides, jdes;
    for (int i = 0; i<8; i++)
    {
        for (int j =0; j<9; j++)
        {
            scanf("%c",&tempc);
            int temp = (int)tempc;
            if (temp==12) continue;
            if(temp==46) arr[i][j]=0;
            else if(temp==48) {ides=i; jdes=j; arr[i][j]=0;}
            else if(temp==80) arr[i][j]=1;
            else if(temp==66) arr[i][j]=3;
            else if(temp==75) arr[i][j]=5;
            else if(temp==82) arr[i][j]=3;
            else if(temp==81) arr[i][j]=8;
            else if(temp==65) arr[i][j]=10; 
        }
    }
	   int maxres=-1, restemp;
    // printf("%d %d\n",ides, jdes);
    // printf("%d\n",arr[ides][jdes]);
    for(int i=2; i>=-2;i--)
    {
        if(i==0) continue;
        int itemp= ides+i;
        for(int j=2; j>=-2; j--)
	    {
            if(j==0 || i==j || ((-1)*i)==j) continue;
	        int jtemp = jdes+j;
	        if(!isin(itemp,jtemp)) continue; 
	        restemp = arr[itemp][jtemp] + res(itemp,jtemp);
	        maxres = MAX(restemp,maxres);
        }
    }
  printf("%d\n",maxres);

	return 0;
}
int res(int ides, int jdes)
{   int maxres=-1, restemp;
    // printf("%d %d\n",ides, jdes);
    // printf("%d\n",arr[ides][jdes]);
    for(int i=2; i>=-2;i--)
    {
        if(i==0) continue;
        int itemp= ides+i;
        for(int j=2; j>=-2; j--)
	    {
            if(j==0 || i==j || ((-1)*i)==j) continue;
	        int jtemp = jdes+j;
	        if(!isin(itemp,jtemp)) continue; 
	        restemp = arr[itemp][jtemp];
	        maxres = MAX(restemp,maxres);
        }
    }
  return maxres;
}

/*
B.KAB...P..P...KP.R.P.........Q....2..R..........P...P..........
*/

