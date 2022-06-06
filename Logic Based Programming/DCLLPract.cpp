#include<iostream>
using namespace std;

struct node
{
 int data;
 struct node *next;
 struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCLL
{
 private:
  PNODE Head;
  PNODE Tail;
  int Cnt;
  
 public:
  DoublyCLL();
  ~DoublyCLL();
  void InsertFirst(int);
  void InsertLast(int);
  void InsertAtPosition(int, int);
  void DeleteFirst();
  void DeleteLast();
  void DeleteAtPosition(int);
  void ReverseList();
  void Display();
  int Count();
};

DoublyCLL :: DoublyCLL()
{
 Head = NULL;
 Tail = NULL;
 Cnt = 0;
} 

DoublyCLL :: ~DoublyCLL()
{
 PNODE Temp = NULL, Navigate = NULL;
 
 Navigate = Head;
 do
 {
  Temp = Navigate; 
  Navigate = Navigate -> next;
  delete Temp;
 }while(Navigate != Head);
}

void DoublyCLL :: InsertFirst(int no)
{
 PNODE newn = NULL;
 
 newn = new NODE();
 
 newn->data = no;
 newn->next = NULL;
 newn->prev = NULL;
 
 if(Head == NULL && Tail == NULL)
 {
  Head = newn;
  Tail = newn;
 }
 else
 {
  newn->next = Head;
  Head = newn;
 }
 Tail->next = Head;
 Head->prev = Tail;
 
 Cnt++;
}

void DoublyCLL :: InsertLast(int no)
{
 PNODE newn = NULL;
 PNODE temp = NULL;
 
 newn = new NODE();
 
 newn->data = no;
 newn->next = NULL;
 newn->prev = NULL;
 
 if(Head == NULL && Tail == NULL)
 {
  Head = newn;
  Tail = newn;
 }
 else
 {
  temp = Head;
  
  do
  {
   temp = temp->next;
  }while(temp != Tail);
  temp->next = newn;
  newn->prev = temp;
  Tail = newn; 
 }
 Tail->next = Head;
 Head->prev = Tail;
 
 Cnt++;
}

void DoublyCLL :: InsertAtPosition(int no, int pos)
{
 PNODE newn = NULL,temp = NULL;
 int iCnt = 0;
 
 newn = new NODE();
 
 newn->data = no;
 newn->next = NULL;
 newn->prev = NULL;
 
 if(pos < 1 || pos > Cnt+1)
 {
  cout<<"Invalid Position\n";
  return;
 }
 if(pos == 1)
 {
  InsertFirst(no);
 }
 else if(pos == Cnt+1)
 {
  InsertLast(no);
 }
 else
 {
  temp = Head;
  
  for(iCnt = 1; iCnt <= pos-2; iCnt++)
  {
   temp = temp->next;
  }  
  
  newn->next = temp->next;
  temp->next->prev = newn;
  temp->next = newn;
  newn->prev = temp;
 }
 Cnt++;
}

void DoublyCLL :: DeleteFirst()
{
 if(Head == NULL && Tail == NULL)
 {
  cout<<"Linked list is empty\n";
  return;
 }
 else
 {
  Head = Head->next;
  delete Head->prev;
  
  Tail->next = Head;
  Head->prev = Tail;
 } 
 Cnt--;
}

void DoublyCLL :: DeleteLast()
{
 PNODE temp = NULL;
 
 if(Head == NULL && Tail == NULL)
 {
  cout<<"Linked list is empty\n";
  return;
 }
 else
 {
  temp = Head;
  
  do
  {
   temp = temp->next;
  }while(temp->next != Tail);
  
  delete Tail;
  Tail = temp;
  
  Tail->next = Head;
  Head->prev = Tail;
 }
 Cnt--;
}

void DoublyCLL :: DeleteAtPosition(int pos)
{
 int iCnt = 0;
 PNODE temp = NULL, temp1 = NULL;
 
 if((pos < 1) || (pos > Cnt))
 {
  printf("Invalid Position\n");
  return;
 }
 
 if(pos == 1)
 {
  DeleteFirst();
 }
 
 else if(pos == Cnt)
 {
  DeleteLast();
 }
 
 else
 {
  temp = Head;
  
  for(iCnt = 1; iCnt <= pos-2; iCnt++)
  {
   temp=temp->next;
  }
  temp1 = temp->next;
  temp->next = temp1->next;
  temp1->next->prev = temp;
  delete temp1;  
 }
 Cnt--;
}

void DoublyCLL :: ReverseList()
{
 PNODE temp = NULL;
}
void DoublyCLL :: Display()
{
 PNODE temp = NULL;
 
 temp = Head;
 
 do
 {
 cout<<"| "<<temp->data<<" |=>";
 temp = temp->next;
 }while(temp != Head);
}

int main()
{
 DoublyCLL obj;
 
 obj.InsertFirst(100);
 obj.InsertFirst(90);
 obj.InsertFirst(80);
 obj.InsertFirst(70);
 obj.InsertFirst(50);
 
 obj.InsertLast(110);
 obj.InsertAtPosition(60,2);
 obj.DeleteFirst();
 obj.DeleteLast();
 obj.DeleteAtPosition(2);
 obj.Display();
 
 return 0;
}
