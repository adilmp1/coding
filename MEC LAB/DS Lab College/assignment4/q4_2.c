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
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
int insertAtLast(int data)
{
    struct node * ptr = head;
    if(ptr==NULL)
    {   
        head = createNode(data);
        return;
    }
    struct node * newNode = createNode(data);
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newNode;
}
int smallest()
{
    struct node * ptr = head;
    int small = ptr->data;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
        if(ptr->data<small)
        {
            small = ptr->data;
        }
    }
    return small;
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
int main()
{
    system("clear");
    insertAtLast(1000);
    insertAtLast(1);
    insertAtLast(4);
    insertAtLast(5);
    insertAtLast(6);
    insertAtLast(2);
    insertAtLast(8);
    // display();
    printf("%d",head->data);
}