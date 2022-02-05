//
// Created by MinsooLee on 2022/02/05.
//

#include <stdio.h>

int main() {
    int a[] = {100, 200};
    int *p = a, q;

    printf("&a[0] = %p, &a[1] = %p\n", &a[0], &a[1]);
    printf("a[0] = %d, a[1] = %d, p = %p, *p = %d\n", a[0], a[1], p, *p);

    q = *p++;

    printf("after : q = *p++; \n");
    printf("a[0] = %d, a[1] = %d, p = %p, *p = %d\n", a[0], a[1], p, *p);


    printf("================================\n");

    int b[] = {300, 400};
    p = b;

    printf("&b[0] = %p, &b[1] = %p\n", &b[0], &b[1]);
    printf("b[0] = %d, b[1] = %d, p = %p, *p = %d\n", b[0], b[1], p, *p);

    q = *++p; // ++p; q = *p; 와 같다.

    printf("after : q = *++p; \n");
    printf("a[0] = %d, a[1] = %d, p = %p, *p = %d\n", b[0], b[1], p, *p);

    printf("================================\n");

    int c[] = {500, 600};
    p = c;

    printf("&b[0] = %p, &b[1] = %p\n", &c[0], &c[1]);
    printf("c[0] = %d, c[1] = %d, p = %p, *p = %d\n", c[0], c[1], p, *p);

    q = ++*p; // ++(*p); q = (*p); 와 같다.

    printf("after : q = ++*p; \n");
    printf("a[0] = %d, a[1] = %d, p = %p, *p = %d\n", c[0], c[1], p, *p);

    return 0;

}