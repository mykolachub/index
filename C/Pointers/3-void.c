#include<stdio.h>


int main() {
    int a = 10;
    int* p = &a;

    void* p0;
    p0 = p;

    printf("Address = %d Value = %d\n", p, *p);
    printf("Address = %d Value is imposible to get\n", p0);

    return 0;
}