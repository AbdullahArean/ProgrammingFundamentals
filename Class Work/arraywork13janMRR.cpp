#include<stdio.h>
#include<stdlib.h>

using namespace std;
const int N = 100;

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
void arraytp2(int arr1[],int s, int m, int e){
    int arr3[e-s+1];
    int i=s;
    int j=m+1;
    int k=0;
    while(i<=m && j<=e){
        if(arr1[i]<arr1[j]){
            arr3[k] = arr1[i];
            i++; k++;
        }
        else 
        {
            arr3[k] = arr1[j];
            k++; j++;
        }
    }
    if(i>m){
        for(j; j<=e; j++) {arr3[k]= arr1[j]; k++;}
    }
    else {
        for(i; i<=m; i++) {arr3[k]= arr1[i]; k++;}
    }
    for(int i=0; i<=(e-s); i++) {arr1[i+s]= arr3[i]; }


}
int main(){
    int n,m,s,e, arr1[N],arr3[N];
    scanf("%d", &n);
    for(int j=0; j<n; j++) { scanf("%d",&arr1[j]);}

    scanf("%d %d %d", &s ,&m, &e);

    arraytp2(arr1,s,m,e);
    for(int j=0; j<n; j++) { printf("%d ",arr1[j]);}
    printf("\n");




    return 0;
}
