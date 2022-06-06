//PPA CHI PUNYAYI (15 WASOOOOL)

#include<iostream>
using namespace std;

struct node
{
 int Data;
 struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyCLL
{
 private:   //Characteristics
  PNODE Head;
  PNODE Tail;
  
 public:  //Behaviours
  SinglyCLL();
  void InsertFirst(int no);
  void InsertLast(int no);
  void InsertAtPosition(int no, int iPos);
  void DeleteFirst();
  void DeleteLast();
  void DeleteAtPosition(int iPos);
  void Display();
  int Count();
};

  SinglyCLL :: SinglyCLL()
  {
   Head = NULL;
   Tail = NULL;
  }
  
  void SinglyCLL :: InsertFirst(int no)
  {
   PNODE newn = NULL;
   
   newn = new NODE;
   
   newn->Data = no;
   newn->Next = NULL;
   
   if((Head == NULL) && (Tail == NULL))  //If LL is empty
   {
    Head = newn;
    Tail = newn;
   }
   
   else //If LL contains at least one node
   {
    newn->Next = Head;
    Head = newn;
   }
   Tail->Next = Head; 
  }
  
  void SinglyCLL :: InsertLast(int no)
  {
   PNODE newn = NULL;
   
   newn = new NODE;
    
   newn->Data = no;
   newn->Next = NULL;
   
   if((Head == NULL) && (Tail == NULL))  //If LL is empty
   {
    Head = newn;
    Tail = newn;
   }
   
   else //If LL contains at least one node
   {
    Tail->Next = newn;
    Tail = newn;
   }
   Tail->Next = Head; 
  }
  
  void SinglyCLL :: InsertAtPosition(int no, int iPos)
  {
   int iSize = Count();
   
   if((iPos >iSize+1) || (iPos <= 0))
   {
    return;
   }
 
   if(iPos == 1)
   {
    InsertFirst(no);
   }
 
  else if(iPos == iSize+1)
   {
    InsertLast(no);
   }
 
  else
  {
   PNODE newn = NULL, Temp = Head;
   int iCnt = 0;
   
   newn = new NODE;

   newn->Next = NULL;
   newn->Data = no;
 
   for(iCnt = 1; iCnt < (iPos-1); iCnt++)
   {
    Temp = Temp->Next;
   }  
   newn->Next = Temp->Next;
   Temp->Next = newn;
  }
 }
  
  void SinglyCLL :: DeleteFirst()
  {
    if((Head == NULL) && (Tail == NULL))  //If LL is empty
    {
     return;
    }
    
    else if(Head == Tail)   //If LL contains one node
    {
     delete Head;
     Head = NULL;
     Tail = NULL;
    }
    
    else
    {
     Head = Head->Next;
     delete Tail->Next;
 
    }
     Tail->Next = Head;
  }
  
  void SinglyCLL :: DeleteLast()
  {
    if((Head == NULL) && (Tail == NULL))  //If LL is empty 
    {
     return;
    }
    
    else if(Head == Tail)  //If LL contains one node
    {
     delete Head;
     Head = NULL;
     Tail = NULL;
    }
    
    else
    {
     PNODE Temp = Head;
     
     while(Temp->Next != Tail)
     {
      Temp = Temp->Next;
     }
     
     delete Tail;
     Tail = Temp;
     Tail->Next = Head;
    }
  }
  
  void SinglyCLL :: DeleteAtPosition(int iPos)
   {
    int iSize = Count();
   
    if((iPos >iSize) || (iPos <= 0))
    {
     return;
    }
 
    else if(iPos == 1)
    {
     DeleteFirst();
    }
  
    else if(iPos == iSize)
    {
     DeleteLast();
    }
    else
    {
     int iCnt = 0;
     PNODE Temp1 = Head;
     PNODE Temp2 = NULL;
    
     for(iCnt = 1; iCnt < (iPos-1) ; iCnt++)
     {
      Temp1 = Temp1->Next;
     }
    
     Temp2 = Temp1->Next;
     Temp1->Next = Temp2->Next;
     delete Temp2;
   }
  }
  
  
  void SinglyCLL :: Display()
  {
   PNODE Temp = Head;
   
   if((Head == NULL) && (Tail == NULL))  //If Linked List is empty
   {
    return;
   }
   else
   {
   do
    {
     cout<<"|"<<Temp->Data<<"|->";
     Temp = Temp->Next;
    }while(Temp!= Head);
   }
   cout<<endl;  
  }
  
  int SinglyCLL :: Count()
  {
   PNODE Temp = Head;
   int iCnt = 0;
   
   if((Head == NULL) && (Tail == NULL))  //If Linked List is empty
   {
    return 0;
   }
   
    do
    {
     iCnt++;
     Temp = Temp->Next;
    }while(Temp!= Head);
   
   return iCnt;  
  }

int main()
{
 int Choice = 1, iValue = 0, iPos = 0, iRet = 0;
 SinglyCLL obj;
 
 while(Choice != 0)
 {
  cout<<"1. Insert First"<<endl;
  cout<<"2. Insert Last"<<endl;
  cout<<"3. Insert At Position"<<endl;
  cout<<"4. Delete First"<<endl;
  cout<<"5. Delete Last"<<endl;
  cout<<"6. Delete At Position"<<endl;
  cout<<"7. Display the data"<<endl;
  cout<<"8. Count the no of elements"<<endl;
  cout<<"9. Terminate the application"<<endl;
  
  cout<<"Enter your choice : \n";
  cin>>Choice;
    
 switch(Choice)
 {
  case 1:
   cout<<"Enter the value to insert"<<endl;
   cin>>iValue;
   obj.InsertFirst(iValue);
   break;
  
  case 2:
   cout<<"Enter the value to insert"<<endl;
   cin>>iValue;
   obj.InsertLast(iValue);
   break;
   
  case 3:
   cout<<"Enter the value to insert"<<endl;
   cin>>iValue;
   
   cout<<"Enter the position to insert"<<endl;
   cin>>iPos;
   obj.InsertAtPosition(iValue, iPos);
   break;
   
   
  case 4:
   obj.DeleteFirst();
   break;
   
  case 5:
   obj.DeleteLast();
   break;
   
  case 6:
   cout<<"Enter the position to delete"<<endl;
   cin>>iPos;
   obj.DeleteAtPosition(iPos);
   break;
   
  case 7:
   obj.Display();
   break;

  case 8:
   iRet = obj.Count();
   cout<<"The no of elements are :"<<iRet<<endl;
   break;

  case 9:
   Choice = 0;
   break;
   
  default:
   cout<<"Oops! Wrong choice. Please enter appropriate choice"<<endl;
  }
 }
 
 return 0;
}
