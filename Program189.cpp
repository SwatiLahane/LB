
//Singly Circular Linked List using OOP
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    
    
}NODE, *PNODE;

class SinglyCL
{
    private:
        PNODE first;
        PNODE last;
        int Count;

    public:
        SinglyCL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no,int ipos);
        void DeleteAtPos(int ipos);
};

SinglyCL::SinglyCL()
{
     first= NULL;
     last = NULL;
     Count = 0;
}
void SinglyCL::InsertFirst(int no)
{
     PNODE newn = NULL;

    newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((first == NULL) && (last == NULL))  // LL is empty
    {
        first = newn;
        last = newn;       // #
         last->next = first;      // #
  
     }
    else    // LL contains atleast 1 node
    {
        newn->next = first;
        first= newn;
         last->next = first;      // #
    }
   
    Count++;
}
void SinglyCL::InsertLast(int no)
{
  
   PNODE newn = NULL;
   PNODE temp = first;

    newn = new NODE;
    newn->data = no;
    newn->next = NULL;

   if((first == NULL) && (last == NULL))  // LL is empty
    {
        first = newn;
        last = newn;
        last->next = first;
     }
    else    // LL contains atleast 1 node
    {
        last->next = newn;
        last = newn;
        last->next = first;
    }
    Count++;
}

void SinglyCL::Display()
{ 
    PNODE temp = first;
  cout<<"Elements in Linked List are:\n";
 {
  if((first != NULL) && (last != NULL))
  {

    do
     {
          cout<<"| "<<first->data<<" | ->";
          first = first ->next;
     
     }while(first != last->next);
     
     cout<<"Address of First Node \n";
  }

}
}

int SinglyCL::CountNode()
{
    return Count;
}



void SinglyCL::DeleteFirst()
{

     if((first ==NULL) && (last == NULL)) //case 1
  {
      return ;
  }
  else if(first == last)  //Case 2
  {
      delete first;
      first = NULL;
      last = NULL;
  }
  else //case 3
  {
      PNODE temp = first;
    first = first->next;
   delete(last->next); 
   last->next = first;
 
  }
  Count--;
}



void SinglyCL::DeleteLast()
{
     if((first ==NULL) && (last == NULL)) //case 1
  {
      return ;
  }
  else if(first == last)  //Case 2
  {
      delete first;
      first = NULL;
      last = NULL;
  }
  else //case 3
  {  

      PNODE temp = first;

      while(temp->next != last)
      { 
          temp = temp->next;
      }
     
     delete(last); 
     last = temp;
     last->next =first;
 
  } 
  Count--;
}


void SinglyCL::InsertAtPos(int no,int ipos)
{
     if((ipos < 1) || (ipos > (Count +1)))
     {   
         cout<<"INvalid Position";

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
        PNODE newn = new NODE;
        PNODE temp = first;
       
        newn->data = no;
        newn->next = NULL;
        
       
        int i=0;
        for(i=1; i<ipos-1; i++)
        {
            temp=temp->next;
        }
          newn->next = temp->next;
         temp->next = newn;

         Count++;
    }


}
void SinglyCL::DeleteAtPos(int ipos)
{

  if((ipos < 1) || (ipos > Count))

     {   
         cout<<"INvalid Position";

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
        PNODE targatednode = NULL;  
        
        int i = 0;
        for(i=1; i < ipos - 1; i++)
        {
            temp = temp ->next;
        }
          
        targatednode = temp->next;
        temp->next = temp->next->next; //taragednode->next
        delete targatednode;
        
        Count--;
        
    }
}

int main()
{
     SinglyCL obj;
     int iRet=0;
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    //obj.Display();
    
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);
   
    
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the Linked list are :"<<iRet<<"\n";

    obj.InsertAtPos(105,5);
    obj.Display();
    
    iRet = obj.CountNode();
    cout<<"Number of elements in the Linked list are :"<<iRet<<"\n";
    
    obj.DeleteAtPos(5);
    obj.Display();
    
    iRet = obj.CountNode();
    cout<<"Number of elements in the Linked list are :"<<iRet<<"\n";

     
      obj.DeleteFirst();
      obj.DeleteLast();
      obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the Linked list are :"<<iRet<<"\n";
    

    return 0;
}