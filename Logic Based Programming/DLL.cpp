#include<iostream>
using namespace std;

#define TRUE 1 
#define FALSE 0

typedef int BOOL;

struct node
{
 int Data;
 struct node *Next;
 struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Doubly_linkedlist
{
 private:
  PNODE Head;
  
 public:
  Doubly_linkedlist();
  ~Doubly_linkedlist();
  BOOL InsertFirst(int);
  BOOL InsertLast(int);
  BOOL InsertAtPos(int, int);
  BOOL DeleteFirst();
  BOOL DeleteLast();
  BOOL DeleteAtPos(int);
  inline void Display();
  inline int Count();
};

Doubly_linkedlist :: Doubly_linkedlist()
{
 Head = NULL;
}

Doubly_linkedlist :: ~Doubly_linkedlist()
{
 PNODE Temp = Head;
 
 if(Head != NULL)
 {
  while(Head != NULL)
  {
   Head = Head->Next;
   delete Temp;
   Temp = Head;
  }
 }
}

BOOL Doubly_linkedlist :: InsertFirst(int no)
{
 PNODE newn = NULL;
 
 newn = new NODE;
 
 newn->Data = no;
 newn->Next = NULL;
 newn->Prev = NULL;
 
 if(Head == NULL)
 {
  Head = newn;
 }
 else
 {
  Head->Prev = newn;
  newn->Next = Head;
  Head = newn;
 }
 
 return TRUE;
 
}

B
int main()
{
 return 0;
}
