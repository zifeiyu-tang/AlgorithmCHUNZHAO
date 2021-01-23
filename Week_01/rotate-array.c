/*暴力解法*/
void rotate(int* nums, int numsSize, int k){
    if(numsSize <2) return ;
    if(numsSize< k)  k = k% numsSize ;
     int *knums;
     int i,n;
     knums = (int *)malloc( ( k+1)* sizeof( int));
    for ( i = 0; i < k; i++) {
        knums[ i] = nums[ numsSize - k + i];
     }
     n = 0 ;
     for( i = numsSize - k; i > 0; i-- ) {        
        nums[numsSize - 1 -  n]  = nums[ i - 1] ; 
        n++;
     } 
     for( i = 0;  i < k;  i++) {
          nums[i] = knums[i];
     }
     free(knums);
}

 /**
 *      * 翻转
 *           * 时间复杂度：O(n)
 *                * 空间复杂度：O(1)
 *                     */
void reverse2(int *nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start++] = nums[end];
            nums[end--] = temp;
        }
    }


void rotate(int* nums, int numsSize, int k){
   int n = numsSize;
        k %= n;
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
}
