#include<iostream>
using namespace std;
inline void displayNum(int num){
    cout << num <<endl;
}
// int main(){
//     displayNum(5);
//     return 0;
// }

//lambda function  

auto greet = [](string name){
    cout << "Hello " << name << endl;
};
int main(){
    greet("John");
    return 0;
}
