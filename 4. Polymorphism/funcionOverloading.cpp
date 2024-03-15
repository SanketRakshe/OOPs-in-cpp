#include<bits/stdc++.h>
using namespace std;

//Same Function Names but compilor will match and decide which function are going to be called
class base{
    public:
        void func(int x) {
            cout<<"Value of x (int) are: "<<x<<endl;
        }

        void func(double x) {
            cout<<"Value of x (double) are: "<<x<<endl;
        }

        void func(int x, int y) {
            cout<<"Value of x (int) and y(int) are: "<<x <<"&" << y <<" are"<<endl;
        }
};

int main() {
    base b;

    b.func(10);
    b.func(10.0);
    b.func(10, 20);

    return 0;
}