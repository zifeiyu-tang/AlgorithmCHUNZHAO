/**
 *  * Note: The returned array must be malloced, assume caller calls free().
 *   */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int *arr;
    int i,k,m;
    *returnSize = digitsSize;
    for ( i = digitsSize -  1; i >= 0 ; i-- ) {
        if ( (digits[i] = (digits[i] +1)  %10) != 0) {
             return digits;
        }
    }
    arr = ( int *) malloc( sizeof(int) * ( digitsSize + 1));
    arr[0]  = 1;
    *returnSize += 1;
    
    for( k = 0 ; k < digitsSize; k++ ){
        arr[ 1 + k] = digits[k];
    }
    
    return arr;
}
