#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *createNode(int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}
struct node *insertFront(struct node *head, int data)
{
    if (head == NULL)
    {
        return createNode(data);
    }
    else
    {
        struct node *ptr = createNode(data);
        ptr->next = head;
        head = ptr;
        return head;
    }
}
struct node *insertLast(struct node *head, int data)
{
    struct node *new = createNode(data);
    if (head == NULL)
    {
        head = new;
        head->next = head;
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
        new->next = head;
        return head;
    }
}
struct node *reverse(struct node *head)
{
    struct node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next=NULL;
    struct node *prev;
    struct node *next;
    struct node *current;
    prev = NULL;
    next = head;
    current = head;
    while (next != NULL)
    {
        next = next->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    ptr=head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next=head;
    return head;
}
struct node * deleteNode(struct node * head,int key)
{
    if(head==NULL)
    {
        return head;
    }
    if(head->data==key && head->next==head)
    {
        head=NULL;
        return head;
    }
    if(head->data==key && head->next!=head)
    {
        struct node * ptr = head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->next=head->next;
        head=head->next;
        return head;
    }
    struct node * ptr = head;
    struct node * temp=head;
    while(ptr->data!=key && ptr->next!=head)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    if(ptr->data!=key && ptr->next==head)
    {
        return head;
    }
    else if(ptr->data==key && ptr->next==head)
    {
        temp->next = head;
    }
    else
    {
        temp->next=ptr->next;
    }
    return head;
}
void display(struct node *head)
{
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != head)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
}
void displayLL(struct node *head)
{
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        struct node *ptr = head;
        while (ptr!= NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}
int main()
{
    struct node *head = NULL;
    head = insertLast(head, 10);
    head = insertLast(head, 7);
    head = insertLast(head, 8);
    head = insertLast(head,4);
    head = insertLast(head,6);
    head = deleteNode(head,8);
    display(reverse(head));
}