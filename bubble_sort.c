   #include<stdio.h>
   #include <time.h>
   #include<stdlib.h>
   
  void Bubble_Sort(int A[1000000],int n)
    {
	int i,j;
	int temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
	printf("Sorted Array is :\n ");
	for(i=0;i<n;i++)
	{
		printf("%d \t",A[i]);
	}
}
void main()
{
     clock_t start, end;
     double cpu_time_used;
     
     start = clock();
     int a[1000000];
     int n,i;
     printf("enter the size of the array\n");
     scanf("%d",&n);
     printf("enter the elements of  the array\n");
     for(i=0;i<n;i++)
     {
     	a[i] =rand() % 10000+1;
     }
      Bubble_Sort(a,n);
 
     end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
     printf("the computational timen taken for bubble_sort is ->%f\n",cpu_time_used);
     }
