#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Hu Hu" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "bark" << endl;
    }

    void walk()
    {
        cout << "walking.." << endl;
    }
};
class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Mi Mu" << endl;
    }

    void walk()
    {
        cout << "walking.." << endl;
    }
};

int main()
{
    Animal *ani = new Dog();

    // ani->speak();
    // ani->walk(); //error

    Animal *p;
    vector<Animal *> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());

    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());

    for (auto val : animals)
    {
        val->speak();
    }

    return 0;
}
