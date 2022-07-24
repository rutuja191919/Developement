//Complicated problem statements on linked list

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

int Summation(PNODE Head)
{
    int iSum = 0;
    while(Head != NULL)
    {
        iSum = iSum + Head->data;
        Head = Head->next;
    }
    return iSum;
}

int Maximum(PNODE Head)
{
    int iMax = 0;
    if(Head != NULL)
    {
        iMax = Head->data;
    }

    while(Head != NULL)
    {
        if(Head->data > iMax)
        {
            iMax = Head->data;
        }
        Head = Head->next;
    }
    return iMax;
}

int Frequency(PNODE Head, int iNo)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            iCnt++;
        }
        Head = Head->next;
    }
    return iCnt;
}

void SumFactors(PNODE Head)
{
    int iNo = 0, iSum = 0, i = 0;
    while(Head != NULL)
    {
        for(i = 1, iSum = 0, iNo = Head->data; i <= iNo/2; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }
        printf("%d\n",iSum);
        Head = Head -> next;
    }
}

void SumDigits(PNODE Head)
{
    int iSum = 0, iNo = 0;
    while(Head != NULL)
    {
        iNo = Head->data;
        iSum = 0;
        while(iNo > 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo/10; 
        }
        printf("Sum is : %d\n",iSum);
        Head = Head->next;
    }
}

int SearchFirstOccurance(PNODE Head, int iNo)
{
    int iPos = 0, iCnt = 1;

    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            break;
        }
        iPos++;
        Head = Head->next; 
    }

    if(Head == NULL)
    {
        return -1;
    }
    else  
    {
        return iPos;
    }
}

int SearchLastOccurance(PNODE Head, int iNo)
{
    int iPos = -1, iCnt = 1;

    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            iPos = iCnt;
        }
        iCnt++;
        Head = Head -> next;
    }
   return iPos;
}

void ChkPerfect(PNODE Head)
{
    int iNo = 0, iSum = 0, i = 0;
    while(Head != NULL)
    {
        for(i = 1, iSum = 0, iNo = Head->data; i <= iNo/2; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }
        if(iSum == iNo)
        {
            printf("%d is perfect number\n",iNo);
        }
        Head = Head -> next;
    }
}

int MiddleElement(PNODE Head)
{
    int i = 0, iSize = 0;
    PNODE temp = Head;

    while(Head != NULL)
    {
        iSize++;
        Head = Head ->next;
    }

    Head = temp;

    for(i = 0; i < iSize/2; i++)
    {
        Head = Head->next;
    }
    return Head->data;
}

int MiddleElementOpt(PNODE Head)  //fast forward algorithm - optimized
{
    PNODE Fast = Head;
    PNODE Slow = Head;

    while((Fast != NULL) && (Fast->next != NULL))
    {
        Fast = Fast->next->next;
        Slow = Slow->next;
    }
    return Slow->data;
}

void Reverse(PPNODE Head) //updation  Cyclic developement algorithm
{
    PNODE Previous = NULL;
    PNODE Current = *Head;
    PNODE Next = NULL;

    while(Current != NULL)
    {
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;
        Current = Next;
    }
    *Head = Previous;
}

//whether linked list contains loop or not

bool Chkloop(PNODE Head)
{
    PNODE Fast = Head;
    PNODE Slow = Head;
    bool Flag = false;

    while(Fast != NULL && Fast->next != NULL)
    {
        Slow = Slow->next;
        Fast = Fast->next->next;

        if(Fast == Slow)
        {
            Flag = true;
            break;
        }
    }
    return Flag;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    bool bRet = false;

    PNODE Third = NULL;
    PNODE Last = NULL;

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    /*Third = First;
    Last = First;

    Third = Third->next->next;  //300
    Last = Last->next->next->next->next;  //500
    
    Last->next = Third;
    */
    bRet = Chkloop(First);
    {
        if(bRet == true)
        {
            printf("There is loop in linked list\n");
        }
        else{
            printf("There is no loop in linked list\n");
        }
    }

    return 0;
}
