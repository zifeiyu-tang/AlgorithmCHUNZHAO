int removeDuplicates(int* nums, int numsSize){
     int i,n;
     int num=numsSize;
     for (i = 0,n=1; i < numsSize && n< numsSize ; ) {
          if(nums[ i] == nums[ n]) {
               nums[ i]  = nums[ n] ;
               n++;
               num--;
          } else {              
               i++;
              nums[ i]  =  nums[ n] ;
               n++;

          }          
     }
    for ( i = num; i < numsSize ; i++){
        nums [i] = 0;
     }
     return num;
}

int removeDuplicates2(int* nums, int numsSize){
    if(nums == NULL ||  numsSize == 0){
         return 0;

    }
     int i,n;
     for (i = 0,n=1 ; n< numsSize ; ) {
          if(nums[ i] != nums[ n]) {
               nums[ i+1]  = nums[ n] ;
               i++;               
          } 
          n++;         
     }
    
     return  i+1;
}
