#include<iostream>
using namespace std;

template<class T>
struct node
{
 T data;
 struct node *next;
};

template<class T>
class SinglyLL
{
	public:
	 struct node<T> *Head;
     int count;

	 SinglyLL();
	 void InsertFirst(T);
	 void InsertLast(T);
	 void InsertAtPos(T, int);
	 void DeleteFirst();
	 void DeleteLast();
	 void DeleteAtPos(int);
	 void Display();
	 int CountNode();
};

template<class T>
SinglyLL<T> :: SinglyLL()
{
	Head = NULL;
	count = 0;
}

template<class T>
void SinglyLL<T> :: InsertFirst(T no)
{
	struct node<T> *newn = NULL;
    newn = new struct node<T>;

	newn->data = no;
	newn->next = NULL;

	newn -> next = Head;
	Head = newn;
	count++;
} 

template<class T>
void SinglyLL<T> :: InsertLast(T no)
{
	struct node<T> *newn = NULL;
    newn = new struct node<T>;

	newn->data = no;
	newn->next = NULL;

	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		struct node<T> *temp = Head;

		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
	count++;
} 

template<class T>
void SinglyLL<T> :: InsertAtPos(T no, int iPos)
{
  struct node<T> *newn = NULL;
  newn = new struct node<T>;

  newn->data = no;
  newn->next = NULL;

  if((iPos < 1) || (iPos > count+1))
  {
	cout<<"The position is invalid"<<endl;
	return;
  }

  if(iPos == 1)
  {
	InsertFirst(no);
  }
  else if(iPos == (count+1))
  {
	InsertLast(no);
  }
  else
  {
	struct node<T> *temp = Head;

    for(int iCnt = 1; iCnt <= (iPos - 2); iCnt++)
    {
	  temp = temp->next;
    }
    newn->next = temp->next;
    temp->next = newn;
  }
  count++;
}

template<class T>
void SinglyLL<T> :: DeleteFirst()
{
	if(count == 0)
	{
		cout<<"The linked list is empty"<<endl;
		return;
	}

	struct node<T> *temp = Head;
	Head = Head->next;
	delete temp;
	count--;
}

template<class T>
void SinglyLL<T> :: DeleteLast()
{
	struct node<T> *temp = Head;

	while(temp->next->next != NULL)
	{
		temp = temp->next;
	}

	delete temp->next;
	temp->next = NULL;

	count--;
}

template<class T>
void SinglyLL<T> :: DeleteAtPos(int iPos)
{
  if((iPos < 1) || (iPos > count))
  {
	cout<<"The position is invalid"<<endl;
	return;
  }

  if(iPos == 1)
  {
	DeleteFirst();
  }
  else if(iPos == count)
  {
	DeleteLast();
  }
  else
  {
	struct node<T> *temp = Head;
    struct node<T> *temp1 = NULL;

    for(int iCnt = 1; iCnt <= (iPos - 2); iCnt++)
    {
	  temp = temp->next;
    }
    temp1 = temp->next;
	temp->next = temp1->next;
	delete temp1;
  }
  count--;
}

template<class T>
void SinglyLL<T> :: Display()
{
	struct node<T> *temp = NULL;

    temp = Head;
    cout<<endl<<"Elements from linked list are : "<<endl;
	while(temp != NULL)
	{
		cout<<"| "<<temp->data<<" |->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

template<class T>
int SinglyLL<T> :: CountNode()
{
	return count;
}

int main()
{
	SinglyLL<int>obj1;
    
	obj1.InsertFirst(21);
	obj1.InsertFirst(11);
    obj1.InsertLast(51);
	obj1.InsertLast(101);

    obj1.InsertAtPos(31,3);

    obj1.Display();
	cout<<"Number of nodes are : "<<obj1.CountNode()<<endl;
    
	obj1.DeleteFirst();
	obj1.Display();
	cout<<"Number of nodes are : "<<obj1.CountNode()<<endl;
    
	obj1.DeleteLast();
	obj1.Display();
	cout<<"Number of nodes are : "<<obj1.CountNode()<<endl;
    
	obj1.DeleteAtPos(2);
	obj1.Display();
	cout<<"Number of nodes are : "<<obj1.CountNode()<<endl;
    
	SinglyLL<float>obj2;

    obj2.InsertFirst(21.11);
	obj2.InsertFirst(11.11);
	obj2.InsertLast(51.11);
	obj2.InsertLast(101.11);

    obj2.InsertAtPos(31.10,3);

    obj2.Display();
	cout<<"Number of nodes are : "<<obj2.CountNode()<<endl;

	obj2.DeleteFirst();
	obj2.Display();
	cout<<"Number of nodes are : "<<obj2.CountNode()<<endl;
    
	obj2.DeleteLast();
	obj2.Display();
	cout<<"Number of nodes are : "<<obj2.CountNode()<<endl;
    
	obj2.DeleteAtPos(2);
	obj2.Display();
	cout<<"Number of nodes are : "<<obj2.CountNode()<<endl;
	return 0;
}