#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Superhero : public Person {
private:
    string superpower;

public:
    Superhero(string n, int a, string s) : Person(n, a) {
        superpower = s;
    }
    void display() {
        displayPerson();
        cout << "Superpower: " << superpower << endl;
    }
};

int main() {
    Superhero hero("Superman", 35, "Super Strength");
    hero.display();
    return 0;
}
