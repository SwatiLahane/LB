
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

}
void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    
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
    
    return 0;
}