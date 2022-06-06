#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
  PNODE newn = NULL;
  
  newn = (PNODE)malloc(sizeof(NODE));
  
  newn->data = no;
  newn->next = NULL;
  
  if(*head == NULL)
  {
   *head = newn;
  }
  else
  {
   newn->next = *head;
   *head = newn;
  }
}

void InsertLast(PPNODE head, int no)
{
  PNODE newn = NULL;
  PNODE temp = NULL;
  
  newn = (PNODE)malloc(sizeof(NODE));
  
  newn->data = no;
  newn->next = NULL;
  
 if(*head == NULL)
 {
  *head = newn;
 }
 else 
 {
  temp = *head;
  
  if(temp->next == NULL)  //If LL contains one node 
  {
   temp->next = newn;
  }
  else
  {
   while(temp->next != NULL) //If LL contains more than one node
   {
    temp = temp->next;
   }
   temp->next = newn;
  }
 }
}
void DeleteFirst(PPNODE head)
{
 PNODE temp = NULL;
 
 if(*head == NULL)
 {
  printf("Linked list is empty\n");
  return;
 }
 else
 {
  temp = *head;
  *head = temp->next;
  free(temp);
 }
}

void DeleteLast(PPNODE head)
{
 PNODE temp = NULL;
 
 if(*head == NULL)
 {
  printf("Linked list is empty\n");
  return;
 }
 
 else if((*head)->next == NULL)
 {
  DeleteFirst(head);
 }
 
 else
 {
   temp = *head;
   
   while(temp->next->next != NULL)
   {
    temp = temp->next;
   }
   
   free(temp->next);
   temp->next = NULL;
 }
}

void Display(PNODE head)
{
 while(head != NULL)
 {
  printf("| %d |-> ",head->data);
  head = head->next;
 }
 printf("NULL");
}

int Count(PNODE head)
{
 int cnt = 0;
 while(head != NULL)
 {
  cnt++;
  head = head->next;
 }
 return cnt;
}

void InsertAtPos(PPNODE head, int no, int pos)
{
  int cnt = 0;
  PNODE newn = NULL;
  PNODE temp = NULL;
  
  cnt = Count(*head);
  
  if((pos < 1) || (pos > cnt+1))
  {
    printf("Invalid Input\n");
    return;
  }
  
  if(pos == 1)
  {
   InsertFirst(head,no);
  }
  
  else if(pos == cnt+1)
  {
   InsertLast(head,no);
  }
  
  else
  {
   int iCnt = 0;
   temp = *head;
   
   newn = (PNODE)malloc(sizeof(NODE));
   
   newn->data = no;
   newn->next = NULL;
   
   for(iCnt = 1; iCnt < pos-1 ;iCnt++)
   {
    temp = temp->next;
   }
   newn->next = temp->next;
   temp->next = newn;
  }
}

void DeleteAtPos(PPNODE head,int pos)
{
 int size = 0, iCnt = 0;
 PNODE temp = NULL;
 PNODE tempdelete = NULL;
 
 size = Count(*head);
 
 if((pos < 1) || (pos > size))
 {
  printf("Invalid Input\n");
  return;
 }
 
 if(pos == 1)
 {
  DeleteFirst(head);
 }
 
 else if(pos == size)
 {
  DeleteLast(head);
 }
 
 else
 {
  temp = *head;
  
  for(iCnt = 1; iCnt < pos-1; iCnt++)
  {
     temp = temp->next;
  }
  
  tempdelete = temp->next;
  temp->next = tempdelete->next;
  free(tempdelete);
 }
}

int main()
{
 PNODE first = NULL;
 int iRet = 0;
 
 InsertFirst(&first,100);
 InsertFirst(&first,90);
 InsertFirst(&first,80);
 InsertFirst(&first,70);
 InsertFirst(&first,60);
 InsertFirst(&first,50);
 
 InsertAtPos(&first,65,3);
 
 printf("Nodes in the linked list are :\n");
 Display(first);
 
 iRet = Count(first);
 printf("\nNo of nodes in the linked list are : %d\n",iRet);
 
 printf("DELETE AT POSITION\n");
 DeleteAtPos(&first,3);
 
 printf("INSERT LAST\n");
 InsertLast(&first,110);
 
 printf("Nodes in the linked list are :\n");
 Display(first);
 
 iRet = Count(first);
 printf("\nNo of nodes in the linked list are : %d\n",iRet);
 
 printf("DELETE FIRST\n");
 DeleteFirst(&first);
 
 printf("Nodes in the linked list are :\n");
 Display(first);
 
 iRet = Count(first);
 printf("\nNo of nodes in the linked list are : %d\n",iRet);
 
 printf("DELETE LAST\n");
 DeleteLast(&first);
 
 printf("Nodes in the linked list are :\n");
 Display(first);
 
 iRet = Count(first);
 printf("\nNo of nodes in the linked list are : %d\n",iRet);
 
 return 0;
}
