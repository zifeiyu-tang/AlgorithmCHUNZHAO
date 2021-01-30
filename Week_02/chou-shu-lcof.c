#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 int nthUglyNumber(int n) {
         int i;
         int a = 0, b = 0, c = 0;
         int *dp = (int *)malloc(sizeof(int)*n);
         dp[0] = 1;
         
         for( i = 1; i < n ; i++) {
             int na = dp[ a]  * 2 ; 
             int nb = dp[ b]  * 3 ;
             int nc = dp[ c ]  * 5 ;
             dp[i] = na < nb ? na : nb ;
             dp[i] = dp[i] < nc ? dp[i] : nc ;   
//             printf("pd[%d] = %d \n",i,dp[i]);

             if (na == dp[ i])  a++;
             if (nb == dp[ i])  b++;
             if (nc == dp[ i])  c++;              
         }
         return dp[ n-1] ;
    }
int main(int argc,char **argv)
{
   printf("%d\n",nthUglyNumber(100));
}

