int max(int a,int b){
   return a > b ? a :  b ; 

}
int longestValidParentheses(char * s){
      int len = strlen(s);
      int i,maxval = 0;
      int dp[len];
      memset(dp,0,sizeof(int)*len);

      for ( i = 1; i < len ; i++) {
            if(s[i]  == ')') {
                if(s[ i - 1] == '(') {
                     dp[i] = 2;                 
                     if( i -  2 >= 0) {
                        dp[i ]  = dp[i] +dp[ i - 2];
                    }
                } else if (dp[i -1]  >=0)  {
                     if( i - dp[i -1 ] - 1 >= 0 && s[ i - dp[i -1] - 1] == '('){
                         dp[ i]  = dp[ i - 1] + 2 ;
                         if ( i - dp[ i -1] - 2 >= 0){
                             dp[i] = dp[i] + dp[ i - dp[ i -1 ] - 2] ;
                         }
                     }

                }
            }
                 
            maxval = max(maxval ,dp[i]);
      }
      return maxval;
}
