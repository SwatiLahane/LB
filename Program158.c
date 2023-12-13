#include<stdio.h>
#include<stdlib.h> //for malloc free

//Doubly Linear List
//Structure Declaration
struct node
{
    int data ;
    struct node *next; 
    struct node *prev;   //#

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE Head , int No)
{
   

}

void InsertLast(PPNODE Head, int No)
{

}

void InsertAtPos(PPNODE Head, int No ,int iPos)
{

}
void DeleteFirst(PPNODE Head)
{

}
void DeleteLast(PPNODE Head)
{

}
void DeleteAtPos(PPNODE Head, int iPos)
{

}
void Display(PNODE Head)
{

}

int Count(PNODE Head)
{
    return 0;
}


int main()
{
    PNODE First = NULL;




    return 0;
}