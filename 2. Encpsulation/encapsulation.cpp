#include<bits/stdc++.h>
using namespace std;

//Wrapping up of data members and member functions into single unit it is called as a encapsulation!!
class Base {
    private:
        int x;

    public:
        void set(int y) {
            x = y;
        }

        int get() {return x;}
};


int main() {
    Base b1;

    b1.set(10);

    cout<<b1.get()<< endl;



    return 0;
}