#include<bits/stdc++.h>
using namespace std;

class A {
    protected:
        int a;

    public:
        void setA() {
            cout<<"Enter value of a: "<<endl;
            cin>>a;
        }

        void displayA() {
            cout<<"A: "<< a << endl;
        }
};

class B: public A {
    int b, p;

    public:
        void setB() {
            setA();

            cout<<"Enter value of b: "<<endl;
            cin>>b;
        }

        void displayB() {
            displayA();

            cout<<"B: "<< b << endl;
        }

        void calculate() {
            p = a * b;
            cout<<"Product are: "<< p <<endl; 
        }
};

int main() {

    B obj;

    obj.setB();
    obj.calculate();

    return 0;
}