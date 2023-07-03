#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node * next;
    struct node * prev;
};
struct node * head = NULL;
struct node * createNode(int data)
{
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
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
        new->prev=ptr;
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
        while(ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->prev;
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
struct node * reverse(struct node * head)
{
    struct node * prev;
    struct node * next;
    struct node * current;
    prev=NULL;
    next=head;
    current=head;
    while(next!=NULL)
    {
        next=next->next;
        current->next = prev;
        current->prev = next;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}

int main()
{
    struct node * head =NULL;
    head = insertLast(head,1);
    head = insertLast(head,2);
    head = insertLast(head,3);
    head = insertLast(head,4);
    head = insertLast(head,5);
    display(reverse(head));
}