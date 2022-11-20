
#include <iostream>
using namespace std;
class ex
{
    private:
    int a,b;
    public:
    void sum(int var1,int var2);
};

void (ex::sum(int var1,int var2))
{
    a=var1;
    b=var2;
    cout<<"\nSum of two numbers\n"<<a<<endl;
    cout<<"\nSum of two numbers\n"<<b<<endl;
}

int main()
{
    ex obj;
    obj.sum(10,20);
    return 0;
}