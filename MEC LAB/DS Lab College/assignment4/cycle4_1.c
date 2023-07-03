#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};
struct node * head=NULL;
struct node* createNode(int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    return ptr;
}
void addElement(int data)
{
    struct node * newNode = createNode(data);
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        struct node * temp = head;
        while(temp->next !=NULL)
        {
            temp = temp->next;
        }
        temp->next=newNode;
    }
}
void display()
{
    while(head->next!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("%d ",head->data);

}
void insertAfterNode(int data, int after)
{
    struct node * newNode = createNode(data);
    struct node * ptr = head;
    if(ptr->data==after)
    {
        head->next=newNode;
    }
    else
    {
        while(ptr->data!=after)
        {
            ptr=ptr->next;
        }
        newNode->next =  ptr->next;
        ptr->next = newNode->next;
    }
}
int main()
{
    int element,n,i;
    system("clear");
    addElement(5);
    insertAfterNode(3,5);
    insertAfterNode(4,5);
    display();
}