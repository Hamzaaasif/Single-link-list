#include<iostream>
using namespace std;
class linklist
{
  public:
  linklist *start=NULL;
  void insert(int val)
  {
    linklist *ptr=(linklist *)malloc(sizeof (linklist *));
    ptr->value=val;
    ptr->next=NULL;
    if(start == NULL)
    {
      start=ptr;
    }
    else
    {
        linklist *curr=start;
        while(curr->next!=NULL)
        {
          curr=curr->next;
        }
        curr->next=ptr;
    }
  }

  void seacrh(int val)
  {
    linklist *curr=start;
    int temp=0;
    if(start->value==val)
    {
      cout<<"Found"<<endl;
      temp++;
    }
    else
    {
      while(curr->next!=NULL)
      {
        curr=curr->next;
        if(curr->value==val)
        {
          cout<<"Found"<<endl;
          temp++;
          break;
        }
      }
    }
    if(temp==0)
    {
      cout<<"Not Found"<<endl;
    }
  }

  void del(int val)
  {
    linklist *curr=start;
    if(start->value==val)
    {
      start=start->next;
      curr=NULL;
       free(curr);
    }
    else
    {
      int temp=0;
      curr=curr->next;
      linklist *prev=start;
      while(curr->value!= val)
      {
       curr=curr->next;
       prev=prev->next;
       if(curr==NULL)
       {
         temp++;
         break;
       }
      }
       if(temp==0)
       {
         prev->next=curr->next;
         curr=NULL;
         free(curr);
       }
       else
       {
         cout<<"Not found"<<endl;
       }   
    }
  }

  void print()
  {
    if(start==NULL)
    {
      cout<<"List is empty"<<endl;
    }
    else
    {
      linklist *curr=start;
      while(curr->next!=NULL)
      {
        cout<<curr->value<<endl;
        curr=curr->next;
      }
      cout<<curr->value<<endl;
    }
  }

  private:
  int value;
  linklist *next;
};