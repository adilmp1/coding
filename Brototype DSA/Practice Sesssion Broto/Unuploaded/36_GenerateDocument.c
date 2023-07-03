#include <stdio.h>
#include <stdlib.h>
struct node 
{
    char data;
    struct node * next;
};
struct node * head = NULL;
struct node * createNode(char data)
{
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void addElement(char data)
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
        exit(0);
    }
    while(ptr!=NULL)
    {
        printf("%c",ptr->data);
        ptr = ptr->next;
    }
}
int deleteNode(char data)
{
    struct node * ptr = head;
    struct node * temp;
    if(ptr==NULL)
    {
        return 1;
    }
    if(ptr->data==data)
    {
        head = ptr->next;
        free(ptr);
        return 0;
    }
    else
    {
        while(ptr->data!=data && ptr->next!=NULL)
        {
            temp=ptr;
            ptr = ptr->next;
        }
        if(ptr->data!=data && ptr->next==NULL)
        {
            return 1;
        }
        temp->next = ptr->next;
        free(ptr);
        return 0;
    }

}
int generateDocument(char characters[],char document[])
{
    int i,flag=0;
    for(i=0;characters[i]!='\0';i++)
    {
        addElement(characters[i]);
    }
    printf("\n");
    for(i=0;document[i]!='\0';i++)
    {
        if(deleteNode(document[i]))
        {
            printf("false");
            return 0;
        }
    }
    printf("true");
    return 0;
}
int main()
{
    int i;
    // char characters[] = "Beste!hetsi ogEAxperlt x ";
    // char documents[] = "AlgoExpert is the Best!";

    char characters[] = "este!hetsi ogEAxperlt x ";
    char documents[] = "AlgoExpert is the Best!";

    // char characters[] = "abbcac";
    // char documents[] = "aabbcc";
    // char characters[] = "abcdefghijklmnopqrstuvwxyz";
    // char documents[] = "focusss";
    generateDocument(characters,documents);
}