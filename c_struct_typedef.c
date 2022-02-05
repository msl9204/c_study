//
// Created by MinsooLee on 2022/02/05.
//

#include <stdio.h>
#include <stdlib.h>

int main() {

    typedef unsigned char BYTE;
    BYTE index;

    typedef int INT32;
    typedef unsigned int UINT32;

    INT32 i;
    UINT32 k;

    // typedef를 이용한 정의 1
    struct Person {
        char name[100];
        int age;
        int height;
        float weight;
    };
    typedef struct Person Person;

    // typedef를 이용한 정의 2
    typedef struct Persion2 {
        char name[100];
        int age;
        int height;
        float weight;
    } Person2;


    return 0;
}
