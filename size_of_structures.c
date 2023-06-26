//find the size of the structures 
#include<stdio.h>
struct abc1{
    char c1;
    int i1;
    char c2;
};
struct abc3{
    char c1;
    short s1;
    char c2;
};
struct abc2
{
    char c1;
    char c2;
    int i1;
};

int main(){
    printf("%d\n",sizeof(struct abc1));
    printf("%d\n",sizeof(struct abc2));
    printf("%d\n",sizeof(struct abc3));
    return 0;
}

