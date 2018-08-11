#include<iostream>
#include"linklist.h"
using namespace std;
int main()
{
  linklist a;
  cout<<"List : "<<endl;
  a.insert(2);
  a.insert(3);
  a.insert(4);
  a.insert(5);
  a.insert(6);
  a.print(); 
  a.seacrh(22);
  a.seacrh(3);
  a.del(2);
  a.print();
  a.del(62);
  system("pause");
}