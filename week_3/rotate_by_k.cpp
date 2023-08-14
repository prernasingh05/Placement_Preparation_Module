class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0)  return head;
        ListNode *p=head;
        ListNode *last=head;
        int len=0;
        
        while(p)
        {
            len++;
            last=p;
            p=p->next;
            
        }
        if(k>=len) k=k%len;
        if(k==0)  return head;
        p=head;
        for(int i=1;i<len-k;i++)
            p=p->next;
        
        ListNode *new_head=p->next;
        p->next=NULL;
        last->next=head;
        return new_head;
        
    }
};