/*Implement “Sum of Subsets” using Backtracking. “Sum of Subsets” problem: Find a subset of a given set S = {s1,s2,……,sn} 
of n positive integers whose sum is equal to a given positive integer d. For example, if S = {1,2,5,6,8} and d = 9 there
are two solutions {1,2,6} and {1,8}. A suitable message is to be displayed if the given problem instance doesn’t have a solution */


import java.lang.*;

class sumof { 
      
   static boolean isSubsetSum(int set[], 
                            int n, int sum) 
    { 
        if (sum == 0) 
            return true; 
        if (n == 0 && sum != 0) 
            return false; 
          
      
        if (set[n-1] > sum) 
            return isSubsetSum(set, n-1, sum); 
          
        return isSubsetSum(set, n-1, sum) || isSubsetSum(set, n-1, sum-set[n-1]); 
    } 
      
    public static void main (String args[]) 
    { 
        int set[] = {1,2,5,6,8}; 
        int sum = 9; 
        int n = set.length; 
        if (isSubsetSum(set, n, sum) == true) 
            System.out.println("Found a subset"
                          + " with given sum"); 
        else
            System.out.println("No subset with"
                               + " given sum"); 
    } 
} 
 
