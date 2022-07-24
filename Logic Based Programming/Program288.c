#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");
    while(Head != NULL)
    {
        printf("|%d|-> ",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

void DeleteEven(PPNODE Head)
{    
    PNODE temp = NULL;
    PNODE First = NULL;
    PNODE Second = NULL;
    
    if(*Head == NULL) //LL is empty
    {
        return;
    }

    if((*Head)->next == NULL) //LL contains only one node
    {
        if(((*Head)->data % 2) == 0)
        {
            free(*Head);
            *Head = NULL;
            return;
        }
        else
        {
            return;
        }
      
    }
    First = *Head;
    Second = (*Head)->next;
    
    while(Second != NULL)
    {
        if((Second->data) % 2 == 0)
        {
            temp = Second;
            First->next = temp->next;
            free(temp);
            Second = First->next;
        }
        else
        {
            First = Second;
            Second = First->next;
        }
    }

    if((*Head)->data % 2 == 0)
    {
        temp = *Head;
        (*Head) =  ((*Head)->next);
        free(temp);
    }

    //Complexity is n


    /*PNODE tempHead = *Head;
    PNODE previous = NULL;
    PNODE temp = NULL;

    if(Head == NULL) //LL is empty
    {
        return;
    }

    while(tempHead != NULL)
    {
        if((tempHead->data) % 2 == 0)
        {
            if((tempHead->next) != NULL)
            {
                tempHead->data = tempHead->next->data;
                temp = tempHead->next;
                tempHead->next = temp->next;
                free(temp); 
            }
            else
            {
                temp = tempHead;
                free(temp);
                previous ->next = NULL;
            }  
        }
        else
        {
            previous = tempHead;
            tempHead = tempHead->next;
        }   
    }*/
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,51);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    DeleteEven(&First);

    Display(First);

    return 0;
}
