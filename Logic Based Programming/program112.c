//Singly Linear Linked list
/*
  InsertFirst
  InsertLast
  InsertAtPosition
  
  DeleteFirst
  DeleteLast
  DeleteAtPosition
  
  Display
  Count
*/

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

/*
 1. allocate memory for node
 2. initialize the node
 3. check whether LL is empty or not
 4. If LL is empty the new node is the first node.
 5. If LL contains atleast one node in it then store the address of previous first node in the next pointer of new node
*/

void InsertFirst(PPNODE Head, int iNo)
{
  PNODE newn = NULL;
  
  newn = (PNODE)malloc(sizeof(NODE));
  newn -> data = iNo;
  newn -> next = NULL;
 
  if(*Head == NULL)
  {
   *Head = newn;
  }
  else
  {
   newn->next = *Head;
   *Head = newn;
  }
}

void Display(PNODE Head)
{
 while(Head!= NULL)
 {
  printf("%d\t",Head->data);
  Head = Head->next;
 }
}

int main()
{
 
 PNODE First = NULL; 

 InsertFirst(&First,101);
 InsertFirst(&First,51);
 InsertFirst(&First,21);
 InsertFirst(&First,11);
 
 Display(First);
 
 return 0;
}


/*
  Rules : 

  1.Use ONLY dynamic memory allocations
  2.Don't write any technical syntax in main
  3.Don't use any global variables
  4.Be careful while manipulating the First pointer
  5.pass the first pointer directly if the function is not going to modify the linkedlist. (Display,  Count)
  6.pass the address of the first pointer if the function is going to modify the linked list(Insert, Delete)
  
*/
