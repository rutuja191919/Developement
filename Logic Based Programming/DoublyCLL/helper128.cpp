#include "header128.h"

DoublyCLL :: DoublyCLL()
{
 head = NULL;
 tail = NULL;
 CountNode = 0;
}

void DoublyCLL :: InsertFirst(int iNo)
{
 PNODE newn = NULL;
 newn = new NODE;
 
 newn->data = iNo;
 newn->next = NULL;
 newn->prev = NULL;
 
 if(CountNode == 0)
 {
  head = newn;
  tail = newn;
 }
 else
 {
  newn->next = head;
  head->prev = newn;
  head = newn;
 }
 
 tail->next = head;
 newn->prev = tail;
 
 CountNode++;
}

void DoublyCLL :: InsertLast(int iNo)
{
  PNODE newn = NULL;
  newn = new NODE;
  
  newn->data = iNo;
  newn->next = NULL;
  newn->prev = NULL;
  
  if(CountNode == 0)
  {
   head = newn;
   tail = newn;
  }
  else
  {
   tail->next = newn;
   newn->prev = tail;
   
   tail = newn;
  }
  
  tail->next = head;
  head->prev = tail;
  
  CountNode++;
}

void DoublyCLL :: InsertAtPosition(int iNo, int iPos)
{
 if((iPos < 1) || (iPos > CountNode+1))
 {
  cout<<"Invalid Position\n";
  return;
 }
 
 if(iPos == 1)
 {
  InsertFirst(iNo);
 }
 
 else if(iPos == (CountNode+1))
 {
  InsertLast(iNo);
 }
 
 else
 {
  PNODE newn = NULL,temp = NULL;
  int iCnt = 0;
 
  newn = new NODE;
 
  newn->data = iNo;
  newn->next = NULL;
  newn->prev = NULL;
  
  temp = head;
  
  for(iCnt = 1; iCnt < (iPos-1); iCnt++)
  {
   temp = temp->next;
  }
  
  newn->next = temp->next;
  temp->next->prev = newn;
  temp->next = newn;
  newn->prev = temp;
  
  CountNode++;
 } 
}

void DoublyCLL :: DeleteFirst()
{
 if(CountNode == 0)
 {
  cout<<"Linked list is empty\n";
  return;
 }
 else if(CountNode == 1)
 {
  delete head;
  
  head = NULL;
  tail = NULL;
 }
 else
 {
  head = head->next;
  delete tail->next; 
 }
 
 tail->next = head;
 head->prev = tail;
 
 CountNode--;
}

void DoublyCLL :: DeleteLast()
{
 if(CountNode == 0)
 {
  cout<<"Linked list is empty\n";
  return;
 }
 else if(CountNode == 1)
 {
  delete head;
  
  head = NULL;
  tail = NULL;
 }
 else
 {
  tail = tail->prev;
  delete tail->next;
 }
 
  tail->next = head;
  head->prev = tail;

  CountNode--;
}

void DoublyCLL :: DeleteAtPosition(int iPos)
{
 if((iPos < 1) || (iPos > CountNode))
 {
  cout<<"Invalid Position\n";
  return;
 }
 
 if(iPos == 1)
 {
  DeleteFirst();
 }
 
 else if(iPos == CountNode)
 {
  DeleteLast();
 }
 
 else
 {
  PNODE temp = head;
  int iCnt = 0;
  
  for(iCnt = 1; iCnt < iPos; iCnt++)
  {
   temp = temp->next;
  }
  
  temp->prev->next = temp->next;
  temp->next->prev = temp->prev;
  delete temp;
  
  CountNode--;
 }
}

void DoublyCLL :: Display()
{
 int iCnt = 0;
 PNODE temp = head;
 
 for(iCnt = 1; iCnt <= CountNode; iCnt++,temp = temp->next)
 {
  cout<<"| "<<temp->data<<" |=>";
 }
 cout<<"\n";
}

int DoublyCLL :: Count()
{
 return CountNode;
}
