#include<stdio.h>
#include<stdlib.h>

struct node
{ 
 int data;   //4
 struct node *next;   //8
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
 //allocatememory for node
 //initialize that node
 
 //check whether LL is empty or not
 //If LL is empty then new node is the first node so update its address in first pointer through head
 
 //If LL is not empty then store the address of first node in the next pointer of out new node
 //update the first pointer through head
 
 PNODE newn = NULL;
 
 newn = (PNODE)malloc(sizeof(NODE));   //newn = (struct node *)malloc(12);
 
 newn->data = no;
 newn->next = NULL;
 
 if(*head == NULL)  //Linked list is empty
 {
  *head = newn;
 }
 else               //Linked List contains at least one node
 {
  newn->next = *head;
  *head = newn;
 }
}

void InsertLast(PPNODE head, int no)
{
 //allocatememory for node
 //initialize that node
 
 //check whether LL is empty or not
 //If LL is empty then new node is the first node so update its address in first pointer through head
 
 //If LL is not empty then  
 //travel till last node of LL (loop)
 //store address of new node in the next pointer of last node
 
 PNODE newn = NULL;
 PNODE temp = NULL;
 
 newn = (PNODE)malloc(sizeof(NODE));   //newn = (struct node *)malloc(12);
 
 newn->data = no;
 newn->next = NULL;
 
 if(*head == NULL)  //Linked list is empty
 {
  *head = newn;
 }
 else               //Linked List contains at least one node
 {
  temp = *head;
  
  while(temp->next != NULL)
  {
    temp = temp->next;
  }
  
  temp->next = newn;
 } 
}

void DeleteFirst(PPNODE head)
{
  //If LL is empty then return 
  //If LL contains at least one node
  //store the address of second node in the head pointer
  //delete the node
  
  PNODE temp = NULL;
  
  if(*head == NULL)
  {
   return;
  }
  
  else
  {
    temp = *head;
    *head = temp -> next;
    free(temp);
  }
}
void Display(PNODE head)
{
 printf("Elements from the linked list are : \n");
 
 while(head != NULL)
 {
   printf("| %d | -> ",head->data);
   head = head->next;
 }
 printf("NULL\n");
}

int Count(PNODE head)
{
 int iCnt = 0;
 
 while(head != NULL)
 {
   iCnt++;
   head = head->next;
 }

 return iCnt;
}


int main()
{
 int iRet = 0;
 PNODE first = NULL;
 
 InsertFirst(&first, 101);
 InsertFirst(&first, 51);
 InsertFirst(&first, 21);
 InsertFirst(&first, 11);
 
 Display(first);   //call by value
 iRet = Count(first);
 
 printf("\nThe no of nodes in the linked list are : %d\n",iRet);
 
 InsertFirst(&first, 1);
 
 Display(first);   //call by value
 iRet = Count(first);
 
 printf("\nThe no of nodes in the linked list are : %d\n",iRet);
 
 InsertLast(&first, 111);
 InsertLast(&first, 121);
 
 Display(first);   //call by value
 iRet = Count(first);
 
 printf("\nThe no of nodes in the linked list are : %d\n",iRet);
 
 DeleteFirst(&first);
 DeleteFirst(&first);
 
 Display(first);   //call by value
 iRet = Count(first);
 
 printf("\nThe no of nodes in the linked list are : %d\n",iRet);
 
 return 0;
}
