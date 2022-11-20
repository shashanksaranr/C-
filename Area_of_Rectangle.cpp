#include <iostream>
using namespace std;
class box
{
    public:
    double length,breadth;
    
        void area()
        {
         cout<<length*breadth;
        }
};

int main()
{
    box b1,b2;
    b1.length=10;
    b2.breadth=20;
    cout<<"Area of b1: "<<b1.length<<endl;
    cout<<"Area of b2: "<<b2.breadth<<endl;
}