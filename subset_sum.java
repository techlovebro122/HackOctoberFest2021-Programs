running time-0(2^n . n) // as there are 2^n subsets and to check each subset, we need atmost n elements.
   
  // Recursive solution
  
  class Subset{
    public static boolean subsetSum(int[]arr,int n int k){
      if(k==0) return true; // sum=0 (subset found)
      //base case
      if(n <0 || k<0) return false; //sum cant be negative
      boolean inc = subsetSum(arr , n-1 , k-arr[n]);
     // case1: current item arr[n] added in subset and rec for remaining items (n-1) with remaining k-arr[n]
      boolean exc =subsetSum(arr , n-1, k);
       // case2: current item arr[n] not added in subset and rec for remaining items (n-1) 
      
      //return true if we get subset sum by include or exclude
      return inc||exc;
     }
    }
