#include<iostream>
#include"linklist.h"
using namespace std;
int main()
{
  linklist a;
  linklist *start=NULL;
  cout<<"List : "<<endl;
  a.insert(78,&start);
  a.insert(2,&start);
  a.insert(4,&start);
  a.insert(0,&start);
  a.insert(4,&start);
  a.print(&start); 
  linklist *temp1= a.seacrh(1,start);
  linklist *temp2=a.seacrh(56,start);
  cout<<"Swap"<<endl;
  a.swap(temp1,temp2,&start);
  a.print(&start);
  cout<<"Min Value : ";
  cout<<a.minval(start)->value<<endl;
  cout<<"SORT "<<endl;
  a.sort(&start);
  a.print(&start);
  system("pause");
}