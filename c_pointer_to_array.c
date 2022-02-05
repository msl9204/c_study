//
// Created by MinsooLee on 2022/02/05.
//

#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4 ,5};
    int (*pa) [5];
    int i;
    pa = &a;
    for (int i = 0; i < 5; ++i) {
        printf("%d \n", (*pa)[i]);
    }

    return 0;
}