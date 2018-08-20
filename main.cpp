#include<iostream>
#include"linklist.h"
using namespace std;
int main()
{
  linklist a;
  linklist *start=NULL;
  cout<<"List : "<<endl;
  a.insert(2,&start);
  a.insert(3,&start);
  a.insert(4,&start);
  a.insert(5,&start);
  a.insert(6,&start);
  a.print(&start); 
  linklist *temp1= a.seacrh(2,start);
  linklist *temp2=a.seacrh(5,start);
  cout<<"Swap"<<endl;
  a.swap(temp1,temp2,&start);
  a.print(&start);
  system("pause");
}