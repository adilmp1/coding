#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void linkedListTraversal(struct Node * ptr)
{
    while (ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

struct Node * deleteFirst(struct Node * head)
{
    struct Node * ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

struct Node * deleteIndex(struct Node * head, int index)
{
    struct Node * p = head;
    struct Node * q = head->next;
    int i;
    for(i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next; 
    }

    p->next=q->next;
    free(q);
    return head;
}

struct Node * deleteLast(struct Node * head)
{
    struct Node * p = head;
    struct Node * q = p->next;
    while(q->next!=NULL)
    {
        q=q->next;
        p=p->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=NULL;

    head = deleteLast(head);
    linkedListTraversal(head);

    return 0;   
}    