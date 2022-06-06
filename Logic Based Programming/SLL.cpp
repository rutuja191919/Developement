//PPA CHI PUNYAYI (15 WASOOOOL)

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
 int Data;
 node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class Singly_Linked_List
{
private:
 PNODE Head;
 
public:
 Singly_Linked_List();
 ~Singly_Linked_List();
 BOOL InsertFirst(int);
 BOOL InsertLast(int);
 BOOL InsertAtPosition(int, int);
 inline void Display();
 inline int Count();
 BOOL DeleteFirst();
 BOOL DeleteAtPosition(int);
 BOOL DeleteLast();
};

Singly_Linked_List :: Singly_Linked_List()
{
 Head = NULL;
}

Singly_Linked_List :: ~Singly_Linked_List()
{
 PNODE Temp, Navigate;
 
 if(Head != NULL)
 {
  Navigate = Head;
  
  while(Navigate != NULL)
  {
   Temp = Navigate->Next;
   delete Navigate;
   Navigate = Temp;
  } 
 }
}
BOOL Singly_Linked_List :: InsertFirst(int no)
{
 PNODE newn = NULL;
 
 newn = new NODE;
 if(newn == NULL)
 {
  return FALSE;
 }
 
 newn->Next = NULL;
 newn->Data = no;
 
 if(Head == NULL)
 {
  Head = newn;
 }
 else
 {
  newn->Next = Head;
  Head = newn;
 }
 return TRUE;
}

BOOL Singly_Linked_List :: InsertLast(int no)
{
 PNODE newn = NULL, temp = Head;
 
 newn = new NODE;
 if(newn == NULL)
 {
  return FALSE;
 }
 
 newn->Next = NULL;
 newn->Data = no;
 
 if(Head == NULL)
 {
  Head = newn;
 }
 else
 {
  while(temp -> Next != NULL)
  {
   temp = temp->Next;
  } 
  temp->Next = newn;
 }
 return TRUE;
}

BOOL Singly_Linked_List :: InsertAtPosition(int pos, int no)
{
 if((Head == NULL) || (pos >Count()+1) || (pos <= 0))
 {
  return FALSE;
 }
 
 if(pos == 1)
 {
  return(InsertFirst(no));
 }
 
 else if(pos == Count()+1)
 {
  return(InsertLast(no));
 }
 
 else
 {
 PNODE newn = NULL, temp = Head;

 newn = new NODE;
 if(newn == NULL)
 {
  return FALSE;
 }
 
 newn->Next = NULL;
 newn->Data = no;
 
 for(int i = 1; i <= (pos-2); i++)
 {
  temp = temp->Next;
 }
 newn->Next = temp->Next;
 temp->Next = newn;
 } 
 return TRUE;
}

BOOL Singly_Linked_List :: DeleteFirst()
{
 PNODE temp = Head;
 
 if(Head == NULL)
 {
  return FALSE;
 }
 else
 {
  Head = Head->Next;
  free(temp);
 } 
 return TRUE;
}

BOOL Singly_Linked_List :: DeleteLast()
{
 if(Head == NULL)
 {
  return FALSE;
 }
 
 else if(Head->Next == NULL)
 {
  delete(Head);
  Head = NULL;
 }
 
 else
 {
  PNODE temp1 = Head, temp2 = NULL;
  
  while(temp1 -> Next -> Next != NULL)
  {
    temp1 = temp1 -> Next;
  } 
  temp2 = temp1->Next;
  temp1->Next = NULL;
  free(temp2);
 } 
 return TRUE;
}

BOOL Singly_Linked_List :: DeleteAtPosition(int pos)
{
 if((Head == NULL) || (pos > Count()) || (pos <= 0))
 {
  return FALSE;
 }
 
 else if(pos == 1)
 {
  DeleteFirst();
 }
 else if(pos == (Count()))
 {
  DeleteLast();
 }
 else
 {
  PNODE temp1 = Head, temp2 = NULL;
  
  for(int i = 1; i <= (pos-2) ; i++)
  {
   temp1 = temp1->Next;
   ++i;
  } 
  temp2 = temp1->Next;
  temp1->Next = temp2->Next;
  
  delete temp2;
 }
 return TRUE;
}

void Singly_Linked_List :: Display()
{
 PNODE Temp = Head;
 
 while(Temp != NULL)
 {
  cout<<Temp->Data<<"->";
  Temp = Temp -> Next;
 }
 cout<<"NULL\n";
}

int Singly_Linked_List :: Count()
{
 PNODE Temp = Head;
 int cnt = 0;
 
 while(Temp != NULL)
 {
  cnt++;
  Temp = Temp -> Next;
 }
 return cnt;
}


int main()
{
 Singly_Linked_List obj1;
 Singly_Linked_List *obj2 = new Singly_Linked_List;
 
 obj1.InsertFirst(51);
 obj1.InsertFirst(21);
 obj1.InsertFirst(11);
 
 obj1.Display();
 
 cout<<"\nNumber of Nodes :"<<obj1.Count()<<"\n";
 
 obj1.InsertFirst(101);
 obj1.InsertFirst(111);
 
 obj1.Display();
 
 cout<<"\nNumber of Nodes :"<<obj1.Count()<<"\n";
 
 obj1.InsertAtPosition(75,4);
 obj1.Display();
 
 obj1.DeleteLast();
 obj1.Display();
 
 obj2->InsertFirst(501);
 obj2->InsertFirst(511);
 obj2->InsertFirst(521);
 
 obj2->Display();
 
 obj2->InsertLast(551);
 obj2->InsertAtPosition(601,3);
 
 obj2->Display();
 
 cout<<"\nNumber of Nodes :"<<obj1.Count()<<"\n";
 
 delete obj2;
  
 return 0;
}

