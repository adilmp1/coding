#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
void LinkedListTraversal(struct Node * ptr)
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node * DelFirst(struct Node * head)
{

    head=head->next;
    return head;
}

struct Node * DelIndex(struct Node * head, int index)
{
    struct Node * p = head;
    struct Node * q = head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next = q->next;
    return head;
}
int main()
{
    struct Node * head; 
    struct Node * second; 
    struct Node * third; 
    struct Node * fourth; 
    system("clear");
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data=11;
    head->next=second;

    second->data=12;
    second->next=third;

    third->data=13;
    third->next=fourth;

    fourth->data=14;
    fourth->next=NULL;

    head = DelIndex(head,2);
    LinkedListTraversal(head);
}