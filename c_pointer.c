//
// Created by MinsooLee on 2022/02/04.
//

#include <stdio.h>

int main() {
    int a = 10;
    char b = 'c';
    double c  = 170.2;

    printf("a의 주소 : %p\n", &a);
    printf("b의 주소 : %p\n", &b);
    printf("c의 주소 : %p\n", &c);

    int i = 10;
    double f = 12.3;
    int *pi = NULL;
    int *pf = NULL;

    pi = &i;
    pf = &f;
    printf("%p %p\n", pf, &f);
    printf("%p %p\n", pf, &f);




    return 0;
}