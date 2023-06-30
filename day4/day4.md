### what is a move constructor and copy constructor
- a copy constructor is a member function which initializes an object using another object of the same class
- a move constructor is a member function which moves an object rather than copying it
- a move constructor is used to initialize an object with the contents of another object
- the object whose resources are stolen is left in a valid but unspecified state
- the only difference between a copy constructor and a move constructor is that the move constructor takes a non-const rvalue reference as its argument
- the move constructor is called when an object is initialized using rvalue reference
examlpe of move constructor:
```c++
#include <iostream>
#include <string>
using namespace std;

class String {
    char *s;
    int size;
public:
    String(char *); // constructor
    ~String() { delete [] s; } // destructor
    String(const String&); // copy constructor
    String(String&&); // move constructor
    void print() { cout << s << endl; } // Function to print string
    void change(char *); // Function to change
};

String::String(char *str) {
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}

void String::change(char *str) {
    delete [] s;
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}

String::String(const String& old_str) {
    size = old_str.size;
    s = new char[size+1];
    strcpy(s, old_str.s);
}

String::String(String&& old_str) {
    size = old_str.size;
    s = old_str.s;
    old_str.s = nullptr;
}

int main() {
    String str1("GeeksQuiz");
    String str2 = str1; // copy constructor called
    str1.print(); // what is printed ?
    str2.print();
    str2.change("GeeksforGeeks");
    str1.print(); // what is printed now ?
    str2.print();
    return 0;
}
```
- output:
```
GeeksQuiz
GeeksQuiz
GeeksQuiz
GeeksforGeeks
```
- in the above example, the copy constructor is called when str2 is initialized with str1, and the move constructor is called when str2 is initialized with the rvalue returned by change()

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

### what is the move assignment operator?
- the move assignment operator is a special type of assignment operator which takes a rvalue reference to an object as its argument
- the move assignment operator is called when an object appears on the left side of the assignment operator and its rvalue reference is passed as an argument
example of move assignment operator:
```c++
#include <iostream>
#include <string>
using namespace std;

class String {
    char *s;
    int size;
public:
    String(char *); // constructor
    ~String() { delete [] s; } // destructor
    String(const String&); // copy constructor
    String(String&&); // move constructor
    String& operator = (const String&); // copy assignment operator
    String& operator = (String&&); // move assignment operator
    void print() { cout << s << endl; } // Function to print string
    void change(char *); // Function to change
};

String::String(char *str) {
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}

void String::change(char *str) {
    delete [] s;
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}

String::String(const String& old_str) {
    size = old_str.size;
    s = new char[size+1];
    strcpy(s, old_str.s);
}

String::String(String&& old_str) {
    size = old_str.size;
    s = old_str.s;
    old_str.s = nullptr;
}

String& String::operator = (const String& old_str) {
    if(this != &old_str) {
        delete [] s;
        size = old_str.size;
        s = new char[size+1];
        strcpy(s, old_str.s);
    }
    return *this;
}

String& String::operator = (String&& old_str) {
    if(this != &old_str) {
        delete [] s;
        size = old_str.size;
        s = old_str.s;
        old_str.s = nullptr;
    }
    return *this;
}

int main() {
    String str1("GeeksQuiz");
    String str2 = str1; // copy constructor called
    str1.print(); // what is printed ?
    str2.print();
    str2 = str1; // copy assignment operator called
    str1.print(); // what is printed now ?
    str2.print();
    str2.change("GeeksforGeeks");
    str1.print(); // what is printed now ?
    str2.print();
    str2 = move(str1); // move assignment operator called
    str1.print(); // what is printed now ?
    str2.print();
    return 0;
}
```
- output:
```
GeeksQuiz
GeeksQuiz
GeeksQuiz
GeeksQuiz
GeeksforGeeks
GeeksforGeeks
GeeksQuiz
GeeksforGeeks
```
- in the above example, the copy assignment operator is called when str2 is initialized with str1, and the move assignment operator is called when str2 is initialized with the rvalue returned by change()

## inheritance
- inheritance is the process by which objects of one class acquire the properties of objects of another class
- it supports the concept of hierarchical classification
- it is a mechanism for code reuse and to allow independent extensions of the original software via public classes and interfaces
- the existing class is called the base class, and the new class is referred to as the derived class

### types of inheritance
- single inheritance
- multiple inheritance
- multilevel inheritance
- hierarchical inheritance
- hybrid inheritance

### syntax for single inheritance
```c++
class derived-class: access-specifier base-class
```
- access-specifier is one of public, protected, or private, and base-class is the name of a previously defined class
- if the access-specifier is not used, then it is private by default
```class <derived_class_name> : <access_specifier> <base_class_name> {
    //body
}
```
*a derived class doesn't inherit access to private data members. however, it does inherit a full parent object, which contains any private members which that class declares.*
*class ABC:XYZ* private by default

### syntax for multiple inheritance
```c++
class derived-class: access-specifier base-class1, access-specifier base-class2, ....
```
- access-specifier is one of public, protected, or private, and base-class is the name of a previously defined class
- if the access-specifier is not used, then it is private by default
```class <derived_class_name> : <access_specifier> <base_class_name1>, <access_specifier> <base_class_name2> {
    //body
}
```
**when a base class is privately inherited by the derived class, public members of the base class become the private members of the derived class. protected members of the base class become the private members of the derived class.The public members of the base class can only be accessed by the member functions of the derived class.**

#### do constructors from the parent class get called when you create an object in a child class?

### how does the compiler perform runtime resolution?
- the compiler uses the vtable to resolve the function call at runtime
- the vtable is a table of function pointers
- the compiler adds a hidden vptr variable in all such classes which points to the vtable of that class
- if the function is not virtual, the compiler resolves the function call at compile time
- if the function is virtual, compiler replaces the function call with a pointer to the function in the vtable
- the binding of function call to the function body can be either early binding or late binding
- early binding happens when the function call is resolved at compile time
- late binding happens when the function call is resolved at runtime
- virtual functions are resolved late, so this is an example of late binding
- non-virtual functions are resolved early, so this is an example of early binding
diagrammatic representation of vtable:
![vtable](https://www.geeksforgeeks.org/wp-content/uploads/virtual-functions-in-c.png)

### what is a pure virtual function?
- a pure virtual function is a function that is declared as virtual in a base class and has no definition
- pure virtual functions are used to make a class abstract
- abstract classes cannot be instantiated
- abstract classes can only be used as base classes
- if a derived class does not override the pure virtual function, then the derived class also becomes abstract
- a pure virtual function is declared by assigning 0 in the declaration
```c++
virtual void show() = 0;
```
- a pure virtual function must be defined outside the class
- a pure virtual function cannot be static
- a pure virtual function cannot be a friend function of another class

### what is an abstract class?
- an abstract class is a class that is designed to be specifically used as a base class
- an abstract class contains at least one pure virtual function
- you declare a pure virtual function by using a pure specifier (= 0) in the declaration of a virtual member function in the class declaration
- they contain some functions whose body is not present in the class.
- an abstract class cannot be instantiated

### example of a pure virtual function
```c++
#include <iostream>
using namespace std;

class Base {
    public:
        virtual void show() = 0;
};

class Derived : public Base {
    public:
        void show() {
            cout << "Implementation of virtual function in Derived class" << endl;
        }
};

int main() {
    Base *bptr;
    // bptr = new Base(); // this will give an error
    bptr = new Derived();
    bptr->show();
    return 0;
}
```
- output:
```
Implementation of virtual function in Derived class
```

### what is a stub?
- a stub is a dummy piece of code
- it is used to stand in for some other programming functionality


