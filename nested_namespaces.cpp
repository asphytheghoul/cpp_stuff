#include<iostream>

namespace A{
    int x=10;
    namespace B{
        int x=20;
        namespace C{
            int x=30;
        }
    }
}

namespace D{
    int y = 20;
    namespace E{
        int z = 30;
        void my_func();
    }
}

void D::E::my_func(){
    std::cout<<"Hello World"<<std::endl;
}

int main(){
    std::cout<<A::x<<std::endl;
    std::cout<<A::B::C::x<<std::endl;
    std::cout<<A::B::x<<std::endl;
    std::cout<<D::y<<std::endl;
    std::cout<<D::E::z<<std::endl;
    D::E::my_func();
}