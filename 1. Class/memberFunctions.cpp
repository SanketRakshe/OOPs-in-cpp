/*
It can be -
            1) Inside the class defination
            2) Outside the class defination 
*/

#include<bits/stdc++.h>
using namespace std;

class memberFunction {
    public:
        string name;

        void display() {
            cout<< name << endl;
        }
};

class memberFunctionOutside {
    public:
        int age;    

    void showAge();
};

void memberFunctionOutside::showAge() {
    cout<< age <<endl;
}

int main() {

    memberFunction obj1;
    obj1.name = "Sanket";
    obj1.display();

    memberFunctionOutside obj2;
    obj2.age = 21;
    obj2.showAge();


    return 0;
}