#include<stdio.h>
#include<stdlib.h>

using namespace std;
const int N = 100;
void d2b(int num)
{
    if(num==0) return ;
    d2b(num/2);
    printf("%d",num%2);

}
void d2banybase(int num, int base)
{
    if(num==0) return ;
    d2banybase(num/base, base);
    printf("%d",num%base);

}
int big_mod(int base, int power, int mod)
{
    if(power==0)    return 1;
    
    else if(power%2==1)
    {
        int p1 = base % mod;
        int p2 = (big_mod(base,power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else if(power%2==0) 
    {
        int p1 = (big_mod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }
    return 1;
}
// int main(){
//     int num, base;
//     scanf("%d %d",&num, &base);
//     d2banybase(num, base);
//     printf("\n");
// }
//     int a, b, c;
//     scanf("%d %d %d",&a,&b,&c);
//     printf("%d\n",big_mod(a,b,c));
// }

void arraytp(int arr1[],int n, int arr2[],int m, int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++; k++;
        }
        else 
        {
            arr3[k] = arr2[j];
            k++; j++;
        }
    }
    if(i>=n){
        for(j; j<m; j++) {arr3[k]= arr2[j]; k++;}
    }
    else {
        for(i; i<n; i++) {arr3[k]= arr1[j]; k++;}
    }

}
int main(){
    int n, arr1[N],m, arr2[N], arr3[2*N];
    scanf("%d", &n);
    for(int i=0; i<n; i++) { scanf("%d",&arr1[i]);}
    scanf("%d", &m);
    for(int j=0; j<m; j++) { scanf("%d",&arr2[j]);}
    arraytp(arr1,n,arr2,m,arr3);
    for(int j=0; j<(n+m); j++) { printf("%d ",arr3[j]);}
    printf("\n");

    


    return 0;
}
