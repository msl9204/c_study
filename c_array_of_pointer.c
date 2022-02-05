//
// Created by MinsooLee on 2022/02/05.
//

#include <stdio.h>

int main() {

    int i, n;
    // 포인터 배열
    char *x[] = {
            "hello",
            "hi",
            "welcome",
            "bonjour"
    };
    n = sizeof x / sizeof x[0];
    printf("%d\n", sizeof x);
    printf("%d\n", sizeof x[0]);
    for (int i = 0; i < n; ++i) {
        printf("%s \n", x[i]);
    }

    return 0;
}