# C++ running notes
# ~DAY 1
## integer is the only data type which is platform dependent 
## integer array passed as an argument in c returns size of a pointer ~ 4 bytes
## begin and end two keywords provided by c++ to help us overcome this problem
## auto is the default storage class for variables declared inside a function or a block. Auto are variables used from the stack and are temporary variables which come in when required; <br/>
## what does volatile keyword mean? - an interrupt service routine could change the contents of the address the pointer is pointing to {
    int i , *ptr;
    ptr = &
    volatile int iv;
    iv = *ptr;
}
## 3 arguments can be passed to main (int argc,char **argv,char **envp) - environment variables 
extern char **environ
<br/>

## variable number of args
int func(int , ...)
<br/>

# Features of c++
- Smart pointers wrapper class over a pointer with an operator like * and -> overloaded.
- Multithreading
- std::array container additional functions called begin and end. vector type of variable size.
- move semantics resources get moved over pointers, they dont get copied.
- decltype

## one object takes a stream of inputs to it 
cout <<"hi"<<4<<times<<endl;
can chain multiple outputs as individual objects.

## using namespaces (*)
what are namespaces? - a namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.
using namespace std;
<br/>

## you can limit the scope of a function to a particular program by declaring it as static

Features of OOPs:  
- Class
- Objects
- Encapsulation
- Polymorphism
- Inheritance ( "is a" relationship)
- Abstraction
- Composition ("has a" relationship)

cin.ignore(1000,'\n') - ignores 1000 characters or if a '\n' occurs. used to clear buffers in a way.

## Classes 
- A class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object.
- A class is a user defined data-type which has data members and member functions.
- Data members are the data variables and member functions are the functions used to manipulate these variables and together these data members and member functions defines the properties and behavior of the objects in a Class.
- Class is a logical entity.
- Access specifiers are used to control the access of these members. they are public, private and protected. 
- By default all members of a class are private.
- cant create an object and access the memebres of a class if they are protected.
- A class is a blueprint for the object.

## Objects
- An object is an instance of a class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
- An object is a real world entity that has state and behavior.

## Namespaces
- A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.
- The using keyword is used to introduce a name from a namespace into the current declarative region (such as a block), allowing it to be used without namespace qualification.

### how to define namespaces - 
namespace name{
    method(void add();)
    classes {classstudent{};}
}

### global namespace
- The global namespace is the namespace which is defined outside of any namespace.
- The global namespace is also called as the unnamed namespace.
- The global namespace is accessed using the scope resolution operator :: (also called as unary scope operator).
- The global namespace is used to define global variables and global functions which are accessible throughout the program.

how to acess global namespace -
::variable_name
::function_name()

### namespace pollution
- Namespace pollution is a situation when a namespace contains too many objects, which may cause conflicts with other namespaces or user code.
- Leaving variables/symbols in a namespace where they shouldn't really be.

### declaring methods outside the namespace
- namespace name{
    method(void add();)
    classes {classstudent{};}
}
void name::add(){
    //code
}

### discontiguous namespace
- A namespace can be defined in multiple parts and in multiple files. This is called discontiguous namespace.
- The discontiguous namespace is used to define a namespace in multiple parts and in multiple files.

### nested namespace
- A namespace can be defined inside another namespace. This is called nested namespace.
- The nested namespace is used to define a namespace inside another namespace.
 
namespace outer_ns{
    int x;
    namespace inner_ns{
        int y;
    }
}

### namespace alias
- A namespace alias is a name that refers to a namespace.
- The namespace alias is used to create an alias name for a namespace.
- The namespace alias is created using the keyword namespace followed by the alias name and the namespace name to which it refers.

namespace alias_name = namespace_name;

### constants
- Constants are like normal variables except that once they are defined they cannot be changed.
- Constants refer to fixed values that the program may not alter during its execution.
const int a = 10;
#DEFINE a 10

literals - values that are assigned to constants are called literals.

### printing numbers in octal, hexadecimal and decimal
- cout << oct << a << endl;
- cout << hex << uppercase << a << endl;
- cout << hex << a << endl;
- cout << dec << a << endl;

### what is wide character type in c++?
- The wide character type wchar_t is a typedef of an integral type whose size is large enough to represent any character in the current locale.
- The wchar_t type is used to represent wide characters in C++.
example : wchar_t a = L'A';

### what is lvalue and rvalue?
- An lvalue refers to an object that persists beyond a single expression. You can think of an lvalue as an object that has a name.
- An rvalue is a temporary value that does not persist beyond the expression that uses it. You can think of an rvalue as a value that is not associated with a particular memory location in your program.
- An lvalue is an expression to which a value can be assigned. The lvalue expression is located on the left side of an assignment statement, whereas an rvalue is located on the right side of an assignment statement. For example:
int x = 5;
Here, x is an lvalue, and we assign it the value of 5. Therefore, we can say that 5 is an rvalue.
- An lvalue may appear as either the left-hand or right-hand side of an assignment.
- An rvalue may appear on the right- but not left-hand side of an assignment.
- An lvalue often corresponds to a memory location where a value can be stored.
- An rvalue is often a literal value (like 1, 2, 3, etc.) or a temporary value (result of a computation).
- An lvalue can be used to initialize an rvalue and vice-versa.

example where lvalue can be on the right side of an assignment -
int x = 5;
int y = x;

-if you can take the address of the expression using the & operator, that expression is an lvalue.

### instance variables and static variables
- variables of an object of a class are called instance variables.
- variables of a class are called static variables.

### static variables
- static variables are variables that are shared by all objects of a class.
### what is a constructor?
- A constructor is a special type of member function that is called automatically when an object of that class is created.
- It is used to initialize the data members of new object generally.
- It is declared within the class definition.
example : class_name(){};
- It is automatically called when an object is created.
- It cannot return a value and do not have return type and can have default arguments.

-> can you have a private static variable?why ?
- Yes, we can have a private static variable. Static variables are shared by all objects of a class. Private static variables are used to store class specific information. They are accessible only within the class.

- make is a utility which allows you to combine various files when their dependencies are required in combination.
- makefile is a file which contains a set of directives/rules which are used by make utility to build the project.
