#include<iostream>
using namespace std;
void insertion(int a[],int n);
int main()
 {
   int a[100],n,i;
   cout<<"Enter the size of array";
   cin>>n;  
   cout<<"Enter the elements of array";
   for(i=0;i<n;i++)
   cin>>a[i];
   insertion(a,n);
   cout<<"Elements of array are :";
   for(i=0;i<n;i++)
   cout<<a[i];
  }
 void insertion(int a[],int n)
 {
   int i,j,key;
   for(i=1;i<n;i++)
   {
     key=a[i];
     j=i-1;
     while(j>=0 && a[j]>key)
     {
       a[j+1]=a[j];
       j=j-1;
     }
     a[j+1]=key;
   }
  }
 
