#include <stdio.h> 
  
void towerOfHanoi(int n, char a, char c, char b) 
{ 
    if (n == 1) 
    { 
        printf("\n Move disk 1 from  %c to rod  %c", a, c); 
        return; 
    } 
    towerOfHanoi(n-1, a, b, c); 
    printf("\n Move disk %d from rod %c to rod  %c", n, a, c); 
    towerOfHanoi(n-1, b, c, a); 
} 
  
int main() 
{ 
    int n;
    printf("enter the no disk\n");
    scanf("%d",&n);
    towerOfHanoi(n, 'A', 'C', 'B');  
    return 0; 
} 
