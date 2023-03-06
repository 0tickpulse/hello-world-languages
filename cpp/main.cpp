#include <stdio.h>

#include <iostream>

using namespace std;

/*
C++ adds object-oriented programming features to C.
The following is a simple C++ class.
 */
class hello {
    // private means that only the class can access this variable
    // e.g.
    // hello h = hello("World");
    // h.name; // ERROR - name is private so it cannot be accessed
    private:
    string name;

    // public means that anyone can access this variable
    // e.g.
    // hello h = hello("World");
    // h.print(); // print is public so it can be accessed
    public:
    hello(string name) {
        this->name = name;
    };
    /* Prints to console */
    void print() {
        cout << "Hello, " + name + "!" << endl;
    }
};

int main() {
    hello h = hello("World");
    h.print();
    return 0;
}
