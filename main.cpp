#include<iostream>
#include"linklist.h"
using namespace std;
int main()
{
  linklist a;
  linklist *start=NULL;
  cout<<"List : "<<endl;
  a.insert(1,&start);
  a.insert(3,&start);
  a.insert(4,&start);
  a.insert(5,&start);
  a.insert(0,&start);
  a.print(&start); 
  linklist *temp1= a.seacrh(0,start);
  linklist *temp2=a.seacrh(4,start);
  cout<<"Swap"<<endl;
  a.swap(temp1,temp2,&start);
  a.print(&start);
  cout<<"Find min : ";
  cout<<a.minval(start)->value<<endl;
  system("pause");
}