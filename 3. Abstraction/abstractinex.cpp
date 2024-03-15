#include<bits/stdc++.h>
using namespace std;

//Abstraction: Showing only essential details to the user and hiding unnecessary information..

class implementAbstraction {
    private:
        int a;
        int b;

    public:
        void set(int c, int d) {
            a = c;
            b = d;
        }

        void display() {
            cout<<"A: "<< a <<endl;
            cout<<"B: "<< b <<endl;
        }

};

int main() {

    implementAbstraction obj;

    obj.set(10, 20);
    obj.display();


    return 0;
}