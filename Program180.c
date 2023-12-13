//
//Queue implement in singly linear linked list here we need only two operations  Insert and delete
//to insert node we use enqueue and to delete we use dequeue 
//Queue is FIFO(First in FIrst Out)


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


//void InsertLast(PPNODE Head, int no)
void Enqueue(PPNODE Head, int no)
{
   PNODE newn = NULL;
   newn = (PNODE)malloc(sizeof(NODE));
   PNODE temp =*Head;

   newn->data = no;
   newn->next = NULL;

   if(*Head == NULL)
   {
       *Head = newn;
   }
   
   else 
   {
     while(temp->next != NULL)
     {
        temp = temp -> next;  
     }
     temp->next = newn;
   }

}
//void DeleteFirst(PPNODE Head)
int Dequeue(PPNODE Head)
{
     int value = 0;
     PNODE temp = *Head;

     if(*Head == NULL)
     {
         printf("Queue IS EMPTY..");
     }
     else
     {
         value = (*Head)->data;
         *Head =(*Head)->next;
         free(temp);
     }
     return value;
}



void Display(PNODE Head)
{
  printf("Elements of linked list :");
  {
      while(Head != NULL)
      {
          printf("| %d |\n",Head->data);
          Head = Head ->next;
      }
      
  }

}

int main()
{
    PNODE First = NULL;
    int iRet =0;

    Enqueue(&First,11);
    Enqueue(&First,21);
     Enqueue(&First,51);
    Enqueue(&First,101);
    Enqueue(&First,111);

     Display(First);

     iRet = Dequeue(&First);
     printf("Removed Element from queue is : %d\n",iRet);

     iRet = Dequeue(&First);
     printf("Removed Element from queue is : %d\n",iRet);
  
    return 0;
}