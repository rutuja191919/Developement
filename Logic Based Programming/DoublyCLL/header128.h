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
 public:
  PNODE head;
  PNODE tail;
  int CountNode;
  
 public:
  DoublyCLL();
  
  void InsertFirst(int);
  void InsertLast(int);
  void InsertAtPosition(int,int);
  
  void DeleteFirst();
  void DeleteLast();
  void DeleteAtPosition(int);
  
  void Display();
  int Count(); 
};
