//Singly Linear linked list using OOP

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;


class SinglyLL
{
   public:
      PNODE First;
      int Count;

      SinglyLL() 
      {
          First = NULL;
          Count = 0;
      }

  void InsertFirst(int no);
  void InsertLast(int no);
  void InsertAtPos(int no, int ipos);
  void DeleteFirst();
  void DeleteLast();
  void DeleteAtPos(int ipos);
  void Display();

};

InsertFirst(int no)
{

  PNODE newn =NULL;
  newn = (PNODE)mallloc(sizeof(NODE));
  newn->data = no;
  newn->next = NULL;

  if(First == NULL) //When LL is empty
  {
      *First = newn;

  }
  else //LL contains At least one node
  {
      newn->next =*First;
      *First = newn;

  }

}


int main()
{
   SinglyLL obj();
   obj.InsertFirst(51);
   obj.InsertFirst(21);
   obj.InsertFirst(11);


    return 0;
}