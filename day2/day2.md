### constructors are called when an object is created
when are copy constructors called?
- when an object is passed and returned by value
- when an object is constructed based on another object of the same class
- when compiler generates a temporary object

### what is a virtual function?
- a virtual function is a member function which is declared within a base class and is re-defined(overriden) by a derived class
- when you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the function
example of virtual function:
```c++
class Base {
public:
    virtual void show() { cout<<" In Base \n"; }
};

class Derived: public Base {
public:
    void show() { cout<<"In Derived \n"; }
};

int main(void) {
    Base *bp = new Derived;
    bp->show(); 
    return 0;
}
```
- virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call

how do differentiate between initialization and assignment in C++ using a keyword?
- initialization is done using the keyword `explicit`
- assignment is done using the keyword `implicit`
- initialization is the process of giving a variable an initial value
- assignment is the process of giving a variable a value after initialization
- we can use const to make sure that the value of a variable cannot be changed after initialization.
- if the code compiles after prepending `const` to the variable declaration after changing its value, then it is an initialization. If it does not compile, then it is an assignment.

### when is the copy constructor called?


