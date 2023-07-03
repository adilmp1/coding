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
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
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
void preOrder(struct Node * root)
{
    if(root!=NULL)
    {
        printf("%d\n",root->data);
        preOrder(root->left);
        preOrder(root->right);
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
void insert(struct Node * root, int key)
{
    struct Node * prev = NULL;
    while(root!=NULL)
    {
        prev=root;
        if(key==root->data)
        {
            printf("Element already exists\n");
            exit(0);
        }
        else if(key<root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    struct Node * new = (struct Node *)malloc(sizeof(struct Node));
    new->data=key;
    if(key<prev->data)
    {
        prev->left=new;
    }
    else
    {
        prev->right=new;
    }
}
struct Node * inOrderPreprocessor(struct Node * root)
{
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    printf("%d",root->data);
}

int main()
{
                //      7
                //     / \
                //    3   10
                //   / \
                //  1   4
    struct Node * p = createNode(7);
    struct Node * p1 = createNode(3);
    struct Node * p2 = createNode(10);
    struct Node * p3 = createNode(1);
    struct Node * p4 = createNode(4);
    system("clear");
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    // inOrder(p);
    inOrderPreprocessor(p);
}