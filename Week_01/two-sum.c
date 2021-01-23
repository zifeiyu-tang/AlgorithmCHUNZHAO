/**
 *  * Note: The returned array must be malloced, assume caller calls free().
 *   */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
   int i,j;
   int *arr,m,x,n;
   arr = ( int *) malloc( sizeof(int) * numsSize);
   m = 0;
   for( i = 0; i < numsSize ; i++){
       for( j = i + 1; j < numsSize; j++) {
         /*  n = 0;
 *             for ( x = 0; x < m; x++ ) {
 *                            if ( arr[x]  == j) {
 *                                               n = 1;
 *                                                              }
 *                                                                         }
 *                                                                                    if (n == 1) continue;*/
           if( nums[ i] + nums[ j] == target){
              arr[m++]  = i;
              arr[m++]  = j;
           }
       }
   }
   *returnSize = m;
   return arr;
}
