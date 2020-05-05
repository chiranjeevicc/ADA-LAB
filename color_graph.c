/*  Write a program for the following: Given an undirected graph and a number m, determine if the graph can be colored with
 at most m colors such that no two adjacent vertices of the graph are colored with the same color. Here coloring of
 a graph means the assignment of colors to all vertices. */
 
#include<stdio.h> 
#include<stdbool.h> 
   
#define V 4 
int i,j;
   
void printSolution(int color[]); 
   
bool isSafe (bool graph[V][V], int color[]) 
{ 
	int i,j;
    for ( i = 0; i < V; i++) 
        for (j = i + 1; j < V; j++) 
        if (graph[i][j] && color[j] == color[i]) 
            return false; 
    return true; 
} 
    
bool graphColoring(bool graph[V][V], int m, int i, int color[V]) 
{ 
       if(i==V) 
    { 
   
        if(isSafe(graph,color)) 
        { 
               printSolution(color); 
            return true; 
        } 
        return false; 
    } 
      
       for(j=1; j<=m; j++) 
    { 
        color[i]=j; 
          
          if(graphColoring(graph,m,i+1,color)) 
            return true; 
          
        color[i]=0; 
    } 
   
    return false; 
} 
   

void printSolution(int color[]) 
{ 
    printf("Solution Exists:" " Following are the assigned colors \n"); 
    for (i = 0; i < V; i++) 
      printf(" %d ", color[i]); 
    printf("\n"); 
} 
   
int main() 
{ 
   
    bool graph[V][V] = {{0, 1, 1, 1}, 
        				{1, 0, 1, 0}, 
        				{1, 1, 0, 1}, 
        				{1, 0, 1, 0}, 
    }; 
    int m = 3; 
      
  	int color[V]; 
    for ( i = 0; i < V; i++) 
       color[i] = 0; 
         
    if(!graphColoring (graph, m, 0, color)) 
        printf("Solution does not exist"); 
          
    return 0; 
} 
