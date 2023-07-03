#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node * next;
};
struct node * head = NULL;
struct node * createNode(int data)
{
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
struct node *insertLast(struct node *head, int data)
{
    struct node *new = createNode(data);
    if (head == NULL)
    {
        head = new;
        head->next=head;
        return head;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = new;
        new->next=head;
        return head;
    }
}
void display(struct node * head)
{
    if(head==NULL)
    {
        printf("List is Empty");
    }
    else
    {
        struct node * ptr = head;
        while(ptr->next!=head)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
        printf("%d ",ptr->data);
    }
}
void displaySLL(struct node * head)
{
    if(head==NULL)
    {
        printf("List is Empty");
    }
    else
    {
        struct node * ptr = head;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}
struct node * reverse(struct node * head,int k)
{
    if(head==NULL)
    {
        return head;
    }
    struct node * prev;
    struct node * next;
    struct node * current;
    prev=NULL;
    next=head;
    int i=0;
    current=head;
    while(next!=NULL && i!=k)
    {
        next=next->next;
        current->next = prev;
        prev=current;
        current=next;
        i++;
    }
    head=prev;
    if(next!=NULL)
    {
        for(int temp=1;temp<k;temp++)
        {
            prev=prev->next;
        }
        prev->next = reverse(next,k);
    }
    return head;
}
int counter(struct node *head)
{
    struct node * ptr=head;
    int count=1;
    while(ptr->next!=head)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}
struct node * middleNode(struct node * head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    struct node * slow = head;
    struct node * fast = slow->next;
    while(fast!=head)
    {
        slow=slow->next;
        if(fast->next==head)
        {
            fast=head;
        }
        else
        {
            fast = fast->next->next;
        }
    }
    if(counter(head)%2==0)
    {
        return slow;
    }
    return slow->next;
}
void splitList(struct node *head, struct node **head1_ref, struct node **head2_ref)
{
    struct node * mid = middleNode(head);
    struct node * ptr1 = head;
    while(ptr1->next!=mid)
    {
        ptr1=ptr1->next;
    }
    ptr1->next=NULL;
    ptr1 = mid;
    while(ptr1->next!=head)
    {
        ptr1=ptr1->next;
    }
    ptr1->next=NULL;
    *head1_ref = head;
    *head2_ref = mid;
}
int main()
{
    struct node * head =NULL; 
    struct node * head1 =NULL; 
    struct node * head2 =NULL; 
    // head = insertLast(head,2);
    // head = insertLast(head,6);
    // head = insertLast(head,1);
    // head = insertLast(head,5);
    head = insertLast(head,1);
    head = insertLast(head,5);
    head = insertLast(head,7);
    splitList(head,&head1,&head2);
    displaySLL(head1);
    printf("\n");
    displaySLL(head2);
}