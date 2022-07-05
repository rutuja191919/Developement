#include<iostream>
using namespace std;

template<class T>
struct node
{
 T data;
 struct node *next;
};

template<class T>
class Stack
{
	public:
	 struct node<T> *Head;
     int count;

	 Stack();
	 void Push(T);     //InsertFirst
	 void Pop();       //DeleteFirst
	 void Display();
	 int CountNode();
};

template<class T>
Stack<T> :: Stack()
{
	Head = NULL;
	count = 0;
}

template<class T>
void Stack<T> :: Push(T no)  //InsertFirst
{
	struct node<T> *newn = NULL;
    newn = new struct node<T>;

	newn->data = no;
	newn->next = NULL;

	newn->next = Head;
    Head = newn;
	count++;
} 

template<class T>
void Stack<T> :: Pop()   //DeleteFirst
{ 
 T no;

 if(count == 0)
 {
	cout<<"Queue is empty"<<endl;
	return;
 }

 struct node<T> *temp = NULL;

 no = Head->data;
 temp = Head;
 Head= Head->next;
 delete temp;
 
 count--;
 cout<<"Removed element is : "<<no<<endl;
}

template<class T>
void Stack<T> :: Display()
{
	struct node<T> *temp = NULL;

    temp = Head;
    cout<<endl<<"Elements from stack are : "<<endl;
	while(temp != NULL)
	{
		cout<<"| "<<temp->data<<" |->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

template<class T>
int Stack<T> :: CountNode()
{
	return count;
}

int main()
{
	Stack<char> obj1;

	obj1.Push('A');
	obj1.Push('B');
	obj1.Push('C');
	obj1.Push('D');

    obj1.Display();
	cout<<"Number of elements in the queue are : "<<obj1.CountNode()<<endl;

	obj1.Pop();
 	obj1.Pop();
	
	obj1.Display();
	cout<<"Number of elements in the queue are : "<<obj1.CountNode()<<endl;

	obj1.Push('Z');
	obj1.Display();
	
	obj1.Pop();


	return 0;
}