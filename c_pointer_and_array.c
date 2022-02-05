//
// Created by MinsooLee on 2022/02/05.
//

#include <stdio.h>

int main() {

    int a[5] = {20, 30, 40};

    printf("a = %p &a[0] = %p\n", a, &a[0]);
    printf("*a == %d\n", *a);

    for (int i = 0; i < 5; ++i) {
        printf("a[%d] = %d, *(a+%d) = %d \n", i, a[i], i, *(a+i));
    }


    return 0;
}