#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
 struct node *prev;  //*
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
  PNODE newn = NULL;
  
  newn = (PNODE)malloc(sizeof(NODE));
  
  newn->data = no;
  newn->next = NULL;
  newn->prev = NULL;  //*
  
  if(*head != NULL)                       // new code with optimization
  {
   newn->next = *head;
   (*head)->prev = newn; //*  newn->next->prev = newn;
  }
  *head = newn;
}

void InsertLast(PPNODE head,int no)
{
  PNODE newn = NULL;
  PNODE temp = NULL;
  
  newn = (PNODE)malloc(sizeof(NODE));
  
  newn->prev = NULL;    //*
  newn->data = no;
  newn->next = NULL;
  
  if(*head == NULL)
  {
   *head = newn;
  }
  
  else
  {
    temp = *head;
    
    while(temp->next != NULL)
    {
     temp = temp->next;
    }
    
    temp->next = newn;
    newn->prev = temp;  //*  temp->next->prev = temp;
  }
}

void DeleteFirst(PPNODE head)
{
 
 if(*head == NULL)  //If LL is empty
 {
  printf("Linked List is empty\n");
  return;
 }
 
 if((*head)->next == NULL)  // If there is single node
 {
  free(*head);
  *head = NULL;
 }
 
 else   //More than one node
 {
   *head = (*head)->next;  //*   //Need not to use temp pointer to get the track of previous node
   free((*head)->prev);    //*
   (*head)->prev = NULL;   //*
 }
}

void DeleteLast(PPNODE head)
{
 PNODE temp = NULL;
 
 if(*head == NULL)
 {
  printf("Linked List is empty\n");
  return;
 }
 
 if((*head)->next == NULL)  // If there is single node
 {
  free(*head);
  *head = NULL;
 }
 
 else 
 {
  temp = *head;
  
  while(temp->next != NULL)    //while(temp->next->next != NULL)
                               //..
  {                            //..
   temp = temp->next;          // free(temp->next);
                               // temp->next = NULL;
  }
  temp->prev->next = NULL;
  free(temp);
 }
}

void Display(PNODE head)
{
 printf("Data in the linked list is:\n");
 
 while(head != NULL)
 {
  printf("| %d | <=> ",head->data);
  head = head->next;
 }
 printf("NULL\n");
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
 PNODE newn = NULL;
 PNODE temp = NULL;
 
 int size = 0, iCnt = 0;
 size = Count(*head);

 if((pos < 1) || (pos > (size+1)))
 {
  printf("Invalid Position\n");
  return;
 }
 
 if(pos == 1)
 {
  InsertFirst(head,no);
 }
 
 else if(pos == size+1)
 {
  InsertLast(head,no);
 }
 
 else
 {
  newn = (PNODE)malloc(sizeof(NODE));
  
  newn->data = no;
  newn->next = NULL;
  newn->prev = NULL;    //*
  
  temp = *head;
  for(iCnt = 1; iCnt < (pos-1); iCnt++)
  {
   temp=temp->next;
  }
  
  newn->next = temp->next;
  temp->next->prev = newn; //*
  temp->next = newn;
  newn->prev = temp; //*
 }
}

void DeleteAtPos(PPNODE head, int pos)
{
 PNODE temp = NULL;
 
 int size = 0, iCnt = 0;
 size = Count(*head);

 if((pos < 1) || (pos > size))
 {
  printf("Invalid Position\n");
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
  for(iCnt = 1; iCnt < (pos-1); iCnt++)
  {
   temp=temp->next;
  }
    
  temp->next = temp->next->next;
  free(temp->next->prev);  //*
  temp->next->prev = temp;  //*
 } 
}

int main()
{
 PNODE first = NULL;
 int iRet = 0;
 
 InsertFirst(&first,21);
 InsertFirst(&first,11);
 
 InsertLast(&first,51);
 InsertLast(&first,101);
 
 Display(first);
 
 iRet = Count(first);
 
 printf("The no of nodes in the linked list are : %d\n",iRet);
 
 InsertAtPos(&first,75,3);
 Display(first);
 
 DeleteAtPos(&first,3);
 Display(first);
 
 DeleteFirst(&first);
 DeleteLast(&first);
 
 Display(first);
 
 iRet = Count(first);
 
 printf("The no of nodes in the linked list are : %d\n",iRet);
 
 return 0;
}
