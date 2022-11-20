using namespace std;
#include<iostream>

int main ()
{
   int a=10;
   int b=20;
   cout<<"\nBefore swap the value of a is"<<a;
   cout<<"\nBefore swap the value of b is"<<b;
   swap(a,b);
   cout<<"\nAfter swap the value of a is"<<a;
   cout<<"\nAfter swap the value of b is"<<b;
 }
 
void swap(int a,int b) 
{
   int t;
   t=a; 
   a=b;    
   b=t; 
}