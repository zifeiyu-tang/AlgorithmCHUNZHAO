void moveZeroes(int* nums, int numsSize){
    int i,k;
    for ( i = 0,k = 1; k < numsSize ;) {
        if ( nums[ i]  != 0) {
            nums[++i] = nums[k];
        } else{
           nums[ i] = nums[k];
           if( nums[ k]  != 0) {
               nums[k]  = 0;
               i++;
           }           
        }
        k++;
        
    }
}
