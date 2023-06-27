//swap values of 2 variables by passing the pointers to the 2 variables as args and call it in main
#include<iostream>
void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int a,b;
    std::cin>>a>>b;
    swap(a,b);
    std::cout<<"a = "<<a<<" b = "<<b<<std::endl;
}