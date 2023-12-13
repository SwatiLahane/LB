
#include<stdio.h>
#include<stdlib.h>

//Another type of of using typedef
typedef struct node
{ 
    int data;
  struct node *next;
}NODE, *PNODE ,**PPNODE;



void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
   PNODE newn =NULL;
   newn =  malloc(PNODE)(sizeof(NODE));
   
  newn->data = no;
  newn->next = NULL; 

  if((*head ==NULL) && (*Tail == NULL)) //LL Is empty
  {

    *Head = newn;
    *Tail = newn;

    (*Tail)->next = *Head;
    //newn ->next = newn;

  }
  else  //LL contains at least one node 
  {
     newn->next =*Head;
     *Head = newn;
     (*Tail)->next = *Head;
     
  }

}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{

   PNODE newn =NULL;

  newn =  malloc(PNODE)(sizeof(NODE));
   
  newn->data = no;
  newn->next = NULL; 

  if((*head ==NULL) && (*Tail == NULL)) //LL Is empty
  {
      
    *Head = newn;
    *Tail = newn

    (*Tail)->next = *Head;
    //newn ->next = newn;

  }
  else  //LL contains at least one node 
  {
    
  }


}

void InsertAtPos(PPNODE Head, PPNODE Tail, int no ,int ipos)
{

}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{

}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    
}

void DeleteAtPos(PPNODE Head, PPNODE Tail)
{

}

void Display(PNODE Head, PNODE Tail)
{

}

int Count(PNODE Head, PNODE Tail)
{
     return 0;
}


int main()
{
  PNODE First = NULL;
  PNODE Last = NULL;   //#


  return 0;

}