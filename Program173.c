
//doubly circular linked list

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
    
    if((*Head ==NULL) && (*Tail == NULL)) //LL is empty
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
    
}


void DeleteLast(PNODE Head,PNODE Tail)
{
    
}


void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int ipos)
{
    
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
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
    PNODE Last = NULL;
    
    InsertFirst(&First, &Last, 51);
    InsertFirst(&First, &Last, 21);
    InsertFirst(&First, &Last, 11);
    
    InsertLast(&First, &Last, 101);
    InsertLast(&First, &Last, 111);
    InsertLast(&First, &Last, 121);



    return 0;
}