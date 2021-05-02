#include<stdio.h>


int main() {
    int a = 10; // variable has a value and address
    int *p = &a; // poiner type int*. points to "a" address. *p - takes VALUE at "a" address
    printf("address of a is %d\n", &a);
    printf("address of p is %d\n", p);
    printf("Value at address p is %d\n", *p);
    printf("Is *p equals a? Yes: %d\n", *p == a);

    return 0;
}