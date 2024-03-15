/*
There are three types of constructors 1) Default 2)Parameterized 3)Copy
*/

#include<bits/stdc++.h>
using namespace std;

class constructor {
    public:
        constructor() {
            cout<<"Default constructor called!"<<endl;
        }

        constructor(int x) {
            cout<<"Parameterized constructor called!"<<endl;
            cout<<"Value of x are: "<< x <<endl;
        }
};

int main() {

    constructor obj1;

    constructor obj2(10);

    return 0;
}