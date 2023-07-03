#include <stdio.h>
#include <string.h>
char queue[26]="abcdefghijklmnopqrstuvwxyz";
int front=0, rear=25;
void enqueue(char item)
{
    if(front==-1)
    {
        front = 0,rear = 0;
        queue[rear]=item;
    }
    else
    {
        rear = (rear+1)%26;
        queue[rear]=item;
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("%c",queue[front]);
        front=(front+1)%26;
    }
}
void CaesarCipherEncryptor(char str[],int key)
{
    int i=0,n=strlen(str);
    while(queue[i]!=str[0])
    {
        i++;
    }
    front=i+key;
    for(i=0;i<n;i++)
    {
        dequeue();
    }

}
int main()
{
    int key;
    char str[50];
    printf("Enter the string: ");
    scanf("%s",str);
    printf("Enter the key: ");
    scanf("%d",&key);

    // char str[]="abcdefghi";
    // int key = 3;

    // char str[]="xyz";
    // int key = 2;
    CaesarCipherEncryptor(str,key);

    
}