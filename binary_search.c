#include <stdio.h> 
  
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 

        if (arr[mid] == x) 
            return mid; 
 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
		else
        	return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 
  
int main(void) 
{ 
	int key;
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("enter the element to find\n");
    scanf("%d",&key);
    int result = binarySearch(arr, 0, n - 1, key); 
    if(result) 
     	printf("Element is present in array index %d\n",result);
     else
    	printf("Element is not present at index"); 
    return 0; 
} 

