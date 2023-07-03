#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node * next;
};
struct Node * createNode(int data)
{
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
struct Node *insertLast(struct Node *head, int data)
{
    if (head == NULL)
    {
        return createNode(data);
    }
    else
    {
        struct Node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = createNode(data);
        return head;
    }
}
struct Node * insertFront(struct Node * head,int data)
{
    if(head==NULL)
    {
        return createNode(data);
    }
    else
    {
        struct Node * newNode = createNode(data);
        newNode->next = head;
        head=newNode;
        return head;
    }
}
struct Node * reverse(struct Node * head)
{
    struct Node * prev;
    struct Node * next;
    struct Node * current;
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
struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    struct Node *head3 = NULL;
    int carry=0;
    struct Node * ptr1 = reverse(first);
    struct Node * ptr2 = reverse(second);
    while(ptr1!=NULL || ptr2!=NULL)
    {
        if(ptr1!=NULL && ptr2!=NULL)
        {
            int sum = ptr1->data+ptr2->data;
            if((carry+sum)<10)
            {
                head3 = insertFront(head3,(carry+sum));
                carry=0;
            }
            else
            {
                head3 = insertFront(head3,(carry+sum)%10);
                carry=1;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if(ptr1!=NULL)
        {
            int sum = ptr1->data;
            if((carry+sum)<10)
            {
                head3 = insertFront(head3,(carry+sum));
                carry=0;
            }
            else
            {
                head3 = insertFront(head3,(carry+sum)%10);
                carry=1;
            }
            ptr1=ptr1->next;
        }
        else
        {
            int sum = ptr2->data;
            if((carry+sum)<10)
            {
                head3 = insertFront(head3,(carry+sum));
                carry=0;
            }
            else
            {
                head3 = insertFront(head3,(carry+sum)%10);
                carry=1;
            }
            ptr2=ptr2->next;
        }
    }
    if(carry!=0)
    {
        head3 = insertFront(head3,carry); 
    }
    return (head3);
}
void display(struct Node *head)
{
    struct Node *ptr = head;
    printf("\n");
    if (ptr == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}
int main()
{
    struct Node * head1 = NULL;
    struct Node * head2 = NULL;
    head1 = insertLast(head1,9);
    head1 = insertLast(head1,0);
    head1 = insertLast(head1,0);
    head2 = insertLast(head2,9);
    head2 = insertLast(head2,9);
    head2 = insertLast(head2,9);
    display(head1);
    display(head2);
    struct Node * head3 = addTwoLists(head1,head2);
    display(head3);
}