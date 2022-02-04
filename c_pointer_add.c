//
// Created by MinsooLee on 2022/02/04.
//

#include <stdio.h>
#include <assert.h>

int main() {

    char *pc;
    int *pi;
    double *pd;

    pc = (char *) 10000;
    pi = (int *) 10000;
    pd = (double *) 10000;
    printf("증가 전 pc=%d, pi=%d, pd=%d\n", (int)pc, (int)pi, (int)pd);
    pc++;
    pi++;
    pd++;
    printf("증가 후 pc=%d, pi=%d, pd=%d\n", (int)pc, (int)pi, (int)pd);

    printf("pc+2=%d, pi+2=%d, pd+2=%d\n", (int)(pc+2), (int)(pi+2), (int)(pd+2));

    int *pa, x;
    int a[20];

    pa = &a[5];
    x = *pa;
    printf("%d", *&x);
    assert(x == *&x);


    return 0;
}
