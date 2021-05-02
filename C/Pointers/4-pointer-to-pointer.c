#include<stdio.h>

int main() {
    int a = 1;

    int* p; 
    p = &a;

    int** q;
    q = &p; // points to address of p which points to address of a

    int*** r;
    r = &q;

    printf("%d\n", a); // 1
    printf("%d\n", *p); // 1
    printf("%d\n", **q); // 1
    printf("%d\n", ***r); // 1

    **q = 2; // *p changes to 2 --> a changes to 2
    ***r = **q + *p;
    printf("%d\n", a); // 4

    return 0;
}