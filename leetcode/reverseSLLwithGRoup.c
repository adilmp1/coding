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
    if (head == NULL)
    {
        return createNode(data);
    }
    else
    {
        struct node *new = createNode(data);
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new;
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
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}
void deleteNode(int data)
{
    struct node * ptr = head;
    struct node * temp;
    if(ptr->data==data)
    {
        head = ptr->next;
        free(ptr);
    }
    else
    {
        while(ptr->data!=data && ptr->next!=NULL)
        {
            temp=ptr;
            ptr = ptr->next;
        }
        if(ptr->next==NULL)
        {
            printf("Element not Found");
        }
        temp->next = ptr->next;
        free(ptr);
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
// struct node * reverse(struct node * head)
// {
//     struct node * prev;
//     struct node * next;
//     struct node * current;
//     prev=NULL;
//     next=head;
//     current=head;
//     while(next!=NULL)
//     {
//         next=next->next;
//         current->next = prev;
//         prev=current;
//         current=next;
//     }
//     head=prev;
//     return head;
// }

int main()
{
    struct node * head =NULL;
    // head = insertLast(head,1);
    // head = insertLast(head,2);
    // head = insertLast(head,2);
    // head = insertLast(head,4);
    // head = insertLast(head,5);
    // head = insertLast(head,6);
    // head = insertLast(head,7);
    // head = insertLast(head,8);
    head = insertLast(head,1);
    head = insertLast(head,2);
    head = insertLast(head,3);
    head = insertLast(head,4);
    head = insertLast(head,5);
    display(reverse(head,3));
}