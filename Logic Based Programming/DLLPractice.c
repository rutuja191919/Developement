#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
 struct node *prev;
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
 newn->prev = NULL;
 
 if(*head == NULL)
 {
  *head = newn;
 }
 else
 {
   newn->next = *head;
  (*head)->prev = newn;  //*
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
 newn->prev = NULL;
 
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
  newn->prev = temp;
 }
}

void DeleteFirst(PPNODE head)
{
 if(*head == NULL)
 {
  printf("Linked List is empty\n");
  return;
 }
 
 if((*head)->next == NULL)  //If there is single node
 {
  free(*head);
  *head = NULL;
 }
 
 else
 {
  *head = (*head)->next;
   free((*head)->prev);
  (*head)->prev = NULL;
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
   
 if((*head)->next == NULL)  //If there is single node
 {
  free(*head);
  *head = NULL;
 }
 
 else
 {
  temp = *head;
  
  while(temp->next != NULL)
  {
   temp = temp -> next;
  }
  
  temp->prev->next = NULL;
  free(temp); 
 }
}

void Display(PNODE head)
{
 printf("Nodes in the linked list are : \n");
 while(head != NULL)
 {
  printf("| %d | -> ",head->data);
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
 int size = 0, cnt = 0;
 PNODE temp = NULL;
 PNODE newn = NULL;
 
 newn = (PNODE)malloc(sizeof(NODE));
 
 newn->data = no;
 newn->next = NULL;
 newn->prev = NULL;
 
 size = Count(*head);
 
 if((pos < 1) || (pos > size+1))
 {
  printf("Invalid position\n");
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
  temp = *head;
  
  for(cnt = 1; cnt<pos-1 ;cnt++)
  {
   temp = temp->next;
  }
  
  newn->next = temp->next;
  temp->next->prev = newn; //*
  temp->next = newn;
  newn->prev = temp;  //*  
 }
}

void DeleteAtPos(PPNODE head, int pos)
{
 int size = 0, iCnt = 0;
 PNODE temp = NULL;
 
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
  
  for(iCnt = 1; iCnt < pos; iCnt++)
  {
   temp=temp->next;
  }
  
  temp->next->prev = temp->prev;
  temp->prev->next = temp->next;
  free(temp);
 }
}
int main()
{
 int iRet = 0;
 PNODE first = NULL;
 
 InsertFirst(&first,51);
 InsertFirst(&first,41);
 InsertFirst(&first,31);
 InsertFirst(&first,21);
 InsertFirst(&first,10);
 
 //InsertLast(&first,71);

 //InsertAtPos(&first,11,2); 
 //DeleteFirst(&first);
 //DeleteLast(&first);

 DeleteAtPos(&first,5);
 
 Display(first);
 
 iRet = Count(first);
 
 printf("The no of elements in the linked list are %d\n",iRet);
 
 
 return 0;
}
