//12
#include <stdio.h>

void merge(int arr[], int start, int mid, int end) {

  int len1 = mid - start + 1;
  int len2 = end - mid;

  int leftArr[len1], rightArr[len2];

  for (int i = 0; i < len1; i++)
    leftArr[i] = arr[start + i];
  for (int j = 0; j < len2; j++)
    rightArr[j] = arr[mid + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = start;

  while (i < len1 && j < len2) {
    if (leftArr[i] <= rightArr[j]) {
      arr[k] = leftArr[i];
      i++;
    } else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  while (i < len1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  while (j < len2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int start, int end) {
  if (start < end) {

    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
  }
}

void display(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int upper_bound(int arr[], int N, int X) 
{ 
    int mid; 
  
    int low = 0; 
    int high = N; 
  
   
    while (low < high) { 
       
        mid = low + (high - low) / 2; 
  
        
        if (X >= arr[mid]) { 
            low = mid + 1; 
        } 
  
        else { 
            high = mid; 
        } 
    } 
  
    return low; 
} 
int main() {
    int sum=0;
while(true)
{

    int i;
    scanf("%d",&i);
    if(i==-1) break;
    sum+=i;
}
printf("%d\b\n",sum);
}