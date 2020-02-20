#include <stdio.h>
#include<stdlib.h> 
#include<time.h>
  
void swap(int *min, int *i) 
{ 
    int temp = *min; 
    *min = *i; 
    *i= temp; 
} 
  
void selectionSort(int arr[1000000], int n) 
{ 
    int i, j, min_idx; 
  
   for (i = 0; i < n-1; i++) 
    { 
         min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        swap(&arr[min_idx], &arr[i]); 
    } 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
 
int main() 
{ 
	clock_t start,end;
	double time_taken;
 	int n,i;
 	int arr[1000000];
 	
 	printf("Enter the size of the array\n");
 	scanf("%d",&n);
 	printf("Enter the elements of the array\n");
 	for(i=0;i<n;i++){
 					arr[i]=rand() % 10000+1;
 				}
 	
    start=clock();
    selectionSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    end=clock();
    time_taken=((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time taken to comute the selection sort is %f\n",time_taken);
    return 0; 
} 
