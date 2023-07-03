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
void addElement(int data)
{
    struct node * ptr = head;
    struct node * newNode = createNode(data);
    if(head==NULL)
    {
        head = newNode;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newNode;
    }
}
void display()
{
    struct node * ptr = head;
    printf("\n");
    if(ptr==NULL)
    {
        printf("List is Empty");
    }
    else
    {
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
void reverse()
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
        prev=current;
        current=next;
    }
    head=prev;
}
void swap(struct node* ptr1,struct node* ptr2)
{
    int temp = ptr1->data;
    ptr1->data = ptr2->data;
    ptr2->data = temp;
}
void swapPairs()
{
    if(head==NULL)
    {
        printf("list empty");
    }
    struct node* ptr = head;
    while(ptr!=NULL)
    {
        if(ptr->next!=NULL)
        {
            swap(ptr,ptr->next);    
            ptr = ptr->next->next;
        }
        else
        {
            ptr=ptr->next;
        }
    }
}
struct node *findNode(int k)
{
    reverse();
    if(k==1)
    {
        return head;
    }
    else
    {
        int i=1;
        struct node * ptr = head;
        while(i!=k && ptr!=NULL)
        {
            i++;
            ptr=ptr->next;
        }
        return ptr;
    }
}
struct node * rotateRight(int k)
{
    struct node * temp = findNode(k);
    reverse();
    struct node * tem = temp;
    while(tem->next!=NULL)
    {
        tem=tem->next;
    }
    tem->next=head; 
    struct node * ptr=head;
    while(ptr->next!=temp)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
    head=temp;
}
int main()
{
    int op,element,item;
    system("clear");
    for(int i=1;i<=5;i++)
    {
        addElement(i);
    }
    rotateRight(4);
    display();
}