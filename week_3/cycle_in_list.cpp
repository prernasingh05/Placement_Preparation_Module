class Solution {
public:
    bool hasCycle(ListNode *head) {
       ListNode *s=head;
       ListNode *f=head;
        if(head==NULL || head->next==NULL)  return 0;
        while(f->next!= NULL && f->next->next != NULL)
        {
            
            s=s->next;
            f=f->next->next;
            if(s==f)  return 1;
        }
      return 0;
        
      
    
    }
};