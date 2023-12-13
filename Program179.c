
//Data structure using Stack
//Stack implement in singly linear linked list here we need only two operations  Insert and delete
//to insert node we use Push Operation and to delete The node we Use POP operation
//and Stack is LIFO (Last in First out)
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

//void InsertFirst(PPNODE Head)
void Push(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->data =No;
    newn->next =NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next =*Head;
        *Head = newn;
    }
} 

//void DeleteFirst(PPNODE Head)
int Pop(PPNODE Head)
{
     int value = 0;
     PNODE temp = *Head;

     if(*Head == NULL)
     {
         printf("STACK IS EMPTY..");
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
    Push(&First,101);
    Push(&First,51);
    Push(&First,21);
    Push(&First,11);
    Display(First);

    iRet = Pop(&First);
    printf("Poped elemenet is : %d\n",iRet);

    iRet = Pop(&First);
    printf("Poped elemenet is : %d\n",iRet);

    iRet = Pop(&First);
    printf("Poped elemenet is : %d\n",iRet);
    
    iRet = Pop(&First);
    printf("Poped elemenet is : %d\n",iRet);

   iRet = Pop(&First);
    printf("Poped elemenet is : %d\n",iRet);


    return 0;
}