#include<iostream>
class Parent
{
private:
    int one;
public:
    Parent():one(0){}
    Parent(const Parent &other):one(0){
        std::cout<<"Copy Parent"<<std::endl;
    }
    virtual void printMsg(){
        std::cout<<"Parent Function"<<std::endl;
    }
    virtual ~Parent(){}

    
};
class Child : public Parent
{
    public:
    void printMsg(){
        std::cout<<"Derived Function"<<std::endl;
    }
};
int main()
{
    Child c1;
    Parent* ptr = &c1;
    ptr->printMsg();
    return 0;
}
