
// Doubly Linear


#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE;

class DoublyLL
{
    private:
        PNODE first;
        int Count;

    public:
          DoublyLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no,int ipos);
        void DeleteAtPos(int ipos);
};

DoublyLL::DoublyLL()
{
    first = NULL;
    Count = 0;
}

void DoublyLL::InsertFirst(int no)
{
       PNODE newn = NULL;
        newn = new NODE;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;  //#

        if(first == NULL) //LL is empty
        {
            first = newn;
        }

        else  //ll contain at least one node
        { 
          newn->next =first;
          first-> prev = newn;  //#
          first = newn;
        }
       Count++;
    }


void DoublyLL::InsertLast(int no)
{
        PNODE temp =first;
        PNODE newn = NULL;
        newn = new NODE;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;  //#

        if(first == NULL) //LL is empty
        {
            first = newn;
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
       Count++;
}
void DoublyLL::Display()
{    
    PNODE temp = first;
     cout<<"Contents of LinkedLIst are : \n";
      {   
          cout<<"NULL <=>";
          while(temp != NULL )
          {
              cout<<"| "<<temp->data<<" | <=> ";
              temp = temp ->next;
          }
          cout<<"NULL\n";
      }

}

int DoublyLL::CountNode()  //
{
    return Count;
}
void DoublyLL::DeleteFirst()
{
   if(first == NULL)
      {
          return ;
      }
      else if((first)->next == NULL  && ((first)-> prev == NULL )) //single node
                                                                  //#
      {
            delete first;
            first = NULL;

      }
      else
      {
          PNODE temp = first;
          first = first->next;
          delete first->prev;
          first->prev = NULL;
      }
       Count--;
}
void DoublyLL::DeleteLast()
{
     PNODE temp = first;

      if(first == NULL)
      {
          return ;
      }
      //else if madhe fakt  *Head ->next == NULL lihil tari chalat
      else if(((first)->next == NULL)  && ((first)-> prev == NULL )) //single node
                                                                  //#
      {
            free(first);
            first = NULL;
      }
      else
      {
          while(temp->next->next != NULL)
          {
              temp = temp -> next;
          }
          delete temp-> next;
          temp->next =NULL;
      }
      Count--;
}

void DoublyLL::InsertAtPos(int no,int ipos)
{

            
      if((ipos < 1) || (ipos > Count+1))

      {
          cout<<"Invalid Position\n";
          return;
      }

      if(ipos == 1)
      {
        InsertFirst(no);
      }
      else if(ipos == Count+1)
      {

        InsertLast(no);

      }
      else

      {

     PNODE newn= new NODE; //dynamic Memory allocation 

      newn->data = no;
      newn->next = NULL;
      newn->prev = NULL;
       
       PNODE temp = first;
       int i =0;
      for(i = 1; i< ipos-1; i++)
      
      {
          temp = temp->next;
      }

      newn->next = temp -> next;
      temp->next->prev = newn;
      temp->next = newn;
      newn->prev = temp;

      Count++;

      }
}
void DoublyLL::DeleteAtPos(int ipos)

{
    if((ipos < 1) || (ipos > (Count)))

      {
          printf("Invalid Position\n");
          return;
      }

      if(ipos == 1)
      {
        DeleteFirst();
      }
      else if(ipos == Count)
      {
          
        DeleteLast();

      }
      else
      {   
          PNODE temp = first;
         
          int i = 0;

          for(i = 1; i < ipos-1 ; i++)
          {
              temp = temp->next;
          }

          temp->next =temp ->next->next;
          delete temp->next->prev;  //#
          temp->next->prev = temp; //#

          Count--;
      }
}

int main()
{
     int iRet = 0;
    DoublyLL obj;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
     iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iRet<<"\n";
    
    obj.InsertAtPos(105, 5);

    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iRet<<"\n";

    
    obj.DeleteAtPos(5);

    obj.Display();

    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iRet<<"\n";


    obj.DeleteFirst();  //delete first 
    obj.Display();

    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iRet<<"\n";

    
    obj.DeleteLast(); //delete last

    obj.Display();

    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iRet<<"\n";
    return 0;
}