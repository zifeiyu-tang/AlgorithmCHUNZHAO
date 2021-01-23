void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
     int i,x,tmp,min;
    int *tmpnums;
    tmpnums = ( int *)malloc( (n +m)* sizeof( int ));
    for ( i = 0,x = 0, tmp =0; ;  ) {
        if( i >= n || x >= m ) break;
        if(  nums1[x]  > nums2[ i]) {
            tmpnums[tmp] = nums2[i] ;
            i++;            
            tmp++;
        } else {  
             tmpnums[tmp] = nums1[x] ;
             x++;
             tmp++;             
        }        
    }
        for( ; i < n; i++) {
            tmpnums[ tmp ] = nums2[ i];
            tmp++;
        } 
        for( ; x < m; x++) {
            tmpnums[ tmp ] = nums1[ x];
            tmp++;
        } 
    
    for ( i =0 ; i < tmp ; i++){
      nums1[ i] = tmpnums[i];
    }
    free(tmpnums);    
}

void merge2(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int p,p1,p2;
    p1 = m - 1;
    p2 = n - 1 ;
    p = m + n - 1;
    if( n == 0) return;
    if( nums1[p1 < 0 ? 0 : p1]  < nums2[ 0]) {
         memcpy(nums1+m,nums2,sizeof( int) * n);
         return;
    }
    while( p1 >= 0 && p2 >= 0) {
        nums1[ p-- ]  = nums1[ p1] >nums2[ p2] ? nums1[ p1--] :nums2[p2--];
    }
    /*for( p = 0; p < p2+1; p++){
 *         nums1[p] =nums2[p];
 *             }*/
    if(p2>=0)
       memcpy(nums1,nums2,sizeof(int)*(p2+1));
}
