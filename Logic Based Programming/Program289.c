//Binary Search Tree

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE,*PNODE, **PPNODE;

void Insert(PPNODE Head, int iNo)
{
    PNODE temp = NULL;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL) //BST empty
    {
        *Head = newn;
    }
    else
    {
        temp = *Head;
        while(1)
        {
            if(iNo > temp->data)  //Right
            {
                if(temp->rchild == NULL)
                {
                   temp->rchild = newn;
                   break;
                }
                else
                {
                    temp = temp->rchild;
                }
            }
            else if(iNo < temp->data) //Left
            {
                if(temp->lchild == NULL)
                {
                   temp->lchild = newn;
                   break;
                }
                else
                {
                    temp = temp->lchild;
                }
            }
            else if(iNo == temp->data)  //Duplicate Data 
            {
                free(newn);
                printf("Data is already there in BST");
                break;
            }
        }
    }
}

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        printf("%d ",Head->data);
        Inorder(Head->lchild);
    }
}

void Preorder(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d ",Head->data);
        Inorder(Head->lchild);
        Inorder(Head->lchild);
    }
}

void Postorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        Inorder(Head->lchild);
        printf("%d ",Head->data);
    }
}

bool Search(PNODE Head, int iNo)
{
    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            break;
        }
        else if(iNo > Head->data)
        {
            Head = Head->rchild;
        }
        else if(iNo < Head->data)
        {
            Head = Head->lchild;
        }
    }
    if(Head == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int CountLeafNode(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if((Head->lchild == NULL) && (Head->rchild == NULL))
        {
            iCnt++;
        }
        CountLeafNode(Head->lchild);
        CountLeafNode(Head->rchild);
    }
    return iCnt;
}

int CountNonLeafNode(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if((Head->lchild == NULL) || (Head->rchild == NULL))
        {
            iCnt++;
        }
        CountLeafNode(Head->lchild);
        CountLeafNode(Head->rchild);
    }
    return iCnt;
}

int CountBothChildNode(PNODE Head)   //Completely filled node
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if((Head->lchild != NULL) && (Head->rchild != NULL))
        {
            iCnt++;
        }
        CountLeafNode(Head->lchild);
        CountLeafNode(Head->rchild);
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    bool bRet = false;

    Insert(&First,11);
    Insert(&First,21);
    Insert(&First,7);

    //7 11 21   L D R  //Inorder
    //11 7 21   D L R  //Preorder
    //7 21 11   L R D  //Postorder

    printf("Inorder data\n");
    Inorder(First);

    printf("\nPostorder data\n");
    Postorder(First);

    printf("\nPreorder data\n");
    Preorder(First);

    bRet = Search(First, 7);
    if(bRet == true)
    {
        printf("\nNode is there in the linked list");
    }
    else
    {
        printf("\nNode is not there in the linked list");
    }

    iRet = CountLeafNode(First);
    printf("")

    return 0;
}