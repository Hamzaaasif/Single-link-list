#include<iostream>
using namespace std;
class linklist
{
  public:
  
  void insert(int val,linklist **start)
  {
    linklist *ptr=(linklist *)malloc(sizeof (linklist *));
    ptr->value=val;
    ptr->next=NULL;
    if(*start == NULL)
    {
      *start=ptr;
    }
    else
    {
        linklist *curr=*start;
        while(curr->next!=NULL)
        {
          curr=curr->next;
        }
        curr->next=ptr;
    }
  }

  linklist* seacrh(int val,linklist *start)
  {
    linklist *temp=NULL;
  if(start==NULL)
  {
  }
  else
 {
   int a=0;
  linklist *curr = start;
  while(curr->value!=val)
  {
    if(curr->next==NULL)
    {
      a++;
      break;
    }
    curr=curr->next;
  }
     if(curr->next!=NULL || a==0)
  {
    temp=curr;
  }
 }
 return temp;
  }

  linklist* retprev(linklist *temp,linklist *start)
  {
    int a=0;
     while(start->next!=temp)
    {
      start=start->next;
      if(start==NULL)
      {
        a++;
        break;
      }
    }
    if(a==0)
    {
    return start;
    }
    else
    {
      return NULL;
    } 
  }

  void del(int val,linklist **start)
  {
    linklist *curr=*start;
    if((*start)->value==val)
    {
      *start=(*start)->next;
      curr=NULL;
       free(curr);
    }
    else
    {
      int temp=0;
      curr=curr->next;
      linklist *prev=*start;
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

  void swap(linklist *p1,linklist *p2,linklist**start)
  {
    linklist *temp1=retprev(p1,*start);
    linklist *temp2=retprev(p2,*start);
    linklist *temp3=NULL;
    temp3=p1->next;
    p1->next=p2->next;
    p2->next=temp3;
    if(p1!=*start && p2!=*start)
    {
    temp3=temp1->next;
    temp1->next=temp2->next;
    temp2->next=temp3;
    }
    else
    {
      temp2->next=p1;
      *start=p2;
      temp1=NULL;
    }
  }

  linklist* minval(linklist *start)
  {
  }

  void print(linklist **start)
  {
    if(start==NULL)
    {
      cout<<"List is empty"<<endl;
    }
    else
    {
      linklist *curr=*start;
      while(curr->next!=NULL)
      {
        cout<<curr->value<<"   ";
        curr=curr->next;
      }
      cout<<curr->value<<endl;
    }
  }

  int value;
  linklist *next;
};