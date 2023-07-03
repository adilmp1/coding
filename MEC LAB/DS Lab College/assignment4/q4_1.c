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
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    return ptr;
}
int display()
{
    struct node * ptr = head;
    if(ptr==NULL)
    {
        printf("The list is Empty");
        return;
    }
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void insertAtFirst(int data)
{
    struct node * newNode = createNode(data);
    struct node * ptr = head;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(int data)
{
    struct node * newNode = createNode(data);
    struct node * ptr = head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newNode;
}
void insertAfterData(int data, int after)
{
    struct node * newNode = createNode(data);
    struct node * ptr = head;
    while(ptr->data!=after)
    {
        ptr=ptr->next;
    }
    newNode->next=ptr->next;
    ptr->next=newNode;
}
int deleteFirst()
{
    struct node * ptr = head;    
    if(ptr==NULL)
    {
        printf("The list is Empty");
        return;
    }
    head=head->next;
    free(ptr);
}
int deleteLast()
{
    struct node * ptr = head;
    struct node * temp;
    if(ptr==NULL)
    {
        printf("The list is Empty");
        return;
    }
    
    while(ptr->next!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    free(temp->next);
    temp->next=NULL;
}
int main()
{
    system("clear");
    head = createNode(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);
    deleteLast();
    deleteLast();
    deleteLast();
    deleteLast();
    display();
}