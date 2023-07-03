struct ListNode* reverse(struct ListNode* head)
{
    struct ListNode * prev;
    struct ListNode * next;
    struct ListNode * current;
    prev=NULL;
    next=head;
    current=head;
    while(next!=NULL)
    {
        next=next->next;
        current->next = prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}
struct ListNode *findNode(struct ListNode* head,int k)
{
    if(head==NULL || k==0)
    {
        return head;
    }
    head = reverse(head);
    if(k==1)
    {
        return head;
    }
    else
    {
        int i=1;
        struct ListNode * ptr = head;
        while(i!=k && ptr!=NULL)
        {
            i++;
            ptr=ptr->next;
        }
        return ptr;
    }
}
struct ListNode* rotateRight(struct ListNode* head, int k){
    if(head==NULL || k==0)
    {
        return head;
    }
    struct ListNode * temp = findNode(head,k);
    head = reverse(head);
    struct ListNode * ptr = head;
    while(ptr->next!=temp)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
    struct ListNode * tem = temp;
    while(tem->next!=NULL)
    {
        tem=tem->next;
    }
    tem->next=head;
    head=temp;
    return head;
}