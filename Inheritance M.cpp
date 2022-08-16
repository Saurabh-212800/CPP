#include<bits/stdc++.h>
using namespace std;

// Multiple Inheritance

class E{
public:
    void Efunc()
    {
        cout<<"Here I am =";
    }
};
class A{
public:
    void Afunc()
    {
        cout<<"I am Saurabh ";
    }
};

class B{
public:
    void Bfunc()
    {
        cout<<"Chavan\n";
    }
};

class C{
public: 
    void Cfunc()
    {
        cout<<"I am Back";
    }
};

class D : public A , public B , public C, public E {
public:
};

int main()
{
    D d;
    d.Efunc();
    d.Afunc();
    d.Bfunc();
    d.Cfunc();
    
}
