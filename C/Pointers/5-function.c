#include<stdio.h>

int incrementByReturn(int a) {
    a = a + 1;
    return a;
}

void incrementByPointer(int* p_a) {
    *p_a = *p_a + 1;
}

int main() {
    int a, b;
    a = 1;

    // incremented a goes to b and remains with the same value
    b = incrementByReturn(a); // function returns mutated value
    printf("b = %d\n", b);

    // a is incremented
    incrementByPointer(&a); // function mutates the actual value of the passed argument
    printf("a = %d\n", a);

    return 0;
}