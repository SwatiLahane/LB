    #include<stdio.h>
    #include<stdlib.h> //for malloc free

    //doubly lenear LL
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
        PNODE newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;  //#

        if(*Head == NULL) //LL is empty
        {
            *Head = newn;
        }

        else  //ll contain at least one node
        { 
          newn->next =*Head;
          (*Head)-> prev = newn;  //#
          *Head = newn;
        }

    }

    void InsertLast(PPNODE Head, int No)
    {  
        PNODE temp =*Head;
        PNODE newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;  //#

        if(*Head == NULL) //LL is empty
        {
            *Head = newn;
        }

        else  //ll contain at least one node
        { 
            //type 2
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            } 
            temp->next = newn;
            newn->prev = temp;  //#
        }

    }


    void DeleteFirst(PPNODE Head)
    {

      if(*Head == NULL)
      {
          return ;
      }
      else if((*Head)->next == NULL  && ((*Head)-> prev == NULL )) //single node
                                                                  //#
      {
            free(*Head);
            *Head = NULL;
      }
      else
      {
          *Head = (*Head) -> next;
          free((*Head)->prev);
          (*Head)->prev = NULL;

      }

    }


    void DeleteLast(PPNODE Head)
    {
      PNODE temp = *Head;

      if(*Head == NULL)
      {
          return ;
      }
      //else if madhe fakt  *Head ->next == NULL lihil tari chalat
      else if(((*Head)->next == NULL)  && ((*Head)-> prev == NULL )) //single node
                                                                  //#
      {
            free(*Head);
            *Head = NULL;
      }
      else
      {
          while(temp->next->next != NULL)
          {
              temp = temp -> next;
          }
          free(temp-> next);
          temp->next =NULL;
      }
    }

    void Display(PNODE Head) //100 value yenar ahe
    {
      printf("Contents of LinkedLIst are : \n");
      {   
          printf("NULL <=>");
          while(Head != NULL )
          {
              printf("| %d | <==>",Head->data);
              Head = Head -> next;
          }
          printf("NULL\n");
      }

    }

    int Count(PNODE Head)
    {  
        int iCnt = 0;
        { 
          
          while(Head != NULL )
          {
              iCnt++;
              Head = Head -> next;
          }
        }

          return iCnt;
      }


    void InsertAtPos(PPNODE Head, int No ,int iPos)
    {
      int size = 0, i = 0;
      
      size = Count(*Head);
      PNODE newn = NULL;
      PNODE temp =*Head;

      if((iPos < 1) || (iPos > (size+1)))

      {
          printf("Invalid Position\n");
          return;
      }

      if(iPos == 1)
      {
        InsertFirst(Head, No);
      }
      else if(iPos == size+1)
      {

        InsertLast(Head, No);

      }
      else

      {

      newn= (PNODE)malloc(sizeof(NODE)); //dynamic Memory allocation 

      newn->data = No;
      newn->next = NULL;
      newn->prev = NULL;
      
      for(i = 1; i< iPos-1; i++)
      
      {
          temp = temp->next;
      }

      newn->next = temp -> next;
      temp->next->prev = newn;
      temp->next = newn;
      newn->prev = temp;
      }

    }

    void DeleteAtPos(PPNODE Head, int iPos)
    {  

      
        int size = 0,i=0;
        size = Count(*Head);
        PNODE temp = *Head;

      if((iPos < 1) || (iPos > (size)))

      {
          printf("Invalid Position\n");
          return;
      }

      if(iPos == 1)
      {
        DeleteFirst(Head);
      }
      else if(iPos == size)
      {
          
        DeleteLast(Head);

      }
      else
      { 
          for(i = 1; i< iPos-1 ; i++)
          {
              temp = temp->next;
          }
          temp->next =temp ->next->next;
          free(temp->next->prev);  //#
          temp->next->prev =temp; //#

      }

    }

    int main()
    {
        PNODE First = NULL;
        int iRet = 0;

        InsertFirst(&First, 51); //(70,51)
        InsertFirst(&First, 21);
        InsertFirst(&First, 11);
        
      
        Display(First);
        iRet = Count(First);
        printf("Number of elements are : %d\n",iRet);

      InsertLast(&First, 101);
      InsertLast(&First, 111);
      InsertLast(&First, 121);
      
        Display(First); //100
      iRet = Count(First); //100
      printf("Number of elements are : %d\n",iRet);

        InsertAtPos(&First, 105, 5);
        Display(First);
        iRet = Count(First);
        printf("Number of elements are : %d\n",iRet);

      
        DeleteAtPos(&First,5); //(70, 5)
        Display(First);  //100
        iRet = Count(First);
      
      printf("Number of elements are : %d\n",iRet);


        DeleteFirst(&First);
        Display(First);
        iRet = Count(First);
      
      printf("Number of elements are : %d\n",iRet);


      DeleteLast(&First);
        Display(First);
        iRet = Count(First);
      
      printf("Number of elements are : %d\n",iRet);
      
      

        return 0;

        
    }