#include<iostream>
using namespace std;

class Base {
    public:
        //Properties || Data Members
        int a;
        int b;

        //Behavior || Member Functions
        void Print() {
            cout<<"Value of a are: "<< a << endl;
            cout<<"Value of b are: "<< b << endl;
        }
};

int main() {
    //Creating object
    Base b;

    b.a = 10;
    b.b = 20;

    b.Print();

    return 0;
}