class Solution {
    public int nthUglyNumber(int n) {
         int i;
         int a = 0, b = 0, c = 0;
         int dp[] =new int[n];
         dp[0] = 1;
         
         for( i = 1; i < n ; i++) {
             int na = dp[ a]  * 2 ; 
             int nb = dp[ b]  * 3 ;
             int nc = dp[ c ]  * 5 ;
             dp[i]= Math.min(Math.min(na,nb),nc);
             if (na == dp[ i])  a++;
             if (nb == dp[ i])  b++;
             if (nc == dp[ i])  c++;              
         }
         return dp[ n-1] ;
    }
}
