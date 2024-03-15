#include <bits/stdc++.h>
using namespace std;

class Vehicle {
public:
	Vehicle() {
         cout << "This is a Vehicle\n"; 
    }
};

class Car : public Vehicle {
    public:
        Car() {
            cout << "This is a Car class\n";
        } 
};

class Bus : public Vehicle {
    public:
        Bus() {
            cout<< "This is a bus class"<<endl;
        }
};


int main()
{
	Car obj1;
	Bus obj2;
	return 0;
}
