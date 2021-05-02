#include<stdio.h>


int main() {
    int a = 10;
    int* p;
    p = &a;
    printf("Address of p is %d\n", p);
    printf("Value at address p is %d\n", *p);
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address of p+1 %d\n", p + 1);
    printf("Value at address p+1 is %d\n", *(p + 1));

    return 0;
}