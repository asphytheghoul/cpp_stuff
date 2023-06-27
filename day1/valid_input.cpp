// #include<iostream>
// int main(){
// std::cout<<4+8.2<<std::endl;
// }
//how to check if the return type of an input in cin was of the correct type or not 
// Path: test2.cpp
#include<iostream>
int main(){
int x;
std::cin>>x;
if(std::cin.fail()){
std::cout<<"Error"<<std::endl;
}
else{
std::cout<<x<<std::endl;
}
}
