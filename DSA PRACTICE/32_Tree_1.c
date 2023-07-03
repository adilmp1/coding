#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node * createNode(int data)
{
    struct Node * n= (struct Node *)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;

}

void preOrder(struct Node * root)
{
    if(root!=NULL)
    {
        printf("%d\n",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct Node * root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d\n",root->data);
        inOrder(root->right);
    }
}

void postOrder(struct Node * root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\n",root->data);
    }
}
int main()
{
    struct Node * p = createNode(2);
    struct Node * p1 = createNode(1);
    struct Node * p2 = createNode(4);
    system("clear");
    p->left = p1;
    p->right = p2;
    inOrder(p);
    printf("\n");
    preOrder(p);
    printf("\n");
    postOrder(p);

}
