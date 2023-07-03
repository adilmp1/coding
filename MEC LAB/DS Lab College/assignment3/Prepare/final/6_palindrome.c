#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top=-1;
void push(char item)
{
    if(top==MAX-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        stack[++top]=item;
    }
}
char pop()
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
        char del = stack[top--];
        return del;
    }
}
int isPalindrome(char str[])
{
    int i,len=strlen(str);
    int mid=len/2;
    for(i=0;i<mid;i++)
    {
        push(str[i]);
    }
    if(len%2!=0)
    {
        i++;
    }
    while(str[i]!='\0')
    {
        char x=pop();
        // char upper = x.toUpP;
        // char lower = x-32;
        //  || x!=toupper(str[i]) || x!=tolower(str[i])
        if(x!=str[i] && x!=toupper(str[i]) && x!=tolower(str[i]))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    char str[100];
    system("clear");
    printf("Enter the string: ");
    scanf("%s",str);
    if(isPalindrome(str))
    {
        printf("palindrome\n");
    }
    else
        printf("not palindrome\n");
}