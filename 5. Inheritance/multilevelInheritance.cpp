#include<bits/stdc++.h>
using namespace std;

class vehicle{
    public:
        vehicle() {
            cout<<"This is a vehicle classs"<<endl;
        }
};

class fourWheeler: public vehicle{ 
    public:
        fourWheeler() {
            cout<<"This is a four wheeler class extended from vehicle class"<<endl;
        }
};

class car: public fourWheeler {
    public:
        car() {
            cout<<"This is a car class extended from fourWheeler class"<<endl;
        }
};

int main() {

    car c1;
    
    return 0;
}