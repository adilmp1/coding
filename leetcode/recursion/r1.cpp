#include <iostream>
using namespace std;
void printName(int i)
{
    if(i<1)
    {
        return;
    }
    printf("%d ",i);
    printName(i-1);
}
int main()
{
    printName(10);
    return 0;
}


Node * insertFront(Node * head,int data)
{
    if(head==NULL)
    {
        return new Node(data);
    }
    else
    {
        Node * temp = new Node(data);
        temp->next = head;
        head=temp;
        return head;
    }
}
void moveZeroes(struct Node **first)
{
    //Your code here
    int flag=0;
    Node * head = (*first);
    Node * answer = NULL;
    Node * ptr = head;
    Node * temp=answer;
    while(ptr!=NULL)
    {
        if(ptr->data==0)
        {
            answer = insertFront(answer,0);
            flag=1;
        }
        ptr=ptr->next;
    }
    if(flag==0)
    {
        return;
    }
    for(temp=answer;temp->next!=NULL;temp=temp->next);
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data!=0)
        {
            Node * newNode = new Node(ptr->data);
            temp->next=newNode;
            temp=temp->next;
        }
        ptr=ptr->next;
    }
    *first = answer;
}