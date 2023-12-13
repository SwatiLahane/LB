
#include<stdio.h>//
#include<stdlib.h>//for malloc and calloc

struct node
{
    int data;
    struct node *next;
    struct node *prev; //#

};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail, int No)
{   
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
   
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((*Head ==NULL) && (*Tail == NULL)) //LL is empty
    {
        *Head = newn;
        *Tail = newn;
        
    }
    else
    { 
       newn->next =*Head;
       (*Head)->prev = newn;
       *Head = newn;

    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
   PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
   
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((*Head) ==NULL && (*Tail) == NULL) //LL is empty
    {
        *Head = newn;
        *Tail = newn;
        
    }
    else
    {   
        (*Head)->prev = (*Tail); 
         (*Tail)->next = newn;
         *Tail = newn;
        
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
} 



void DeleteFirst(PNODE Head,PNODE Tail)
{  
    //LL is empty
   if((*Head == NULL) && (*Tail == NULL))
   {
      return ;
   }

   else if((*Head) == (*Tail))  //LL contains one node
   {
       free(*Head);
       *Head = NULL;
       *Tail = NULL;
   }
   else     //LL conatin more than one node
   {

      (*Head) = (*Head) ->next;
      free((*Tail) -> next); //free ((*Head)->prev);
       
      (*Tail)->next = *Head;
      (*Head)->prev = *Tail;

   }
   
   

}


void DeleteLast(PNODE Head,PNODE Tail)
{
    //LL is empty
   if((*Head) == NULL && (*Tail) == NULL)
   {
      return ;
   }

   else1if((*Head == *Tail)  //LL contains one node
   {
       free(*Head);
       *Head = NULL;
       *Tail = NULL;
   }
   else     //LL conatin more than one node
   {
     
     *Tail = (*Tail)->prev;
     free((*Tail)->next); //free((*head))
      (*Tail)->next = *Head;
      (*Head)->prev = *Tail;

   }

}




void Display(PNODE Head, PNODE Tail)
{
   if(Head != NULL && Tail != NULL)
   {

    do
    {
          printf("| %d |<=>",Head ->data);
          Head = Head->next;
    
    }while(Head != Tail->next);
    
   
   }
}

int Count(PNODE Head, PNODE Tail)
{
    int icnt = 0;
if((Head != NULL) && (Tail != NULL))
   {

    do
    {
          icnt++;
          Head = Head->next;
    
    }while(Head != Tail->next);
   
   }
     return icnt;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
{   
    int i =0;
    int Size = 0;
    Size = Count(*head);
    PNODE temp = *Head;
    PNODE newn = NULL;

    if(ipos < 1) || (ipos > Size+1)
    {
        printf("Invalid Position");
        return; 
    }

    if(ipos == 1)
    {
      InsertFirst(Head,Tail,no);
    }
    else if(ipos == Size+1)
    {
     InsertLast(Head, Tail,no);
    }
    else
    {
       newn = (PNODE)malloc(sizeof(NODE));
       newn->data =no;
       newn->next =NULL;
       newn->prev = NULL;
    }
    for(i = 1; i < ipos -1; i++)
    {
        temp = temp-> next;
    }
    newn->next = temp->next;
    temp->next->prev = newn;
    temp->next = newn;
    newn->prev = temp;
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{
     int i =0;
    int Size = 0;
    Size = Count(*head);
    PNODE temp = *Head;

    if(ipos < 1) || (ipos > Size)
    {
        printf("Invalid Position");
        return; 
    }

    if(ipos == 1)
    {
      DeleteFirst(Head,Tail);
    }
    else if(ipos == Size)
    {
     DeleteLast(Head, Tail);
    }
    else
    {
       
    }
    for(i = 1; i < ipos -1; i++)
    {
        temp = temp-> next;
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFirst(&First, &Last, 51);
    InsertFirst(&First, &Last, 21);
    InsertFirst(&First, &Last, 11);
    
    InsertLast(&First, &Last, 101);
    InsertLast(&First, &Last, 111);
    InsertLast(&First, &Last, 121);

    Display(First,Last);
    iRet = Count(First, Last);
    printf("\nNode of Linked list are %d:\n",iRet);

    InsertAtPos(&First, &Last,105,5);
    Display(First,Last);
    iRet = Count(First, Last);
    printf("\nNode of Linked list are %d:\n",iRet);

    DeleteFirst(First,Last);
    Display(First,Last);
    iRet = Count(First, Last);
    printf("\nNode of Linked list are %d:\n",iRet);

     DeleteLast(First,Last);
   Display(First,Last);
    iRet = Count(First, Last);
    printf("\nNode of Linked list are %d:\n",iRet);
    
    return 0;
}