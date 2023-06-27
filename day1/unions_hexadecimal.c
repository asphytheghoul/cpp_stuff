//given a long number, use unions to separate the number by a boundary of 2 

#include<stdio.h>

union num{
    long a;
    char cha[4];
};

int main(){
    long l1 = 0x01020304;
    union num uvar;
    uvar.a = l1;
    for (int i = 0;i<4;i++){
        printf("%d\n",uvar.cha[i]);
    }
    // printf("%d",uvar.a);

}