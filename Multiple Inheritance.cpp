#include<bits/stdc++.h>
using namespace std;

class A {
public:
    void Afunc() 
    {
        cout<<"Multiple Inheritance"<<endl;
    }

};

class B {
public :
    void Bfunc()
    {
        cout<<"Done";
    }
};

class C : public A , public B {
public:
};

int main() {
    C c;
    c.Afunc();

    c.Bfunc();
}
