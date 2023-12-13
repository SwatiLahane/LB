#include<stdio.h>
#include<stdlib.h>//for malloc

//Structure Declaration
struct node 
{
    int data; //4 bytes
    struct node *next; //8 Bytes 
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head , int No)
{
  //Step 1 : Allocate memory for Node
 PNODE newn = NULL;
 newn = (PNODE)malloc(sizeof(NODE));
 
 //Step 2: Intialise the node
 newn->data = No;
 newn->next = NULL;

 //Step 3: check wheather linked list is empty or not

 if(*Head == NULL) //LL is EMpty 
 {
     *Head = newn;
 }
 else //LL contains atleast 1 node in it 
 {
      newn -> next = *Head;
      *Head = newn;

 }

}

void Display(PNODE Head)
{
  printf("Elements of Linked List are : \n");

  while(Head != NULL)
  {
    printf("| %d | -> ",Head -> data);
    Head = Head -> next;
  }

  printf("NULL \n");

}

int Count(PNODE Head)
{
  
  int iCnt = 0;

  while(Head != NULL)
  {
   iCnt++;
   Head = Head -> next;
  }

  return iCnt;

}

int main()
{
  int iret = 0;
  PNODE First = NULL;
  InsertFirst(&First, 101);
  InsertFirst(&First, 51);
  InsertFirst(&First, 21);
  InsertFirst(&First, 11);

  Display(First); //Display(100)
 
 iret = Count(First);
 printf("Number of Nodes are : %d\n",iret);

    return 0;
}