#include<iostream>

using namespace std;

class A {
    public:
    void show(){
        cout<<"In base class. \n";
    }
};

class B : public A {
    public:
    void show(){
       cout << "In derived class. \n";
    }
};

int main()
{
   B bObj;
   A aObj;
   bObj.show();
   aObj.show();

    return 0;
}