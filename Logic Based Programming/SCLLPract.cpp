#include<iostream>
using namespace std;

struct node
{
 int data;
 struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyCLL
{
 private:
  PNODE head;
  PNODE tail;
  int count;
  
 public:
  SinglyCLL();
  ~SinglyCLL();
  void InsertFirst(int);
  void InsertLast(int);
  void InsertAtPosition(int,int);
  void DeleteFirst();
  void DeleteLast();
  void DeleteAtPosition(int);
  void Display();
  int Count();
};


SinglyCLL :: SinglyCLL()
{
 head = NULL;
 tail = NULL;
 count = 0;
} 

SinglyCLL :: ~SinglyCLL()
{
 PNODE temp = NULL, navigate = NULL;
 
 temp = head;
 
 do
 {
  navigate = temp;
  temp = temp->next;
  delete navigate;
 }while(temp != head);
 
}

void SinglyCLL :: InsertFirst(int no)
{
  PNODE newn = NULL;
  
  newn = new NODE;
  
  newn->data = no;
  newn->next = NULL;
  
  if(head == NULL && tail == NULL)
  {
   head = newn;
   tail = newn;
  }
  
  else
  {
   newn->next = head;
   head = newn;
  }
  tail->next = head;
  count++;
}

void SinglyCLL :: InsertLast(int no)
{
 PNODE newn = NULL;
 
 newn = new NODE;
 
 newn->data = no;
 newn->next = NULL;
 
 if(head == NULL && tail == NULL)
 {
  head = newn;
  tail = newn;
 }
 else
 {
  tail->next = newn;
  tail = newn;
 }
 tail->next = head;
 count++;
}

void SinglyCLL :: InsertAtPosition(int no, int pos)
{
 PNODE newn = NULL;
 PNODE temp = NULL;
 int iCnt = 0;
 
 newn = new NODE;
 
 newn->data = no;
 newn->next = NULL;
 
 if(pos < 1 || pos > count+1)
 {
  cout<<"Invalid position\n";
  return;
 }
 
 if(pos == 1)
 {
  InsertFirst(no);
 }
 else if(pos == count+1)
 {
  InsertLast(no);
 }
 else
 {
  temp = head;
  
  for(iCnt = 1; iCnt <= pos-2; iCnt++)
  {
   temp = temp->next;
  }
  newn->next = temp->next;
  temp->next = newn;
 }
 count++;
}

void SinglyCLL :: DeleteFirst()
{
 if(head == NULL || tail == NULL)
 {
  cout<<"Linked list is empty\n";
  return;
 }
 else
 {
  head = head->next;
  delete tail->next;
 }
 tail->next = head;
 count--;
}

void SinglyCLL :: DeleteLast()
{
 PNODE temp = NULL;
 
 if(head == NULL || tail == NULL)
 {
  cout<<"Linked list is empty\n";
  return;
 }
 else
 {
  temp = head;
  
  while(temp->next != tail)
  {
   temp = temp->next;
  }
  
  delete tail;
  tail = temp;
  tail->next = head;
  count--;
 }
}

void SinglyCLL :: DeleteAtPosition(int pos)
{
 PNODE temp = NULL, temp1 = NULL;
 int iCnt = 0;
 
 if(pos < 1 || pos > count)
 {
  cout<<"Invalid position\n";
 }
 
 if(pos == 1)
 {
  DeleteFirst();
 }
 else if(pos == count)
 {
  DeleteLast();
 }
 else
 {
  temp = head;
  
  for(iCnt = 1; iCnt <= pos-2 ; iCnt++)
  {
   temp = temp->next;
  }
  
  temp1 = temp->next;
  temp->next = temp1->next;
  delete temp1;
 }
}

void SinglyCLL :: Display()
{
 PNODE temp = head;
 
 do
 {
  cout<<"| "<<temp->data<<" | -> ";
  temp = temp->next;
 }while(temp != head);
}

int SinglyCLL :: Count()
{
 PNODE temp = head;
 int cnt = 0;
 
 do
 {
  cnt++;
  temp = temp->next;
 }while(temp != head);
 
 return cnt;
}

int main()
{
 SinglyCLL obj;
 int iRet = 0;
 
 obj.InsertFirst(101);
 obj.InsertFirst(81);
 obj.InsertFirst(61);
 obj.InsertFirst(51);
 obj.InsertFirst(31);
 obj.InsertFirst(21);
 
 obj.InsertLast(111); 
 obj.InsertAtPosition(41,3);
 
 obj.DeleteFirst();
 obj.DeleteLast();
 obj.DeleteAtPosition(2);
 
 obj.Display(); 
 iRet = obj.Count();
 
 cout<<"\nThe total number of nodes in the linked list are: "<<iRet<<"\n"; 
 
 return 0;
}

