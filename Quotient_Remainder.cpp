using namespace std;
#include<iostream>
int main()
{
    int a,b,c,d;
    char op;
    cout<<"Enter the number and expression to be carried out"<<endl;
    cin>>a;
    cin>>b;
    cin>>op;
    c=a/b;
    d=a%b;
    cout<<"The Quotient is"<<c;
    cout<<"The Remainder is"<<d;
}