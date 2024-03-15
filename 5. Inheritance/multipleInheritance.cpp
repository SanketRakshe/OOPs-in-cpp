#include<bits/stdc++.h>
using namespace std;

class A {
    protected:
       int a;
       int b;

    public:
        void getDataAB() {
            cout<<"Enter value of a: "<<endl;
            cin>>a;

            cout<<"Enter value of b: "<<endl;
            cin>>b;
        }

        void displayAB() {
            cout<<"Value of a: "<< a <<endl;
            cout<<"Value of b: "<< b <<endl;
        }
};

class B {
    protected:
        int c;

    public:
        void getDataC() {
            cout<<"Enter the value of c: "<<endl;
            cin>>c;
        }

        void displayC() {
            cout<<"Value of c: "<< c <<endl;
        }
};

class Calculate: public A, public B {
    protected:
        int p;

    public:
        void Product() {
            p = a * b * c;
            cout<<"Product: "<< p <<endl;
        }
};

int main() {

    Calculate a;
    
    a.getDataAB();
    a.getDataC();
    a.displayAB();
    a.displayC();
    a.Product();

    return 0;
}