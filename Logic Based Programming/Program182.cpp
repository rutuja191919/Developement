#include<iostream>
using namespace std;

template<class T>
struct node
{
 T data;
 struct node *next;
};

template<class T>
class Queue
{
	public:
	 struct node<T> *Head;
     int count;

	 Queue();
	 void Enqueue(T);   //InsertLast
	 void Dequeue();       //DeleteFirst
	 void Display();
	 int CountNode();
};

template<class T>
Queue<T> :: Queue()
{
	Head = NULL;
	count = 0;
}

template<class T>
void Queue<T> :: Enqueue(T no)  //InsertLast
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
void Queue<T> :: Dequeue()   //DeleteFirst
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
void Queue<T> :: Display()
{
	struct node<T> *temp = NULL;

    temp = Head;
    cout<<endl<<"Elements from queue are : "<<endl;
	while(temp != NULL)
	{
		cout<<"| "<<temp->data<<" |->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

template<class T>
int Queue<T> :: CountNode()
{
	return count;
}

int main()
{
	Queue<int> obj1;

	obj1.Enqueue(11);
	obj1.Enqueue(21);
	obj1.Enqueue(51);
	obj1.Enqueue(101);

    obj1.Display();
	cout<<"Number of elements in the queue are : "<<obj1.CountNode()<<endl;

	obj1.Dequeue();
 	obj1.Dequeue();
    obj1.Dequeue();
	
	obj1.Display();
	cout<<"Number of elements in the queue are : "<<obj1.CountNode()<<endl;

	obj1.Dequeue();
    obj1.Dequeue();

	return 0;
}