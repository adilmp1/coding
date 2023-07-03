#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void displayElements(struct Node * ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node * insertAtEnd(struct Node * head,int data)
{
    struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p = head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;

}

struct Node * insertAtBeginning(struct Node * head,int data)
{
    struct Node * ptr;
    ptr = (struct Node * )malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    head = ptr;
    return head;

}

struct Node * insertAfterValue(struct Node * head,int element, int data)
{
    struct Node * ptr;
    ptr = (struct Node * )malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node * p = head;
    while(p->data!=element)
    {
        p=p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
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

struct Node * insertFromArray(struct Node * head, int a[],int n)
{
    int i;
    struct Node * ptr[50];
    for(i=0;i<n;i++)
    {
        ptr[i]=(struct Node *)malloc(sizeof(struct Node));
    }
    struct Node * p = head;
    while(p->next!=NULL)
    {
      p=p->next;
    }
    p->next = ptr[0];
    for(i=0;i<n;i++)
    {
        ptr[i]->data = a[i];
        ptr[i]->next = ptr[i+1];
    }
    ptr[n-1]->next=NULL;
    return head;

}
void totalElementCount(struct Node * head)
{
    int count=0;
    struct Node * p = head;
    while(p!=NULL)
    {
        p=p->next;
        count++;
    }
    printf("%d\n",count);
    
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
    // int a[6]={14,15,16,17,18,19};
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 12;
    third->next = fourth;

    fourth->data = 13;
    fourth->next = NULL;

    // head = insertAtBeginning(head,9);
    // head = insertAtEnd(head,14);
    // head = insertAfterValue(head,10,14);
    // head = insertFromArray(head,a,6);
    // head = deleteByValue(head,16);
    // ifValueExist(head,11);
    // totalElementCount(head);
    displayElements(head);
}