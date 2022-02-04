//
// Created by MinsooLee on 2022/02/04.
//

#include <stdio.h>

int main(void) {

    int i = 100;
    int *pi = &i;

    printf("&i = %p\n", &i);
    printf("i = %d\n", i);

    printf("*pi = %d\n", *pi);
    printf("pi = %p\n", pi);

    *pi = 200;
    printf("i = %d\n", i);
    printf("*pi = %d\n", i);

    return 0;
}