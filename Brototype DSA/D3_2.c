#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node * prev;
    int data;
    struct Node * next;
};
void displayElements(struct Node * ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void displayElementsInReverse(struct Node * ptr)
{
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->prev;
    }
}
struct Node * inserAtEnd(struct Node * head,int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next = NULL;
    return head;
}
struct Node * deleteByValue(struct Node * head,int element)
{
    struct Node * ptr1 = (struct Node * )malloc(sizeof(struct Node));
    struct Node * ptr2 = head;
    ptr1->next = ptr2;
    while(ptr2->data!=element && ptr2->next !=NULL)
    {
        ptr2=ptr2->next;
        ptr1=ptr1->next;
    }
    if(ptr2->next == NULL)
    {
        printf("Element not found hence not deleted\n");
        return head;
    }
    else
    {
        ptr1->next = ptr2->next;
        return head;
    }
}
void ifValueExist(struct Node * head,int element)
{
    int flag=0;
    struct Node * p;
    for(p=head;p->next!=NULL;p=p->next)
    {
        if(p->data == element)
        {
            printf("true\n");
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("false\n");
    }
    
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->prev=NULL;
    head->data = 10;
    head->next = second;

    second->prev=head;
    second->data = 11;
    second->next = third;

    third->prev=second;
    third->data = 12;
    third->next = fourth;

    fourth->prev=third;
    fourth->data = 13;
    fourth->next = NULL;

    // head = inserAtEnd(head,14);
    // head = deleteByValue(head,12);
    // head = deleteByValue(head,12);
    displayElementsInReverse(head);
}