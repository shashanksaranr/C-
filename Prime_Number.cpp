using namespace std;
#include<iostream>
int main()  
{  
  int n,i,m=0,t=0;  
  cout<<"\nEnter the Number to check Prime:\n";  
  cin>>n;  
  m=n/2;  
  
  
  for(i=2;i<=m;i++)  
  {  
      if(n%i==0)  
      {  
          cout<<"\nNumber is not Prime."<<endl;  
          t=1;  
          break;  
      }  
  }  
  if(t==0)  
      cout<<"\nNumber is Prime."<<endl;  
  return 0;  
}  
