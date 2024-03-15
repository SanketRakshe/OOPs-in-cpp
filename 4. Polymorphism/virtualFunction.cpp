#include <bits/stdc++.h>
using namespace std;

class Talker {
public:
  // Declare makeSound virtual to enable polymorphism
  virtual void makeSound() {
    cout << "Generic talker sound" <<endl;
  }
};

class Dog : public Talker {
public:
  void makeSound() override {
    cout << "Woof!" <<endl;
  }
};

class Cat : public Talker {
public:
  void makeSound() override {
    cout << "Meow!" << std::endl;
  }
};

int main() {
  // Array of Talker pointers holding Dog and Cat objects
  Talker* talkers[] = {new Dog(), new Cat()};

  for (int i = 0; i < 2; ++i) {
    talkers[i]->makeSound();  // Virtual function dispatch at runtime
    delete talkers[i];
  }

  return 0;
}
