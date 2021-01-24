bool isAnagram(char * s, char * t){
  int *arr;
  int i;

  if ( strlen(s) != strlen(t)) {
      return false;
  }
    arr = (int *) malloc( sizeof(int) * 26);
  memset(arr,0,sizeof( int) * 26) ; 
  i = 0;
  /*while(  i < strlen(s) ){
     arr[ ( s[ i]) - 'a' ] ++;
     arr[ ( t[ i++]) -  'a' ] --;
  }
  for ( i = 0 ; i<26; i++) {
      if (arr[ i] != 0 ) {
          free(arr);
          return false;
      }
  }*/
  while(  i < strlen(s) ){
     arr[ ( s[ i++]) - 'a' ] ++;
  }
  i = 0;
  while(  i < strlen(s) ){
     if ( ( --arr[ ( t[ i++]) - 'a' ]   ) < 0 ) {
         free(arr);
         return false;
     }
  }
  free(arr);
  return true;   
  
}
