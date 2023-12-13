
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
   newn = (PNODE) malloc(sizeof(NODE));
   
  newn->data = no;
  newn->next = NULL; 

  if((*Head ==NULL) && (*Tail == NULL)) //LL Is empty
  {

    *Head = newn;
    *Tail = newn;

    
    
  }
  else  //LL contains at least one node 
  {
     newn->next =*Head;
     *Head = newn;
     
     
  }

  //newn ->next = newn;
  (*Tail)->next = *Head;
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{

   PNODE newn =NULL;
  newn =  (PNODE)malloc(sizeof(NODE));
   
  newn->data = no;
  newn->next = NULL; 

  if((*Head ==NULL) && (*Tail == NULL)) //LL Is empty
  {
      
    *Head = newn;
    *Tail = newn;
     (*Tail)->next = *Head;
    
  }
  else  //LL contains at least one node 
  {
      (*Tail)->next = newn;
      *Tail = newn;
      (*Tail)->next = *Head;

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
  printf("Elements of Linked List : \n");

  if((Head != NULL) && (Tail != NULL))
  {

    do
     {
           printf("| %d |->",Head->data);
           Head = Head->next;
     
     }while(Head != Tail->next);
     
     printf("Address of First Node \n");
  }

}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

  if((Head != NULL) && (Tail != NULL))
  {

    do
     {
           iCnt++;
           
           Head = Head->next;
     
     }while(Head != Tail->next);
     
    
  }

     return iCnt;
}


int main()
{
    
  PNODE First = NULL;
  PNODE Last = NULL;   //#
  int iRet = 0;
 

 InsertFirst(&First, &Last, 51);
 InsertFirst(&First, &Last, 21);
 InsertFirst(&First, &Last, 11);
  
 Display(First,Last);
iRet = Count(First,Last);
printf("Number of elemenets are : %d\n",iRet);

 
InsertLast(&First, &Last, 101);
InsertLast(&First, &Last, 111);
InsertLast(&First, &Last, 121); 
 Display(First,Last);
iRet = Count(First,Last);
printf("Number of elemenets are : %d\n",iRet);


  return 0;

}