struct ListNode* mergeTwoLists(struct ListNode* d1, struct ListNode* d2){
    struct ListNode *tmp,*tmp2;
   if (d1 == NULL )
       return d2;
   if (d2 == NULL )
       return d1;
   if(d1->val < d2->val) { 
       tmp = d1;
       d1 = d1->next;
   } else {
       tmp = d2;
       d2 = d2->next ;
   }
   tmp2 = tmp;
   while (d1 != NULL || d2 != NULL){
       if (d1 == NULL){
           tmp->next = d2;
           d2 = d2->next;
           tmp = tmp->next;
           continue;   
       }
       if(d2 == NULL ){
           tmp->next = d1;
           d1 = d1->next;
           tmp = tmp->next;
           continue;
       }
       if (d1->val < d2->val ) {
           tmp->next = d1;
           d1 = d1->next;
       } else {
           tmp->next = d2;
           d2 = d2->next;
       }    
       tmp = tmp->next ;
   }
   return tmp2;
}



struct ListNode* mergeTwoLists2(struct ListNode* d1, struct ListNode* d2){
   if (d1 == NULL )
       return d2;
   if (d2 == NULL )
       return d1;
   if(d1->val < d2->val) { 
       d1->next = mergeTwoLists2(d1->next, d2);
       return d1;
   } else {
     d2->next = mergeTwoLists2(d1, d2->next);
      return d2;
   }
   
}
