#include<stdio.h>

int num_of_bits_set_to_1(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Number of bits set to 1: %d\n",num_of_bits_set_to_1(n));
    return 0;
}


