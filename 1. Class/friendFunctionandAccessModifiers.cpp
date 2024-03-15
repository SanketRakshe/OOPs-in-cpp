#include<bits/stdc++.h>
using namespace std;

//Global Function as a friend function
class Base {
    private:
        int private_var;
    
    protected:
        int protected_var;

    public:
        Base() {
            private_var = 10;
            protected_var = 20;
        }

        friend void friendFunction(Base& obj);
};

void friendFunction(Base& obj) { 
    cout<<"Private Var: " << obj.private_var <<endl;
    cout<<"Protected Var: "<< obj.protected_var <<endl;
}



int main() {

    Base object;
    friendFunction(object);

    return 0;
}