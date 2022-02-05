//
// Created by MinsooLee on 2022/02/05.
//

#include <stdio.h>

int add(int, int);
int sub(int, int);
int mult(int, int);

int main() {
    int result;
    int (*pf) (int, int); // 함수 포인터 정의

    pf = &add;
    result = (*pf)(10, 20);
    printf("10 + 20 = %d \n", result);
    pf = &sub;
    result = pf(10, 20);
    printf("10 - 20 = %d \n", result);
    pf = &mult;
    result = pf(10, 20);
    printf("10 * 20 = %d \n", result);

    return 0;
}

int add (int x, int y) {
    return x + y;
}

int sub (int x, int y) {
    return x - y;
}

int mult(int x, int y) {
    return x * y;
}